# Results - BLAS HBM_CACHE

```bash
 ./job-blas
srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-blas -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Reference dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=128 
 Elapsed time is : 0.1365 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.134365 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |    4731023 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |    6785015 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |    6332970 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |     216099 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |     239915 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |     215668 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |     239984 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |     215818 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |     239960 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |     214052 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |     239254 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      53405 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      55882 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      52960 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      56141 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      52887 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      55836 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      52800 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      55066 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |         79 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |        100 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |         91 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |        104 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |         97 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |        102 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |         80 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |        103 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |        156 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |        148 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |        146 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |        147 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |        150 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |        147 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |        157 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |        153 |
|      MC_CAS_READS     |  MBOX0C0 |      23116 |
|     MC_CAS_WRITES     |  MBOX0C1 |        204 |
|      MC_CAS_READS     |  MBOX1C0 |      23108 |
|     MC_CAS_WRITES     |  MBOX1C1 |        203 |
|      MC_CAS_READS     |  MBOX2C0 |      23120 |
|     MC_CAS_WRITES     |  MBOX2C1 |        194 |
|      MC_CAS_READS     |  MBOX4C0 |      23110 |
|     MC_CAS_WRITES     |  MBOX4C1 |        203 |
|      MC_CAS_READS     |  MBOX5C0 |      23110 |
|     MC_CAS_WRITES     |  MBOX5C1 |        208 |
|      MC_CAS_READS     |  MBOX6C0 |      23132 |
|     MC_CAS_WRITES     |  MBOX6C1 |        192 |
+-----------------------+----------+------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |     0.1344 |
|             Runtime unhalted [s]             |     0.0048 |
|                  Clock [MHz]                 |  1499.8867 |
|                      CPI                     |     1.4342 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   866.3161 |
|    MCDRAM Memory read data volume [GBytes]   |     0.1164 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   141.1229 |
| MCDRAM Memory writeback data volume [GBytes] |     0.0190 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  1007.4390 |
|      MCDRAM Memory data volume [GBytes]      |     0.1354 |
|     DDR Memory read bandwidth [MBytes/s]     |    66.0629 |
|     DDR Memory read data volume [GBytes]     |     0.0089 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.5735 |
|   DDR Memory writeback data volume [GBytes]  |     0.0001 |
|        DDR Memory bandwidth [MBytes/s]       |    66.6364 |
|        DDR Memory data volume [GBytes]       |     0.0090 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-blas -N 512
srun: Job 63426764 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63426764
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Reference dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=512 
 Elapsed time is : 0.0716 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.069325 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |   26292100 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |   21539540 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |   20104220 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |     177279 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |     181037 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |     177107 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |     180605 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |     176957 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |     180652 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |     174795 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |     181349 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      39974 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      42531 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      39304 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      42070 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      39309 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      42207 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      39264 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      41712 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |        326 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |        367 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |        303 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |        369 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |        342 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |        342 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |        326 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |        361 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |        301 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |        293 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |        296 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |        300 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |        301 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |        315 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |        302 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |        329 |
|      MC_CAS_READS     |  MBOX0C0 |      12055 |
|     MC_CAS_WRITES     |  MBOX0C1 |        416 |
|      MC_CAS_READS     |  MBOX1C0 |      12042 |
|     MC_CAS_WRITES     |  MBOX1C1 |        403 |
|      MC_CAS_READS     |  MBOX2C0 |      12057 |
|     MC_CAS_WRITES     |  MBOX2C1 |        391 |
|      MC_CAS_READS     |  MBOX4C0 |      12061 |
|     MC_CAS_WRITES     |  MBOX4C1 |        412 |
|      MC_CAS_READS     |  MBOX5C0 |      12045 |
|     MC_CAS_WRITES     |  MBOX5C1 |        413 |
|      MC_CAS_READS     |  MBOX6C0 |      12050 |
|     MC_CAS_WRITES     |  MBOX6C1 |        402 |
+-----------------------+----------+------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |     0.0693 |
|             Runtime unhalted [s]             |     0.0154 |
|                  Clock [MHz]                 |  1499.9295 |
|                      CPI                     |     0.8192 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |  1315.1736 |
|    MCDRAM Memory read data volume [GBytes]   |     0.0912 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   234.5448 |
| MCDRAM Memory writeback data volume [GBytes] |     0.0163 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  1549.7184 |
|      MCDRAM Memory data volume [GBytes]      |     0.1074 |
|     DDR Memory read bandwidth [MBytes/s]     |    66.7553 |
|     DDR Memory read data volume [GBytes]     |     0.0046 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     2.2498 |
|   DDR Memory writeback data volume [GBytes]  |     0.0002 |
|        DDR Memory bandwidth [MBytes/s]       |    69.0051 |
|        DDR Memory data volume [GBytes]       |     0.0048 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-blas -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Reference dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=2048 
 Elapsed time is : 0.6876 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.685392 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 1360178000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |  936493600 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |  874060900 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |    5677454 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |    5933414 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |    5676702 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |    5925881 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |    5676736 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |    5926176 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |    5671785 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |    5924153 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     828193 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     830706 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     828015 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     831210 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     827215 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     831816 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     827696 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     831546 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |        856 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |        948 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |        894 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |       1001 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |        898 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |        962 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |        863 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |        973 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |        515 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |        544 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |        524 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |        542 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |        530 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |        523 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |        500 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |        549 |
|      MC_CAS_READS     |  MBOX0C0 |     128807 |
|     MC_CAS_WRITES     |  MBOX0C1 |        711 |
|      MC_CAS_READS     |  MBOX1C0 |     128771 |
|     MC_CAS_WRITES     |  MBOX1C1 |        702 |
|      MC_CAS_READS     |  MBOX2C0 |     128866 |
|     MC_CAS_WRITES     |  MBOX2C1 |        699 |
|      MC_CAS_READS     |  MBOX4C0 |     128819 |
|     MC_CAS_WRITES     |  MBOX4C1 |        687 |
|      MC_CAS_READS     |  MBOX5C0 |     128805 |
|     MC_CAS_WRITES     |  MBOX5C1 |        716 |
|      MC_CAS_READS     |  MBOX6C0 |     128889 |
|     MC_CAS_WRITES     |  MBOX6C1 |        712 |
+-----------------------+----------+------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |     0.6854 |
|             Runtime unhalted [s]             |     0.6691 |
|                  Clock [MHz]                 |  1499.6875 |
|                      CPI                     |     0.6885 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |  4332.7658 |
|    MCDRAM Memory read data volume [GBytes]   |     2.9696 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   547.5117 |
| MCDRAM Memory writeback data volume [GBytes] |     0.3753 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  4880.2775 |
|      MCDRAM Memory data volume [GBytes]      |     3.3449 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.1766 |
|     DDR Memory read data volume [GBytes]     |     0.0495 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.3947 |
|   DDR Memory writeback data volume [GBytes]  |     0.0003 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5713 |
|        DDR Memory data volume [GBytes]       |     0.0497 |
+----------------------------------------------+------------+
```

# Results - BLAS FLOPS_DP

```bash
./job-blas 
srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-blas -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Reference dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=128 
 Elapsed time is : 0.1338 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.133388 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |    4707492 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |    6648292 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |    6205276 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |       7405 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |     452985 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     0.1334 |
|      Runtime unhalted [s]     |     0.0047 |
|          Clock [MHz]          |  1499.9244 |
|              CPI              |     1.4123 |
|   DP [MFLOP/s] (SSE assumed)  |     6.8475 |
|   DP [MFLOP/s] (AVX assumed)  |    13.6395 |
| DP [MFLOP/s] (AVX512 assumed) |    27.2234 |
|        Packed [MUOPS/s]       |     3.3960 |
|        Scalar [MUOPS/s]       |     0.0555 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-blas -N 512
srun: Job 63426764 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63426764
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Reference dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=512 
 Elapsed time is : 0.0672 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.066752 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |   26204410 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |   20501910 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |   19135060 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |       7406 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |   17373900 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     0.0668 |
|      Runtime unhalted [s]     |     0.0146 |
|          Clock [MHz]          |  1499.9828 |
|              CPI              |     0.7824 |
|   DP [MFLOP/s] (SSE assumed)  |   520.6616 |
|   DP [MFLOP/s] (AVX assumed)  |  1041.2122 |
| DP [MFLOP/s] (AVX512 assumed) |  2082.3134 |
|        Packed [MUOPS/s]       |   260.2753 |
|        Scalar [MUOPS/s]       |     0.1109 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-blas -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Reference dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=2048 
 Elapsed time is : 0.6373 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.636783 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  | 1357536000 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |  865624200 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |  807916500 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |       7420 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  | 1085460000 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     0.6368 |
|      Runtime unhalted [s]     |     0.6183 |
|          Clock [MHz]          |  1499.9809 |
|              CPI              |     0.6376 |
|   DP [MFLOP/s] (SSE assumed)  |  3409.2128 |
|   DP [MFLOP/s] (AVX assumed)  |  6818.4140 |
| DP [MFLOP/s] (AVX512 assumed) | 13636.8164 |
|        Packed [MUOPS/s]       |  1704.6006 |
|        Scalar [MUOPS/s]       |     0.0117 |
+-------------------------------+------------+
```