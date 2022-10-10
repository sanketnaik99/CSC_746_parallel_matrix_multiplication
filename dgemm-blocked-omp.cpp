#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <omp.h>
#include "likwid-stuff.h"

const char* dgemm_desc = "Blocked dgemm, OpenMP-enabled";


/* This routine performs a dgemm operation
 *  C := C + A * B
 * where A, B, and C are n-by-n matrices stored in column-major format.
 * On exit, A and B maintain their input values. */
void copy_from_matrix_to_block(double* Mat, int n, int block_size, int i, int j, double* MatLocal, bool doPrint){
   for (int a = 0; a < block_size; a++){
      for (int b = 0; b < block_size; b++){
         MatLocal[a + b*block_size] = Mat[i+a + (j+b)*n];
      }
   }
}

void copy_from_block_to_matrix(double* Mat, int n, int block_size, int i, int j, double* MatLocal){
   for (int a = 0; a < block_size; a++){
      for (int b = 0; b < block_size; b++){
         Mat[i+a + (j+b)*n] = MatLocal[a + b*block_size];
      }
   }
}

void square_dgemm_local(int n, double* A, double* B, double* C) {
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
         for (int k = 0; k < n; k++){ 
            C[i + j*n] += A[i + k*n] * B[k + j*n];
         }
      }
   }
}

void square_dgemm_blocked(int n, int block_size, double* A, double* B, double* C) 
{
   // insert your code here: implementation of blocked matrix multiply with copy optimization and OpenMP parallelism enabled

   // be sure to include LIKWID_MARKER_START(MY_MARKER_REGION_NAME) inside the block of parallel code,
   // but before your matrix multiply code, and then include LIKWID_MARKER_STOP(MY_MARKER_REGION_NAME)
   // after the matrix multiply code but before the end of the parallel code block.

   // std::cout << "Insert your blocked matrix multiply with copy optimization, openmp-parallel edition here " << std::endl;
   #pragma omp parallel
   { LIKWID_MARKER_START(MY_MARKER_REGION_NAME);
   
   int n_blocks = n/block_size;
   double *ALocal = (double *)malloc(sizeof(double)*block_size*block_size);
   double *BLocal = (double *)malloc(sizeof(double)*block_size*block_size);
   double *CLocal = (double *)malloc(sizeof(double)*block_size*block_size);

   #pragma omp parallel for collapse(2)
   for (int i = 0; i < n_blocks; i++){
      for (int j = 0; j < n_blocks; j++){
         
         copy_from_matrix_to_block(C, n, block_size, i*block_size, j*block_size, CLocal, true);

         for (int k = 0; k < n_blocks; k++){
            copy_from_matrix_to_block(A, n, block_size, i*block_size, k*block_size, ALocal, false);
            copy_from_matrix_to_block(B, n, block_size, k*block_size, j*block_size, BLocal, false);
            
            square_dgemm_local(block_size, ALocal, BLocal, CLocal);
         }
         copy_from_block_to_matrix(C, n, block_size, i*block_size, j*block_size, CLocal);
      }
   }

   free((void *)ALocal);
   free((void *)BLocal);
   free((void *)CLocal);

   LIKWID_MARKER_STOP(MY_MARKER_REGION_NAME); }
}
