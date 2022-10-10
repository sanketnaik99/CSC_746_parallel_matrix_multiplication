# Build instructions

Run the following commands in order to setup for the build

```bash
export MODULEPATH=/project/projectdirs/m3930/modulefiles:$MODULEPATH
module load likwid/5.2.0
module swap PrgEnv-intel PrgEnv-gnu

mkdir build  
```

Before running the programs, make the following modifications to the `job.in` file according to the program being run

## Basic

No major modifications are required. But please make sure that the following line is commented out

```bash
55> #  for B in 4 16  # uncomment these two lines
56> #     do   
.
.
.
69> # done 
```

To select the performance counter, uncomment the line with the selected counter and comment the line with the other counter as follows 

```bash
24> # export PERF_COUNTER_GROUP=HBM_CACHE
25> export PERF_COUNTER_GROUP=FLOPS_DP
```

## Blocked

Uncomment the following lines

```bash
55>  for B in 4 16  # uncomment these two lines
56>     do   
.
.
.
69> done 
```

Add the `-B $B` to the end of the following lines

```bash
64> echo srun -n 1 likwid-perfctr $MARKER_FLAG -g $PERF_COUNTER_GROUP -C N:0-$maxcore ./benchmark-@BENCHMARK@ -N $N -B $B
65> srun -n 1 likwid-perfctr $MARKER_FLAG -g $PERF_COUNTER_GROUP -C N:0-$maxcore ./benchmark-@BENCHMARK@ -N $N -B $B
```

To select the performance counter, uncomment the line with the selected counter and comment the line with the other counter as follows 

```bash
24> # export PERF_COUNTER_GROUP=HBM_CACHE
25> export PERF_COUNTER_GROUP=FLOPS_DP
```

## CBLAS

Replace lines 55-60 with this

```bash
55> #  for B in 4 16  # uncomment these two lines
56> #     do            # to also iterate over block sizes for the blocked version
57>
58>    # for t in 1 4 16 64  # loop over concurrency level
59>      # for t in 1 4
60>      for t in 1  
```

Comment out line 69 as follows

```bash
>69 # done
```


To select the performance counter, uncomment the line with the selected counter and comment the line with the other counter as follows 

```bash
24> # export PERF_COUNTER_GROUP=HBM_CACHE
25> export PERF_COUNTER_GROUP=FLOPS_DP
```


# Compiling and Running all Programs

Compile the programs with the following commmands

```bash
cd build/
cmake ../ -Wno-dev
make
```

Run the programs with the following commands

```bash
chmod +x ./job-basic-omp
chmod +x ./job-blocked-omp
chmod +x ./job-blas

# Run the job
./job-basic-omp
./job-blocked-omp
./job-blas
```