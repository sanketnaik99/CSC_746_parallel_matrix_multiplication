# Results - HBM_CACHE FLAG

```bash
 ./job-basic-omp 
srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=128 
 Elapsed time is : 0.0096 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.009357 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |
+-----------------------+----------+------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |     0.0094 |
|             Runtime unhalted [s]             |          0 |
|                  Clock [MHz]                 |      -     |
|                      CPI                     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |
|     DDR Memory read data volume [GBytes]     |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |
|        DDR Memory data volume [GBytes]       |          0 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0038 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.003135 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |    3257295 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+

+----------------------------+----------+---------+-----+---------+-------------+
|            Event           |  Counter |   Sum   | Min |   Max   |     Avg     |
+----------------------------+----------+---------+-----+---------+-------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |       0 |   0 |       0 |           0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |       0 |   0 |       0 |           0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 3257295 |   0 | 3257295 | 814323.7500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |       0 |   0 |       0 |           0 |
+----------------------------+----------+---------+-----+---------+-------------+

+----------------------------------------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     0.0031 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------+
|                       Metric                      |   Sum  | Min |   Max  |   Avg  |
+---------------------------------------------------+--------+-----+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 0.0031 |   0 | 0.0031 | 0.0008 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |      0 |
|                      CPI STAT                     |      0 | inf |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |      0 |
+---------------------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0031 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.001815 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |    8599506 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+---------+-----+---------+-------------+
|            Event           |  Counter |   Sum   | Min |   Max   |     Avg     |
+----------------------------+----------+---------+-----+---------+-------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |       0 |   0 |       0 |           0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |       0 |   0 |       0 |           0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 8599506 |   0 | 8599506 | 537469.1250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |       0 |   0 |       0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       0 |   0 |       0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |       0 |   0 |       0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |       0 |   0 |       0 |           0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |       0 |   0 |       0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |       0 |   0 |       0 |           0 |
+----------------------------+----------+---------+-----+---------+-------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     0.0018 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------+
|                       Metric                      |   Sum  | Min |   Max  |   Avg  |
+---------------------------------------------------+--------+-----+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 0.0018 |   0 | 0.0018 | 0.0001 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |      0 |
|                      CPI STAT                     |      0 | inf |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |      0 |
+---------------------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0069 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.002671 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |   82307900 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+----------+-----+----------+--------------+
|            Event           |  Counter |    Sum   | Min |    Max   |      Avg     |
+----------------------------+----------+----------+-----+----------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |        0 |   0 |        0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |        0 |   0 |        0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 82307900 |   0 | 82307900 | 1.286061e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |        0 |   0 |        0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |        0 |   0 |        0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |        0 |   0 |        0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |        0 |   0 |        0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |        0 |   0 |        0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |        0 |   0 |        0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |        0 |   0 |        0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |        0 |   0 |        0 |            0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |        0 |   0 |        0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |        0 |   0 |        0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |        0 |   0 |        0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |        0 |   0 |        0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |        0 |   0 |        0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |        0 |   0 |        0 |            0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |        0 |   0 |        0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |        0 |   0 |        0 |            0 |
+----------------------------+----------+----------+-----+----------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     0.0027 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------------+
|                       Metric                      |   Sum  | Min |   Max  |      Avg     |
+---------------------------------------------------+--------+-----+--------+--------------+
|              Runtime (RDTSC) [s] STAT             | 0.0027 |   0 | 0.0027 | 4.218750e-05 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |            0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |            0 |
|                      CPI STAT                     |      0 | inf |      0 |            0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |            0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |            0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |            0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |            0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |            0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |            0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |            0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |            0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |            0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |            0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |            0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |            0 |
+---------------------------------------------------+--------+-----+--------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 3.4247 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.424266 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 4706823000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |
+-----------------------+----------+------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |     3.4243 |
|             Runtime unhalted [s]             |          0 |
|                  Clock [MHz]                 |          0 |
|                      CPI                     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |
|     DDR Memory read data volume [GBytes]     |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |
|        DDR Memory data volume [GBytes]       |          0 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 1.1552 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   1.154238 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 4505319000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+

+----------------------------+----------+------------+-----+------------+------------+
|            Event           |  Counter |     Sum    | Min |     Max    |     Avg    |
+----------------------------+----------+------------+-----+------------+------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |          0 |   0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |          0 |   0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 4505319000 |   0 | 4505319000 | 1126329750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |          0 |   0 |          0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |          0 |   0 |          0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          0 |   0 |          0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          0 |   0 |          0 |          0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |          0 |   0 |          0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          0 |   0 |          0 |          0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |          0 |   0 |          0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          0 |   0 |          0 |          0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |          0 |   0 |          0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          0 |   0 |          0 |          0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |          0 |   0 |          0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          0 |   0 |          0 |          0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |          0 |   0 |          0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          0 |   0 |          0 |          0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |          0 |   0 |          0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          0 |   0 |          0 |          0 |
+----------------------------+----------+------------+-----+------------+------------+

+----------------------------------------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     1.1542 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------+
|                       Metric                      |   Sum  | Min |   Max  |   Avg  |
+---------------------------------------------------+--------+-----+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 1.1542 |   0 | 1.1542 | 0.2885 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |      0 |
|                      CPI STAT                     |      0 | inf |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |      0 |
+---------------------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.2929 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.288271 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1668349000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+------------+-----+------------+--------------+
|            Event           |  Counter |     Sum    | Min |     Max    |      Avg     |
+----------------------------+----------+------------+-----+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |          0 |   0 |          0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |          0 |   0 |          0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1668349000 |   0 | 1668349000 | 1.042718e+08 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          0 |   0 |          0 |            0 |
+----------------------------+----------+------------+-----+------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     0.2883 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------+
|                       Metric                      |   Sum  | Min |   Max  |   Avg  |
+---------------------------------------------------+--------+-----+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 0.2883 |   0 | 0.2883 | 0.0180 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |      0 |
|                      CPI STAT                     |      0 | inf |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |      0 |
+---------------------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.1046 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.084598 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1430299000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+------------+-----+------------+--------------+
|            Event           |  Counter |     Sum    | Min |     Max    |      Avg     |
+----------------------------+----------+------------+-----+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |          0 |   0 |          0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |          0 |   0 |          0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1430299000 |   0 | 1430299000 | 2.234842e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |          0 |   0 |          0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |          0 |   0 |          0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |          0 |   0 |          0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          0 |   0 |          0 |            0 |
+----------------------------+----------+------------+-----+------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     0.0846 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------+
|                       Metric                      |   Sum  | Min |   Max  |   Avg  |
+---------------------------------------------------+--------+-----+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 0.0846 |   0 | 0.0846 | 0.0013 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |      0 |
|                      CPI STAT                     |      0 | inf |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |      0 |
+---------------------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 220.6246 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 220.624800 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+--------------+
|         Event         |  Counter |  HWThread 0  |
+-----------------------+----------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 303529100000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |            0 |
+-----------------------+----------+--------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |   220.6248 |
|             Runtime unhalted [s]             |          0 |
|                  Clock [MHz]                 |          0 |
|                      CPI                     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |
|     DDR Memory read data volume [GBytes]     |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |
|        DDR Memory data volume [GBytes]       |          0 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 78.5168 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  78.516180 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+--------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+--------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 426638900000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |            0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |            0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |            0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |            0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |            0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |            0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |            0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |            0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |            0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |            0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |            0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |            0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |            0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |            0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |            0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |            0 |          0 |          0 |          0 |
+-----------------------+----------+--------------+------------+------------+------------+

+----------------------------+----------+--------------+-----+--------------+--------------+
|            Event           |  Counter |      Sum     | Min |      Max     |      Avg     |
+----------------------------+----------+--------------+-----+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |            0 |   0 |            0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |            0 |   0 |            0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 426638900000 |   0 | 426638900000 | 106659725000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            0 |   0 |            0 |            0 |
+----------------------------+----------+--------------+-----+--------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |    78.5162 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+---------+-----+---------+---------+
|                       Metric                      |   Sum   | Min |   Max   |   Avg   |
+---------------------------------------------------+---------+-----+---------+---------+
|              Runtime (RDTSC) [s] STAT             | 78.5162 |   0 | 78.5162 | 19.6290 |
|             Runtime unhalted [s] STAT             |       0 |   0 |       0 |       0 |
|                  Clock [MHz] STAT                 |       0 |   0 |       0 |       0 |
|                      CPI STAT                     |       0 | inf |       0 |       0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |       0 |   0 |       0 |       0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0 |   0 |       0 |       0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |       0 |   0 |       0 |       0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0 |   0 |       0 |       0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |       0 |   0 |       0 |       0 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0 |   0 |       0 |       0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |       0 |   0 |       0 |       0 |
|     DDR Memory read data volume [GBytes] STAT     |       0 |   0 |       0 |       0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0 |   0 |       0 |       0 |
|   DDR Memory writeback data volume [GBytes] STAT  |       0 |   0 |       0 |       0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |       0 |   0 |       0 |       0 |
|        DDR Memory data volume [GBytes] STAT       |       0 |   0 |       0 |       0 |
+---------------------------------------------------+---------+-----+---------+---------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 20.6963 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  20.691350 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 372593000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+--------------+-----+--------------+-------------+
|            Event           |  Counter |      Sum     | Min |      Max     |     Avg     |
+----------------------------+----------+--------------+-----+--------------+-------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |            0 |   0 |            0 |           0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |            0 |   0 |            0 |           0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 372593000000 |   0 | 372593000000 | 23287062500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |            0 |   0 |            0 |           0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |            0 |   0 |            0 |           0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            0 |   0 |            0 |           0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            0 |   0 |            0 |           0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |            0 |   0 |            0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            0 |   0 |            0 |           0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |            0 |   0 |            0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            0 |   0 |            0 |           0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |            0 |   0 |            0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            0 |   0 |            0 |           0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |            0 |   0 |            0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            0 |   0 |            0 |           0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |            0 |   0 |            0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            0 |   0 |            0 |           0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |            0 |   0 |            0 |           0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            0 |   0 |            0 |           0 |
+----------------------------+----------+--------------+-----+--------------+-------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |    20.6913 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+---------+-----+---------+--------+
|                       Metric                      |   Sum   | Min |   Max   |   Avg  |
+---------------------------------------------------+---------+-----+---------+--------+
|              Runtime (RDTSC) [s] STAT             | 20.6913 |   0 | 20.6913 | 1.2932 |
|             Runtime unhalted [s] STAT             |       0 |   0 |       0 |      0 |
|                  Clock [MHz] STAT                 |       0 |   0 |       0 |      0 |
|                      CPI STAT                     |       0 | inf |       0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |       0 |   0 |       0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0 |   0 |       0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |       0 |   0 |       0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0 |   0 |       0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |       0 |   0 |       0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0 |   0 |       0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |       0 |   0 |       0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |       0 |   0 |       0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0 |   0 |       0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |       0 |   0 |       0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |       0 |   0 |       0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |       0 |   0 |       0 |      0 |
+---------------------------------------------------+---------+-----+---------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 5.6109 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   5.591549 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 157854300000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+--------------+-----+--------------+--------------+
|            Event           |  Counter |      Sum     | Min |      Max     |      Avg     |
+----------------------------+----------+--------------+-----+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |            0 |   0 |            0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |            0 |   0 |            0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 157854300000 |   0 | 157854300000 | 2.466473e+09 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |            0 |   0 |            0 |            0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |            0 |   0 |            0 |            0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            0 |   0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            0 |   0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |            0 |   0 |            0 |            0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            0 |   0 |            0 |            0 |
+----------------------------+----------+--------------+-----+--------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     5.5915 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+-----+--------+--------+
|                       Metric                      |   Sum  | Min |   Max  |   Avg  |
+---------------------------------------------------+--------+-----+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 5.5915 |   0 | 5.5915 | 0.0874 |
|             Runtime unhalted [s] STAT             |      0 |   0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |   0 |      0 |      0 |
|                      CPI STAT                     |      0 | inf |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |   0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |   0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |   0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |   0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |   0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |   0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |   0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |   0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |   0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |   0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |   0 |      0 |      0 |
+---------------------------------------------------+--------+-----+--------+--------+
```


# Results - FLOPS_DP Flag

```bash
 ./job-basic-omp 
srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=128 
 Elapsed time is : 0.0098 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.009458 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     0.0095 |
|      Runtime unhalted [s]     |          0 |
|          Clock [MHz]          |      -     |
|              CPI              |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |
|        Packed [MUOPS/s]       |          0 |
|        Scalar [MUOPS/s]       |          0 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-3 ./benchmark-basic-omp -N 128
srun: Job 63423290 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63423290
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0040 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.003074 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |    4273167 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+

+-------------------------------+---------+---------+-----+---------+--------------+
|             Event             | Counter |   Sum   | Min |   Max   |      Avg     |
+-------------------------------+---------+---------+-----+---------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |       0 |   0 |       0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |       0 |   0 |       0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 4273167 |   0 | 4273167 | 1.068292e+06 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |       0 |   0 |       0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |       0 |   0 |       0 |            0 |
+-------------------------------+---------+---------+-----+---------+--------------+

+-------------------------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     0.0031 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.0031 |   0 | 0.0031 | 0.0008 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0035 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.001513 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |   23697730 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-------------------------------+---------+----------+-----+----------+--------------+
|             Event             | Counter |    Sum   | Min |    Max   |      Avg     |
+-------------------------------+---------+----------+-----+----------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |        0 |   0 |        0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |        0 |   0 |        0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 23697730 |   0 | 23697730 | 1.481108e+06 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |        0 |   0 |        0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |        0 |   0 |        0 |            0 |
+-------------------------------+---------+----------+-----+----------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     0.0015 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.0015 |   0 | 0.0015 | 0.0001 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0160 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.003599 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |   83025650 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-------------------------------+---------+----------+-----+----------+--------------+
|             Event             | Counter |    Sum   | Min |    Max   |      Avg     |
+-------------------------------+---------+----------+-----+----------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |        0 |   0 |        0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |        0 |   0 |        0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 83025650 |   0 | 83025650 | 1.297276e+06 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |        0 |   0 |        0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |        0 |   0 |        0 |            0 |
+-------------------------------+---------+----------+-----+----------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     0.0036 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.0036 |   0 | 0.0036 | 0.0001 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 3.4252 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.424682 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 4703224000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     3.4247 |
|      Runtime unhalted [s]     |          0 |
|          Clock [MHz]          |          0 |
|              CPI              |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |
|        Packed [MUOPS/s]       |          0 |
|        Scalar [MUOPS/s]       |          0 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-3 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 1.1568 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   1.155573 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 4347645000 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+

+-------------------------------+---------+------------+-----+------------+------------+
|             Event             | Counter |     Sum    | Min |     Max    |     Avg    |
+-------------------------------+---------+------------+-----+------------+------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 4347645000 |   0 | 4347645000 | 1086911250 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |          0 |
+-------------------------------+---------+------------+-----+------------+------------+

+-------------------------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     1.1556 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 1.1556 |   0 | 1.1556 | 0.2889 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.2936 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.287945 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 1623364000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-------------------------------+---------+------------+-----+------------+-----------+
|             Event             | Counter |     Sum    | Min |     Max    |    Avg    |
+-------------------------------+---------+------------+-----+------------+-----------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |         0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |         0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 1623364000 |   0 | 1623364000 | 101460250 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |         0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |         0 |
+-------------------------------+---------+------------+-----+------------+-----------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     0.2879 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.2879 |   0 | 0.2879 | 0.0180 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 512
srun: Job 63423290 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63423290
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.1155 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.083920 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 1383461000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-------------------------------+---------+------------+-----+------------+--------------+
|             Event             | Counter |     Sum    | Min |     Max    |      Avg     |
+-------------------------------+---------+------------+-----+------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 1383461000 |   0 | 1383461000 | 2.161658e+07 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |            0 |
+-------------------------------+---------+------------+-----+------------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     0.0839 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.0839 |   0 | 0.0839 | 0.0013 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 220.7820 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 220.782100 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+--------------+
|           Event          | Counter |  HWThread 0  |
+--------------------------+---------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 303559900000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |
+--------------------------+---------+--------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |   220.7821 |
|      Runtime unhalted [s]     |          0 |
|          Clock [MHz]          |          0 |
|              CPI              |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |
|        Packed [MUOPS/s]       |          0 |
|        Scalar [MUOPS/s]       |          0 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-3 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 78.8760 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  78.875180 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+--------------+------------+------------+------------+
|           Event          | Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+--------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 429281800000 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |          0 |          0 |          0 |
+--------------------------+---------+--------------+------------+------------+------------+

+-------------------------------+---------+--------------+-----+--------------+--------------+
|             Event             | Counter |      Sum     | Min |      Max     |      Avg     |
+-------------------------------+---------+--------------+-----+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |            0 |   0 |            0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |            0 |   0 |            0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 429281800000 |   0 | 429281800000 | 107320450000 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |            0 |   0 |            0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |            0 |   0 |            0 |            0 |
+-------------------------------+---------+--------------+-----+--------------+--------------+

+-------------------------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |    78.8752 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+

+------------------------------------+---------+-----+---------+---------+
|               Metric               |   Sum   | Min |   Max   |   Avg   |
+------------------------------------+---------+-----+---------+---------+
|      Runtime (RDTSC) [s] STAT      | 78.8752 |   0 | 78.8752 | 19.7188 |
|      Runtime unhalted [s] STAT     |       0 |   0 |       0 |       0 |
|          Clock [MHz] STAT          |       0 |   0 |       0 |       0 |
|              CPI STAT              |       0 | inf |       0 |       0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |       0 |   0 |       0 |       0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |       0 |   0 |       0 |       0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |       0 |   0 |       0 |       0 |
|        Packed [MUOPS/s] STAT       |       0 |   0 |       0 |       0 |
|        Scalar [MUOPS/s] STAT       |       0 |   0 |       0 |       0 |
+------------------------------------+---------+-----+---------+---------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 20.7447 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  20.737110 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|           Event          | Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 372702900000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-------------------------------+---------+--------------+-----+--------------+-------------+
|             Event             | Counter |      Sum     | Min |      Max     |     Avg     |
+-------------------------------+---------+--------------+-----+--------------+-------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |            0 |   0 |            0 |           0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |            0 |   0 |            0 |           0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 372702900000 |   0 | 372702900000 | 23293931250 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |            0 |   0 |            0 |           0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |            0 |   0 |            0 |           0 |
+-------------------------------+---------+--------------+-----+--------------+-------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |    20.7371 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+------------------------------------+---------+-----+---------+--------+
|               Metric               |   Sum   | Min |   Max   |   Avg  |
+------------------------------------+---------+-----+---------+--------+
|      Runtime (RDTSC) [s] STAT      | 20.7371 |   0 | 20.7371 | 1.2961 |
|      Runtime unhalted [s] STAT     |       0 |   0 |       0 |      0 |
|          Clock [MHz] STAT          |       0 |   0 |       0 |      0 |
|              CPI STAT              |       0 | inf |       0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |       0 |   0 |       0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |       0 |   0 |       0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |       0 |   0 |       0 |      0 |
|        Packed [MUOPS/s] STAT       |       0 |   0 |       0 |      0 |
|        Scalar [MUOPS/s] STAT       |       0 |   0 |       0 |      0 |
+------------------------------------+---------+-----+---------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 5.6370 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   5.603262 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|           Event          | Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 152598700000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-------------------------------+---------+--------------+-----+--------------+--------------+
|             Event             | Counter |      Sum     | Min |      Max     |      Avg     |
+-------------------------------+---------+--------------+-----+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |            0 |   0 |            0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |            0 |   0 |            0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 152598700000 |   0 | 152598700000 | 2.384355e+09 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |            0 |   0 |            0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |            0 |   0 |            0 |            0 |
+-------------------------------+---------+--------------+-----+--------------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     5.6033 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (AVX assumed)  |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| DP [MFLOP/s] (AVX512 assumed) |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Packed [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        Scalar [MUOPS/s]       |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+------------------------------------+--------+-----+--------+--------+
|               Metric               |   Sum  | Min |   Max  |   Avg  |
+------------------------------------+--------+-----+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 5.6033 |   0 | 5.6033 | 0.0876 |
|      Runtime unhalted [s] STAT     |      0 |   0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |   0 |      0 |      0 |
|              CPI STAT              |      0 | inf |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |   0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |   0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |   0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |   0 |      0 |      0 |
+------------------------------------+--------+-----+--------+--------+

```