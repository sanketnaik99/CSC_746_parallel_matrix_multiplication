# Results - HBM_CACHE FLAG

```bash
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
| RDTSC Runtime [s] |   0.009288 |
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
|              Runtime (RDTSC) [s]             |     0.0093 |
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
Hello world, I'm thread 1 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0039 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.002808 |   0.002935 |   0.002953 |   0.002951 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |    4201356 |          0 |          0 |          0 |
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

+----------------------------+----------+---------+-----+---------+---------+
|            Event           |  Counter |   Sum   | Min |   Max   |   Avg   |
+----------------------------+----------+---------+-----+---------+---------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |       0 |   0 |       0 |       0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |       0 |   0 |       0 |       0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 4201356 |   0 | 4201356 | 1050339 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |       0 |   0 |       0 |       0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       0 |   0 |       0 |       0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |       0 |   0 |       0 |       0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |       0 |   0 |       0 |       0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |       0 |   0 |       0 |       0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |       0 |   0 |       0 |       0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |       0 |   0 |       0 |       0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |       0 |   0 |       0 |       0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |       0 |   0 |       0 |       0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |       0 |   0 |       0 |       0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |       0 |   0 |       0 |       0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |       0 |   0 |       0 |       0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |       0 |   0 |       0 |       0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |       0 |   0 |       0 |       0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |       0 |   0 |       0 |       0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |       0 |   0 |       0 |       0 |
+----------------------------+----------+---------+-----+---------+---------+

+----------------------------------------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     0.0028 |     0.0029 |     0.0030 |     0.0030 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+--------+--------+--------+
|                       Metric                      |   Sum  |   Min  |   Max  |   Avg  |
+---------------------------------------------------+--------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 0.0117 | 0.0028 | 0.0030 | 0.0029 |
|             Runtime unhalted [s] STAT             |      0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |      0 |      0 |      0 |
|                      CPI STAT                     |      0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |      0 |      0 |      0 |
+---------------------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0130 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.000970 |   0.001717 |   0.001521 |   0.001331 |   0.001268 |   0.001910 |   0.001850 |   0.001795 |   0.001590 |   0.001646 |    0.001135 |    0.001393 |    0.001198 |    0.001069 |    0.001956 |    0.001459 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |   18684180 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+----------+-----+----------+--------------+
|            Event           |  Counter |    Sum   | Min |    Max   |      Avg     |
+----------------------------+----------+----------+-----+----------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |        0 |   0 |        0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |        0 |   0 |        0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 18684180 |   0 | 18684180 | 1.167761e+06 |
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

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |     0.0010 |     0.0017 |     0.0015 |     0.0013 |     0.0013 |     0.0019 |     0.0018 |     0.0018 |     0.0016 |     0.0016 |      0.0011 |      0.0014 |      0.0012 |      0.0011 |      0.0020 |      0.0015 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+--------+--------+--------+--------+
|                       Metric                      |   Sum  |   Min  |   Max  |   Avg  |
+---------------------------------------------------+--------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 0.0238 | 0.0010 | 0.0020 | 0.0015 |
|             Runtime unhalted [s] STAT             |      0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |      0 |      0 |      0 |
|                      CPI STAT                     |      0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |      0 |      0 |      0 |
+---------------------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.3214 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.036365 |   0.040851 |   0.017054 |   0.022058 |   0.070429 |   0.067497 |   0.058041 |   0.053045 |   0.057231 |   0.055947 |    0.066437 |    0.066185 |    0.060313 |    0.061254 |    0.067759 |    0.068014 |    0.001060 |    0.003696 |    0.067232 |    0.070174 |    0.065088 |    0.065381 |    0.063994 |    0.064260 |    0.006415 |    0.054529 |    0.011729 |    0.009087 |    0.062068 |    0.061804 |    0.064546 |    0.064800 |    0.058879 |    0.059628 |    0.066707 |    0.066962 |    0.063176 |    0.063438 |    0.069782 |    0.063721 |    0.031808 |    0.068932 |    0.062346 |    0.044964 |    0.062903 |    0.062632 |    0.065912 |    0.065652 |    0.049033 |    0.069463 |    0.061525 |    0.060815 |    0.047082 |    0.051040 |    0.042973 |    0.068623 |    0.068351 |    0.034090 |    0.038620 |    0.029466 |    0.027141 |    0.019751 |    0.024646 |    0.014400 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1184912000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+------------+-----+------------+----------+
|            Event           |  Counter |     Sum    | Min |     Max    |    Avg   |
+----------------------------+----------+------------+-----+------------+----------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |          0 |   0 |          0 |        0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |          0 |   0 |          0 |        0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1184912000 |   0 | 1184912000 | 18514250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |          0 |   0 |          0 |        0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |          0 |   0 |          0 |        0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          0 |   0 |          0 |        0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          0 |   0 |          0 |        0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |          0 |   0 |          0 |        0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          0 |   0 |          0 |        0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |          0 |   0 |          0 |        0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          0 |   0 |          0 |        0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |          0 |   0 |          0 |        0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          0 |   0 |          0 |        0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |          0 |   0 |          0 |        0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          0 |   0 |          0 |        0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |          0 |   0 |          0 |        0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          0 |   0 |          0 |        0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |          0 |   0 |          0 |        0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          0 |   0 |          0 |        0 |
+----------------------------+----------+------------+-----+------------+----------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |     0.0364 |     0.0409 |     0.0171 |     0.0221 |     0.0704 |     0.0675 |     0.0580 |     0.0530 |     0.0572 |     0.0559 |      0.0664 |      0.0662 |      0.0603 |      0.0613 |      0.0678 |      0.0680 |      0.0011 |      0.0037 |      0.0672 |      0.0702 |      0.0651 |      0.0654 |      0.0640 |      0.0643 |      0.0064 |      0.0545 |      0.0117 |      0.0091 |      0.0621 |      0.0618 |      0.0645 |      0.0648 |      0.0589 |      0.0596 |      0.0667 |      0.0670 |      0.0632 |      0.0634 |      0.0698 |      0.0637 |      0.0318 |      0.0689 |      0.0623 |      0.0450 |      0.0629 |      0.0626 |      0.0659 |      0.0657 |      0.0490 |      0.0695 |      0.0615 |      0.0608 |      0.0471 |      0.0510 |      0.0430 |      0.0686 |      0.0684 |      0.0341 |      0.0386 |      0.0295 |      0.0271 |      0.0198 |      0.0246 |      0.0144 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+--------+--------+--------+--------+
|                       Metric                      |   Sum  |   Min  |   Max  |   Avg  |
+---------------------------------------------------+--------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 3.2888 | 0.0011 | 0.0704 | 0.0514 |
|             Runtime unhalted [s] STAT             |      0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |      0 |      0 |      0 |
|                      CPI STAT                     |      0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |      0 |      0 |      0 |
+---------------------------------------------------+--------+--------+--------+--------+

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
 Elapsed time is : 3.4195 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.419080 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 4694423000 |
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
|              Runtime (RDTSC) [s]             |     3.4191 |
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
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 1.1556 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   1.154243 |   1.154355 |   1.154366 |   1.154368 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 4273261000 |          0 |          0 |          0 |
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
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 4273261000 |   0 | 4273261000 | 1068315250 |
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
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |     1.1542 |     1.1544 |     1.1544 |     1.1544 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+--------+--------+--------+--------+
|                       Metric                      |   Sum  |   Min  |   Max  |   Avg  |
+---------------------------------------------------+--------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 4.6174 | 1.1542 | 1.1544 | 1.1543 |
|             Runtime unhalted [s] STAT             |      0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |      0 |      0 |      0 |
|                      CPI STAT                     |      0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |      0 |      0 |      0 |
+---------------------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.2968 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.284625 |   0.284860 |   0.284800 |   0.285763 |   0.285549 |   0.284421 |   0.284953 |   0.285167 |   0.284495 |   0.284557 |    0.284732 |    0.285097 |    0.285014 |    0.284271 |    0.284346 |    0.284207 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1551975000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+------------+-----+------------+--------------+
|            Event           |  Counter |     Sum    | Min |     Max    |      Avg     |
+----------------------------+----------+------------+-----+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |          0 |   0 |          0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |          0 |   0 |          0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1551975000 |   0 | 1551975000 | 9.699844e+07 |
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

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |     0.2846 |     0.2849 |     0.2848 |     0.2858 |     0.2855 |     0.2844 |     0.2850 |     0.2852 |     0.2845 |     0.2846 |      0.2847 |      0.2851 |      0.2850 |      0.2843 |      0.2843 |      0.2842 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+--------+--------+--------+--------+
|                       Metric                      |   Sum  |   Min  |   Max  |   Avg  |
+---------------------------------------------------+--------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 4.5569 | 0.2842 | 0.2858 | 0.2848 |
|             Runtime unhalted [s] STAT             |      0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |      0 |      0 |      0 |
|                      CPI STAT                     |      0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |      0 |      0 |      0 |
+---------------------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 512
srun: Job 63424780 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63424780
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.4286 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.154109 |   0.157658 |   0.162216 |   0.161269 |   0.161820 |   0.161548 |   0.159614 |   0.158520 |   0.160145 |   0.159891 |    0.159083 |    0.158830 |    0.157948 |    0.158209 |    0.156849 |    0.156590 |    0.157383 |    0.157123 |    0.154898 |    0.153082 |    0.151753 |    0.155185 |    0.152466 |    0.149683 |    0.151170 |    0.150730 |    0.156312 |    0.156048 |    0.141731 |    0.147543 |    0.160896 |    0.143549 |    0.101038 |    0.083629 |    0.089538 |    0.086625 |    0.155507 |    0.155771 |    0.115417 |    0.118473 |    0.109594 |    0.112424 |    0.145070 |    0.146439 |    0.103795 |    0.092322 |    0.136004 |    0.138915 |    0.154588 |    0.153617 |    0.075125 |    0.078083 |    0.095252 |    0.098158 |    0.127396 |    0.130312 |    0.080890 |    0.106534 |    0.160408 |    0.148691 |    0.121522 |    0.124500 |    0.133036 |    0.159350 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 2746980000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+------------+-----+------------+--------------+
|            Event           |  Counter |     Sum    | Min |     Max    |      Avg     |
+----------------------------+----------+------------+-----+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |          0 |   0 |          0 |            0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |          0 |   0 |          0 |            0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 2746980000 |   0 | 2746980000 | 4.292156e+07 |
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

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |     0.1541 |     0.1577 |     0.1622 |     0.1613 |     0.1618 |     0.1615 |     0.1596 |     0.1585 |     0.1601 |     0.1599 |      0.1591 |      0.1588 |      0.1579 |      0.1582 |      0.1568 |      0.1566 |      0.1574 |      0.1571 |      0.1549 |      0.1531 |      0.1518 |      0.1552 |      0.1525 |      0.1497 |      0.1512 |      0.1507 |      0.1563 |      0.1560 |      0.1417 |      0.1475 |      0.1609 |      0.1435 |      0.1010 |      0.0836 |      0.0895 |      0.0866 |      0.1555 |      0.1558 |      0.1154 |      0.1185 |      0.1096 |      0.1124 |      0.1451 |      0.1464 |      0.1038 |      0.0923 |      0.1360 |      0.1389 |      0.1546 |      0.1536 |      0.0751 |      0.0781 |      0.0953 |      0.0982 |      0.1274 |      0.1303 |      0.0809 |      0.1065 |      0.1604 |      0.1487 |      0.1215 |      0.1245 |      0.1330 |      0.1594 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+--------+--------+--------+--------+
|                       Metric                      |   Sum  |   Min  |   Max  |   Avg  |
+---------------------------------------------------+--------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 8.8215 | 0.0751 | 0.1622 | 0.1378 |
|             Runtime unhalted [s] STAT             |      0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |      0 |      0 |      0 |      0 |
|                      CPI STAT                     |      0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |      0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |      0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |      0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |      0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |      0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |      0 |      0 |      0 |      0 |
+---------------------------------------------------+--------+--------+--------+--------+

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
 Elapsed time is : 220.4736 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 220.473800 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+--------------+
|         Event         |  Counter |  HWThread 0  |
+-----------------------+----------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 303419500000 |
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
|              Runtime (RDTSC) [s]             |   220.4738 |
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
srun: Job 63424780 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63424780
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 79.5604 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  79.559510 |  79.559620 |  79.559620 |  79.559610 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+--------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 |
+-----------------------+----------+--------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 432949800000 |          0 |          0 |          0 |
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
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 432949800000 |   0 | 432949800000 | 108237450000 |
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
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |    79.5595 |    79.5596 |    79.5596 |    79.5596 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |
|                      CPI                     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+----------+---------+---------+---------+
|                       Metric                      |    Sum   |   Min   |   Max   |   Avg   |
+---------------------------------------------------+----------+---------+---------+---------+
|              Runtime (RDTSC) [s] STAT             | 318.2383 | 79.5595 | 79.5596 | 79.5596 |
|             Runtime unhalted [s] STAT             |        0 |       0 |       0 |       0 |
|                  Clock [MHz] STAT                 |        0 |       0 |       0 |       0 |
|                      CPI STAT                     |        0 |   inf   |       0 |       0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |        0 |       0 |       0 |       0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |        0 |       0 |       0 |       0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |        0 |       0 |       0 |       0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |        0 |       0 |       0 |       0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |        0 |       0 |       0 |       0 |
|      MCDRAM Memory data volume [GBytes] STAT      |        0 |       0 |       0 |       0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |        0 |       0 |       0 |       0 |
|     DDR Memory read data volume [GBytes] STAT     |        0 |       0 |       0 |       0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |        0 |       0 |       0 |       0 |
|   DDR Memory writeback data volume [GBytes] STAT  |        0 |       0 |       0 |       0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |        0 |       0 |       0 |       0 |
|        DDR Memory data volume [GBytes] STAT       |        0 |       0 |       0 |       0 |
+---------------------------------------------------+----------+---------+---------+---------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 20.6399 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |  20.628480 |  20.628380 |  20.627470 |  20.627670 |  20.627540 |  20.627740 |  20.627880 |  20.627820 |  20.628200 |  20.628320 |   20.627610 |   20.628250 |   20.628140 |   20.628010 |   20.627950 |   20.628070 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 363096400000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+--------------+-----+--------------+-------------+
|            Event           |  Counter |      Sum     | Min |      Max     |     Avg     |
+----------------------------+----------+--------------+-----+--------------+-------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |            0 |   0 |            0 |           0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |            0 |   0 |            0 |           0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 363096400000 |   0 | 363096400000 | 22693525000 |
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

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |    20.6285 |    20.6284 |    20.6275 |    20.6277 |    20.6275 |    20.6277 |    20.6279 |    20.6278 |    20.6282 |    20.6283 |     20.6276 |     20.6283 |     20.6281 |     20.6280 |     20.6279 |     20.6281 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+----------+---------+---------+---------+
|                       Metric                      |    Sum   |   Min   |   Max   |   Avg   |
+---------------------------------------------------+----------+---------+---------+---------+
|              Runtime (RDTSC) [s] STAT             | 330.0475 | 20.6275 | 20.6285 | 20.6280 |
|             Runtime unhalted [s] STAT             |        0 |       0 |       0 |       0 |
|                  Clock [MHz] STAT                 |        0 |       0 |       0 |       0 |
|                      CPI STAT                     |        0 |   inf   |       0 |       0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |        0 |       0 |       0 |       0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |        0 |       0 |       0 |       0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |        0 |       0 |       0 |       0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |        0 |       0 |       0 |       0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |        0 |       0 |       0 |       0 |
|      MCDRAM Memory data volume [GBytes] STAT      |        0 |       0 |       0 |       0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |        0 |       0 |       0 |       0 |
|     DDR Memory read data volume [GBytes] STAT     |        0 |       0 |       0 |       0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |        0 |       0 |       0 |       0 |
|   DDR Memory writeback data volume [GBytes] STAT  |        0 |       0 |       0 |       0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |        0 |       0 |       0 |       0 |
|        DDR Memory data volume [GBytes] STAT       |        0 |       0 |       0 |       0 |
+---------------------------------------------------+----------+---------+---------+---------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 2048
srun: Job 63424780 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63424780
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
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 5.8365 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   5.536535 |   5.539000 |   5.580224 |   5.587487 |   5.577127 |   5.577764 |   5.584934 |   5.582323 |   5.575857 |   5.575332 |    5.582889 |    5.583445 |    5.574247 |    5.574802 |    5.576305 |    5.572943 |    5.581740 |    5.581459 |    5.578084 |    5.578824 |    5.577415 |    5.586825 |    5.587103 |    5.585633 |    5.592299 |    5.585336 |    5.582617 |    5.583159 |    5.582027 |    5.578472 |    5.586493 |    5.570369 |    5.571355 |    5.572204 |    5.567043 |    5.576753 |    5.585935 |    5.568289 |    5.579491 |    5.562632 |    5.554800 |    5.556874 |    5.545821 |    5.541359 |    5.552624 |    5.543498 |    5.560826 |    5.558881 |    5.550447 |    5.548112 |    5.565658 |    5.564287 |    5.586220 |    5.569314 |    5.584032 |    5.573560 |    5.581157 |    5.580869 |    5.587847 |    5.583730 |    5.579849 |    5.579192 |    5.584604 |    5.584323 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 159075200000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+--------------+-----+--------------+------------+
|            Event           |  Counter |      Sum     | Min |      Max     |     Avg    |
+----------------------------+----------+--------------+-----+--------------+------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |            0 |   0 |            0 |          0 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |            0 |   0 |            0 |          0 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 159075200000 |   0 | 159075200000 | 2485550000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |            0 |   0 |            0 |          0 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |            0 |   0 |            0 |          0 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            0 |   0 |            0 |          0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            0 |   0 |            0 |          0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |            0 |   0 |            0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            0 |   0 |            0 |          0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |            0 |   0 |            0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            0 |   0 |            0 |          0 |
|      MC_CAS_READS STAT     |  MBOX2C0 |            0 |   0 |            0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            0 |   0 |            0 |          0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |            0 |   0 |            0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            0 |   0 |            0 |          0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |            0 |   0 |            0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            0 |   0 |            0 |          0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |            0 |   0 |            0 |          0 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            0 |   0 |            0 |          0 |
+----------------------------+----------+--------------+-----+--------------+------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |     5.5365 |     5.5390 |     5.5802 |     5.5875 |     5.5771 |     5.5778 |     5.5849 |     5.5823 |     5.5759 |     5.5753 |      5.5829 |      5.5834 |      5.5742 |      5.5748 |      5.5763 |      5.5729 |      5.5817 |      5.5815 |      5.5781 |      5.5788 |      5.5774 |      5.5868 |      5.5871 |      5.5856 |      5.5923 |      5.5853 |      5.5826 |      5.5832 |      5.5820 |      5.5785 |      5.5865 |      5.5704 |      5.5714 |      5.5722 |      5.5670 |      5.5768 |      5.5859 |      5.5683 |      5.5795 |      5.5626 |      5.5548 |      5.5569 |      5.5458 |      5.5414 |      5.5526 |      5.5435 |      5.5608 |      5.5589 |      5.5504 |      5.5481 |      5.5657 |      5.5643 |      5.5862 |      5.5693 |      5.5840 |      5.5736 |      5.5812 |      5.5809 |      5.5878 |      5.5837 |      5.5798 |      5.5792 |      5.5846 |      5.5843 |
|             Runtime unhalted [s]             |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|                  Clock [MHz]                 |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|                      CPI                     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|    MCDRAM Memory read bandwidth [MBytes/s]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+----------+--------+--------+--------+
|                       Metric                      |    Sum   |   Min  |   Max  |   Avg  |
+---------------------------------------------------+----------+--------+--------+--------+
|              Runtime (RDTSC) [s] STAT             | 356.7003 | 5.5365 | 5.5923 | 5.5734 |
|             Runtime unhalted [s] STAT             |        0 |      0 |      0 |      0 |
|                  Clock [MHz] STAT                 |        0 |      0 |      0 |      0 |
|                      CPI STAT                     |        0 |   inf  |      0 |      0 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |        0 |      0 |      0 |      0 |
|    MCDRAM Memory read data volume [GBytes] STAT   |        0 |      0 |      0 |      0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |        0 |      0 |      0 |      0 |
| MCDRAM Memory writeback data volume [GBytes] STAT |        0 |      0 |      0 |      0 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |        0 |      0 |      0 |      0 |
|      MCDRAM Memory data volume [GBytes] STAT      |        0 |      0 |      0 |      0 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |        0 |      0 |      0 |      0 |
|     DDR Memory read data volume [GBytes] STAT     |        0 |      0 |      0 |      0 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |        0 |      0 |      0 |      0 |
|   DDR Memory writeback data volume [GBytes] STAT  |        0 |      0 |      0 |      0 |
|        DDR Memory bandwidth [MBytes/s] STAT       |        0 |      0 |      0 |      0 |
|        DDR Memory data volume [GBytes] STAT       |        0 |      0 |      0 |      0 |
+---------------------------------------------------+----------+--------+--------+--------+
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
 Elapsed time is : 0.0105 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.010103 |
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
|      Runtime (RDTSC) [s]      |     0.0101 |
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
 Elapsed time is : 0.0044 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.002737 |   0.002834 |   0.002913 |   0.002901 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+--------------------------+---------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |    3204635 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+

+-------------------------------+---------+---------+-----+---------+-------------+
|             Event             | Counter |   Sum   | Min |   Max   |     Avg     |
+-------------------------------+---------+---------+-----+---------+-------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |       0 |   0 |       0 |           0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |       0 |   0 |       0 |           0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 3204635 |   0 | 3204635 | 801158.7500 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |       0 |   0 |       0 |           0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |       0 |   0 |       0 |           0 |
+-------------------------------+---------+---------+-----+---------+-------------+

+-------------------------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     0.0027 |     0.0028 |     0.0029 |     0.0029 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |
+-------------------------------+------------+------------+------------+------------+

+------------------------------------+--------+--------+--------+--------+
|               Metric               |   Sum  |   Min  |   Max  |   Avg  |
+------------------------------------+--------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.0113 | 0.0027 | 0.0029 | 0.0028 |
|      Runtime unhalted [s] STAT     |      0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |      0 |      0 |      0 |
|              CPI STAT              |      0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
+------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 128
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
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0205 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.001164 |   0.001630 |   0.001764 |   0.001379 |   0.001836 |   0.001574 |   0.000899 |   0.000965 |   0.001031 |   0.001097 |    0.001232 |    0.001312 |    0.000831 |    0.001514 |    0.001452 |    0.001705 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|           Event          | Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |   37745890 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-------------------------------+---------+----------+-----+----------+--------------+
|             Event             | Counter |    Sum   | Min |    Max   |      Avg     |
+-------------------------------+---------+----------+-----+----------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |        0 |   0 |        0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |        0 |   0 |        0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 37745890 |   0 | 37745890 | 2.359118e+06 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |        0 |   0 |        0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |        0 |   0 |        0 |            0 |
+-------------------------------+---------+----------+-----+----------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|      Runtime (RDTSC) [s]      |     0.0012 |     0.0016 |     0.0018 |     0.0014 |     0.0018 |     0.0016 |     0.0009 |     0.0010 |     0.0010 |     0.0011 |      0.0012 |      0.0013 |      0.0008 |      0.0015 |      0.0015 |      0.0017 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+------------------------------------+--------+--------+--------+--------+
|               Metric               |   Sum  |   Min  |   Max  |   Avg  |
+------------------------------------+--------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 0.0214 | 0.0008 | 0.0018 | 0.0013 |
|      Runtime unhalted [s] STAT     |      0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |      0 |      0 |      0 |
|              CPI STAT              |      0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
+------------------------------------+--------+--------+--------+--------+

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
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.5715 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.052461 |   0.001032 |   0.031444 |   0.029397 |   0.061805 |   0.044632 |   0.068291 |   0.068550 |   0.060919 |   0.049488 |    0.035349 |    0.033387 |    0.046345 |    0.051061 |    0.047816 |    0.053868 |    0.065814 |    0.069857 |    0.037364 |    0.039296 |    0.041183 |    0.042968 |    0.063647 |    0.058366 |    0.063109 |    0.063930 |    0.064468 |    0.064205 |    0.068023 |    0.067758 |    0.066616 |    0.066928 |    0.056148 |    0.063374 |    0.069555 |    0.065281 |    0.059761 |    0.062498 |    0.064743 |    0.065006 |    0.067482 |    0.067219 |    0.066078 |    0.066336 |    0.059064 |    0.014865 |    0.062804 |    0.065543 |    0.069093 |    0.057326 |    0.062176 |    0.061405 |    0.059344 |    0.003805 |    0.060356 |    0.027199 |    0.017712 |    0.020350 |    0.022685 |    0.055077 |    0.012045 |    0.009429 |    0.006482 |    0.024977 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|           Event          | Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 2221438000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-------------------------------+---------+------------+-----+------------+--------------+
|             Event             | Counter |     Sum    | Min |     Max    |      Avg     |
+-------------------------------+---------+------------+-----+------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 2221438000 |   0 | 2221438000 | 3.470997e+07 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |            0 |
+-------------------------------+---------+------------+-----+------------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|      Runtime (RDTSC) [s]      |     0.0525 |     0.0010 |     0.0314 |     0.0294 |     0.0618 |     0.0446 |     0.0683 |     0.0686 |     0.0609 |     0.0495 |      0.0353 |      0.0334 |      0.0463 |      0.0511 |      0.0478 |      0.0539 |      0.0658 |      0.0699 |      0.0374 |      0.0393 |      0.0412 |      0.0430 |      0.0636 |      0.0584 |      0.0631 |      0.0639 |      0.0645 |      0.0642 |      0.0680 |      0.0678 |      0.0666 |      0.0669 |      0.0561 |      0.0634 |      0.0696 |      0.0653 |      0.0598 |      0.0625 |      0.0647 |      0.0650 |      0.0675 |      0.0672 |      0.0661 |      0.0663 |      0.0591 |      0.0149 |      0.0628 |      0.0655 |      0.0691 |      0.0573 |      0.0622 |      0.0614 |      0.0593 |      0.0038 |      0.0604 |      0.0272 |      0.0177 |      0.0203 |      0.0227 |      0.0551 |      0.0120 |      0.0094 |      0.0065 |      0.0250 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+------------------------------------+--------+--------+--------+--------+
|               Metric               |   Sum  |   Min  |   Max  |   Avg  |
+------------------------------------+--------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 3.2246 | 0.0010 | 0.0699 | 0.0504 |
|      Runtime unhalted [s] STAT     |      0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |      0 |      0 |      0 |
|              CPI STAT              |      0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
+------------------------------------+--------+--------+--------+--------+

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
 Elapsed time is : 3.4162 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.415732 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 4687286000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     3.4157 |
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
Hello world, I'm thread 2 out of 4 total threads. 
Hello world, I'm thread 1 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 1.1572 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   1.155348 |   1.155466 |   1.155441 |   1.155510 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+------------+------------+------------+------------+
|           Event          | Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+--------------------------+---------+------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 4076799000 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |
+--------------------------+---------+------------+------------+------------+------------+

+-------------------------------+---------+------------+-----+------------+------------+
|             Event             | Counter |     Sum    | Min |     Max    |     Avg    |
+-------------------------------+---------+------------+-----+------------+------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 4076799000 |   0 | 4076799000 | 1019199750 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |          0 |
+-------------------------------+---------+------------+-----+------------+------------+

+-------------------------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |     1.1553 |     1.1555 |     1.1554 |     1.1555 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |
+-------------------------------+------------+------------+------------+------------+

+------------------------------------+--------+--------+--------+--------+
|               Metric               |   Sum  |   Min  |   Max  |   Avg  |
+------------------------------------+--------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 4.6217 | 1.1553 | 1.1555 | 1.1554 |
|      Runtime unhalted [s] STAT     |      0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |      0 |      0 |      0 |
|              CPI STAT              |      0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
+------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.3052 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.285302 |   0.285420 |   0.285042 |   0.285613 |   0.285173 |   0.285110 |   0.284896 |   0.285238 |   0.285365 |   0.285691 |    0.285748 |    0.285489 |    0.284732 |    0.284973 |    0.285546 |    0.284824 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|           Event          | Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 1759792000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-------------------------------+---------+------------+-----+------------+-----------+
|             Event             | Counter |     Sum    | Min |     Max    |    Avg    |
+-------------------------------+---------+------------+-----+------------+-----------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |         0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |         0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 1759792000 |   0 | 1759792000 | 109987000 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |         0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |         0 |
+-------------------------------+---------+------------+-----+------------+-----------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|      Runtime (RDTSC) [s]      |     0.2853 |     0.2854 |     0.2850 |     0.2856 |     0.2852 |     0.2851 |     0.2849 |     0.2852 |     0.2854 |     0.2857 |      0.2857 |      0.2855 |      0.2847 |      0.2850 |      0.2855 |      0.2848 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+------------------------------------+--------+--------+--------+--------+
|               Metric               |   Sum  |   Min  |   Max  |   Avg  |
+------------------------------------+--------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 4.5640 | 0.2847 | 0.2857 | 0.2852 |
|      Runtime unhalted [s] STAT     |      0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |      0 |      0 |      0 |
|              CPI STAT              |      0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
+------------------------------------+--------+--------+--------+--------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.6097 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.123155 |   0.120789 |   0.119818 |   0.146732 |   0.077860 |   0.116748 |   0.127302 |   0.127764 |   0.087154 |   0.084837 |    0.123920 |    0.124649 |    0.102432 |    0.082472 |    0.126031 |    0.137290 |    0.141240 |    0.110969 |    0.144843 |    0.145552 |    0.091323 |    0.115717 |    0.095509 |    0.097346 |    0.148667 |    0.121604 |    0.122432 |    0.099155 |    0.136176 |    0.128809 |    0.105566 |    0.135686 |    0.103972 |    0.176356 |    0.182224 |    0.173059 |    0.161146 |    0.157820 |    0.168306 |    0.151759 |    0.166945 |    0.093468 |    0.080186 |    0.089198 |    0.117778 |    0.075455 |    0.109704 |    0.108358 |    0.114768 |    0.113612 |    0.118830 |    0.144022 |    0.163625 |    0.100740 |    0.131253 |    0.153544 |    0.107009 |    0.128274 |    0.112319 |    0.129717 |    0.151483 |    0.149487 |    0.147676 |    0.133293 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|           Event          | Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 3802905000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+--------------------------+---------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-------------------------------+---------+------------+-----+------------+--------------+
|             Event             | Counter |     Sum    | Min |     Max    |      Avg     |
+-------------------------------+---------+------------+-----+------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |          0 |   0 |          0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |          0 |   0 |          0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 3802905000 |   0 | 3802905000 | 5.942039e+07 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |          0 |   0 |          0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |          0 |   0 |          0 |            0 |
+-------------------------------+---------+------------+-----+------------+--------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|      Runtime (RDTSC) [s]      |     0.1232 |     0.1208 |     0.1198 |     0.1467 |     0.0779 |     0.1167 |     0.1273 |     0.1278 |     0.0872 |     0.0848 |      0.1239 |      0.1246 |      0.1024 |      0.0825 |      0.1260 |      0.1373 |      0.1412 |      0.1110 |      0.1448 |      0.1456 |      0.0913 |      0.1157 |      0.0955 |      0.0973 |      0.1487 |      0.1216 |      0.1224 |      0.0992 |      0.1362 |      0.1288 |      0.1056 |      0.1357 |      0.1040 |      0.1764 |      0.1822 |      0.1731 |      0.1611 |      0.1578 |      0.1683 |      0.1518 |      0.1669 |      0.0935 |      0.0802 |      0.0892 |      0.1178 |      0.0755 |      0.1097 |      0.1084 |      0.1148 |      0.1136 |      0.1188 |      0.1440 |      0.1636 |      0.1007 |      0.1313 |      0.1535 |      0.1070 |      0.1283 |      0.1123 |      0.1297 |      0.1515 |      0.1495 |      0.1477 |      0.1333 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+------------------------------------+--------+--------+--------+--------+
|               Metric               |   Sum  |   Min  |   Max  |   Avg  |
+------------------------------------+--------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 7.9850 | 0.0755 | 0.1822 | 0.1248 |
|      Runtime unhalted [s] STAT     |      0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |      0 |      0 |      0 |      0 |
|              CPI STAT              |      0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |      0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |      0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |      0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |      0 |      0 |      0 |      0 |
+------------------------------------+--------+--------+--------+--------+

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
 Elapsed time is : 220.6578 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 220.657600 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+--------------+
|           Event          | Counter |  HWThread 0  |
+--------------------------+---------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 303543200000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |
+--------------------------+---------+--------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |   220.6576 |
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
Hello world, I'm thread 1 out of 4 total threads. 
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 79.8084 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  79.806950 |  79.807020 |  79.807060 |  79.807040 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+--------------+------------+------------+------------+
|           Event          | Counter |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 |
+--------------------------+---------+--------------+------------+------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |          0 |          0 |          0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 433735700000 |          0 |          0 |          0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |          0 |          0 |          0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |          0 |          0 |          0 |
+--------------------------+---------+--------------+------------+------------+------------+

+-------------------------------+---------+--------------+-----+--------------+--------------+
|             Event             | Counter |      Sum     | Min |      Max     |      Avg     |
+-------------------------------+---------+--------------+-----+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |            0 |   0 |            0 |            0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |            0 |   0 |            0 |            0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 433735700000 |   0 | 433735700000 | 108433925000 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |            0 |   0 |            0 |            0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |            0 |   0 |            0 |            0 |
+-------------------------------+---------+--------------+-----+--------------+--------------+

+-------------------------------+------------+------------+------------+------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------------------+------------+------------+------------+------------+
|      Runtime (RDTSC) [s]      |    79.8070 |    79.8070 |    79.8071 |    79.8070 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |
|              CPI              |      -     |      -     |      -     |      -     |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |
+-------------------------------+------------+------------+------------+------------+

+------------------------------------+----------+---------+---------+---------+
|               Metric               |    Sum   |   Min   |   Max   |   Avg   |
+------------------------------------+----------+---------+---------+---------+
|      Runtime (RDTSC) [s] STAT      | 319.2281 | 79.8070 | 79.8071 | 79.8070 |
|      Runtime unhalted [s] STAT     |        0 |       0 |       0 |       0 |
|          Clock [MHz] STAT          |        0 |       0 |       0 |       0 |
|              CPI STAT              |        0 |   inf   |       0 |       0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |        0 |       0 |       0 |       0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |        0 |       0 |       0 |       0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |        0 |       0 |       0 |       0 |
|        Packed [MUOPS/s] STAT       |        0 |       0 |       0 |       0 |
|        Scalar [MUOPS/s] STAT       |        0 |       0 |       0 |       0 |
+------------------------------------+----------+---------+---------+---------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 20.7080 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |  20.687570 |  20.688460 |  20.688350 |  20.688270 |  20.688410 |  20.688060 |  20.687860 |  20.687930 |  20.687990 |  20.689740 |   20.688550 |   20.688200 |   20.687790 |   20.687720 |   20.687650 |   20.688130 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|           Event          | Counter |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 372571500000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-------------------------------+---------+--------------+-----+--------------+-------------+
|             Event             | Counter |      Sum     | Min |      Max     |     Avg     |
+-------------------------------+---------+--------------+-----+--------------+-------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |            0 |   0 |            0 |           0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |            0 |   0 |            0 |           0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 372571500000 |   0 | 372571500000 | 23285718750 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |            0 |   0 |            0 |           0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |            0 |   0 |            0 |           0 |
+-------------------------------+---------+--------------+-----+--------------+-------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|      Runtime (RDTSC) [s]      |    20.6876 |    20.6885 |    20.6883 |    20.6883 |    20.6884 |    20.6881 |    20.6879 |    20.6879 |    20.6880 |    20.6897 |     20.6885 |     20.6882 |     20.6878 |     20.6877 |     20.6877 |     20.6881 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+------------------------------------+----------+---------+---------+---------+
|               Metric               |    Sum   |   Min   |   Max   |   Avg   |
+------------------------------------+----------+---------+---------+---------+
|      Runtime (RDTSC) [s] STAT      | 331.0107 | 20.6876 | 20.6897 | 20.6882 |
|      Runtime unhalted [s] STAT     |        0 |       0 |       0 |       0 |
|          Clock [MHz] STAT          |        0 |       0 |       0 |       0 |
|              CPI STAT              |        0 |   inf   |       0 |       0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |        0 |       0 |       0 |       0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |        0 |       0 |       0 |       0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |        0 |       0 |       0 |       0 |
|        Packed [MUOPS/s] STAT       |        0 |       0 |       0 |       0 |
|        Scalar [MUOPS/s] STAT       |        0 |       0 |       0 |       0 |
+------------------------------------+----------+---------+---------+---------+

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
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 5.9924 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   5.584973 |   5.580126 |   5.546333 |   5.541118 |   5.583066 |   5.591662 |   5.582415 |   5.582119 |   5.584673 |   5.584377 |    5.585277 |    5.592282 |    5.590350 |    5.578947 |    5.558681 |    5.556368 |    5.585597 |    5.585873 |    5.582728 |    5.588850 |    5.589137 |    5.587348 |    5.586709 |    5.586155 |    5.581424 |    5.591315 |    5.590972 |    5.590066 |    5.578435 |    5.589419 |    5.588290 |    5.588566 |    5.553942 |    5.561052 |    5.575545 |    5.576332 |    5.548913 |    5.551471 |    5.580480 |    5.580793 |    5.574328 |    5.571395 |    5.577197 |    5.577921 |    5.581794 |    5.579428 |    5.579753 |    5.590652 |    5.589731 |    5.572837 |    5.569454 |    5.567434 |    5.563191 |    5.565297 |    5.543664 |    5.581104 |    5.584061 |    5.591972 |    5.586441 |    5.587016 |    5.583746 |    5.583453 |    5.587652 |    5.587925 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|           Event          | Counter |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 164792400000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |            0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+--------------------------+---------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-------------------------------+---------+--------------+-----+--------------+------------+
|             Event             | Counter |      Sum     | Min |      Max     |     Avg    |
+-------------------------------+---------+--------------+-----+--------------+------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |            0 |   0 |            0 |          0 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |            0 |   0 |            0 |          0 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 164792400000 |   0 | 164792400000 | 2574881250 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |            0 |   0 |            0 |          0 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |            0 |   0 |            0 |          0 |
+-------------------------------+---------+--------------+-----+--------------+------------+

+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|             Metric            | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|      Runtime (RDTSC) [s]      |     5.5850 |     5.5801 |     5.5463 |     5.5411 |     5.5831 |     5.5917 |     5.5824 |     5.5821 |     5.5847 |     5.5844 |      5.5853 |      5.5923 |      5.5903 |      5.5789 |      5.5587 |      5.5564 |      5.5856 |      5.5859 |      5.5827 |      5.5888 |      5.5891 |      5.5873 |      5.5867 |      5.5862 |      5.5814 |      5.5913 |      5.5910 |      5.5901 |      5.5784 |      5.5894 |      5.5883 |      5.5886 |      5.5539 |      5.5611 |      5.5755 |      5.5763 |      5.5489 |      5.5515 |      5.5805 |      5.5808 |      5.5743 |      5.5714 |      5.5772 |      5.5779 |      5.5818 |      5.5794 |      5.5798 |      5.5907 |      5.5897 |      5.5728 |      5.5695 |      5.5674 |      5.5632 |      5.5653 |      5.5437 |      5.5811 |      5.5841 |      5.5920 |      5.5864 |      5.5870 |      5.5837 |      5.5835 |      5.5877 |      5.5879 |
|      Runtime unhalted [s]     |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|          Clock [MHz]          |          0 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|              CPI              |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |      -      |
|   DP [MFLOP/s] (SSE assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DP [MFLOP/s] (AVX assumed)  |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| DP [MFLOP/s] (AVX512 assumed) |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Packed [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        Scalar [MUOPS/s]       |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+------------------------------------+----------+--------+--------+--------+
|               Metric               |    Sum   |   Min  |   Max  |   Avg  |
+------------------------------------+----------+--------+--------+--------+
|      Runtime (RDTSC) [s] STAT      | 357.0196 | 5.5411 | 5.5923 | 5.5784 |
|      Runtime unhalted [s] STAT     |        0 |      0 |      0 |      0 |
|          Clock [MHz] STAT          |        0 |      0 |      0 |      0 |
|              CPI STAT              |        0 |   inf  |      0 |      0 |
|   DP [MFLOP/s] (SSE assumed) STAT  |        0 |      0 |      0 |      0 |
|   DP [MFLOP/s] (AVX assumed) STAT  |        0 |      0 |      0 |      0 |
| DP [MFLOP/s] (AVX512 assumed) STAT |        0 |      0 |      0 |      0 |
|        Packed [MUOPS/s] STAT       |        0 |      0 |      0 |      0 |
|        Scalar [MUOPS/s] STAT       |        0 |      0 |      0 |      0 |
+------------------------------------+----------+--------+--------+--------+

```