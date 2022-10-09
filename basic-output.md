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
 Elapsed time is : 0.0489 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.046699 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |   28622650 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |   45081960 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |   42076400 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |      22421 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |      23553 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |      22629 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |      23666 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |      22551 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |      23611 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |      22415 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |      23316 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |       2956 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |       3300 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |       2983 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |       3257 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |       2916 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |       3327 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |       2846 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |       3262 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          1 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          1 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          2 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          2 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          2 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          1 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |       9015 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |       9019 |
|     MC_CAS_WRITES     |  MBOX1C1 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |       9014 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |       9018 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |       9014 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |       9017 |
|     MC_CAS_WRITES     |  MBOX6C1 |          0 |
+-----------------------+----------+------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |     0.0467 |
|             Runtime unhalted [s]             |     0.0322 |
|                  Clock [MHz]                 |  1499.9991 |
|                      CPI                     |     1.5750 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   252.3760 |
|    MCDRAM Memory read data volume [GBytes]   |     0.0118 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   -40.0862 |
| MCDRAM Memory writeback data volume [GBytes] |    -0.0019 |
|      MCDRAM Memory bandwidth [MBytes/s]      |   212.2898 |
|      MCDRAM Memory data volume [GBytes]      |     0.0099 |
|     DDR Memory read bandwidth [MBytes/s]     |    74.1383 |
|     DDR Memory read data volume [GBytes]     |     0.0035 |
|   DDR Memory writeback bandwidth [MBytes/s]  |          0 |
|   DDR Memory writeback data volume [GBytes]  |          0 |
|        DDR Memory bandwidth [MBytes/s]       |    74.1383 |
|        DDR Memory data volume [GBytes]       |     0.0035 |
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
 Elapsed time is : 0.0862 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.083566 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |   67067630 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |  153515000 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |  143266500 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |      41228 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |      43577 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |      41002 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |      43185 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |      40765 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |      43056 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |      40438 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |      42745 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      57035 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      37872 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      54806 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      24725 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      38615 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      55175 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      53917 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      24860 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          2 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          2 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          1 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          2 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          2 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          3 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |      16004 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          2 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |      16010 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          3 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |      16006 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          1 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |      16006 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |      16007 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          3 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |      16005 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          2 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+

+----------------------------+----------+-----------+-----+-----------+--------------+
|            Event           |  Counter |    Sum    | Min |    Max    |      Avg     |
+----------------------------+----------+-----------+-----+-----------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  67067630 |   0 |  67067630 | 1.676691e+07 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 153515000 |   0 | 153515000 |     38378750 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 143266500 |   0 | 143266500 |     35816625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |     41228 |   0 |     41228 |        10307 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |     43577 |   0 |     43577 |   10894.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |     41002 |   0 |     41002 |   10250.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |     43185 |   0 |     43185 |   10796.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |     40765 |   0 |     40765 |   10191.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |     43056 |   0 |     43056 |        10764 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |     40438 |   0 |     40438 |   10109.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |     42745 |   0 |     42745 |   10686.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |     57035 |   0 |     57035 |   14258.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |     37872 |   0 |     37872 |         9468 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |     54806 |   0 |     54806 |   13701.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |     24725 |   0 |     24725 |    6181.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |     38615 |   0 |     38615 |    9653.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |     55175 |   0 |     55175 |   13793.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |     53917 |   0 |     53917 |   13479.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |     24860 |   0 |     24860 |         6215 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |         0 |   0 |         0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |         1 |   0 |         1 |       0.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |         0 |   0 |         0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |         1 |   0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |         1 |   0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |         0 |   0 |         0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |         0 |   0 |         0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |         1 |   0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |         2 |   0 |         2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |         3 |   0 |         3 |       0.7500 |
|      MC_CAS_READS STAT     |  MBOX0C0 |     16004 |   0 |     16004 |         4001 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |         2 |   0 |         2 |       0.5000 |
|      MC_CAS_READS STAT     |  MBOX1C0 |     16010 |   0 |     16010 |    4002.5000 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |         3 |   0 |         3 |       0.7500 |
|      MC_CAS_READS STAT     |  MBOX2C0 |     16006 |   0 |     16006 |    4001.5000 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |         1 |   0 |         1 |       0.2500 |
|      MC_CAS_READS STAT     |  MBOX4C0 |     16006 |   0 |     16006 |    4001.5000 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |         0 |   0 |         0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |     16007 |   0 |     16007 |    4001.7500 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |         3 |   0 |         3 |       0.7500 |
|      MC_CAS_READS STAT     |  MBOX6C0 |     16005 |   0 |     16005 |    4001.2500 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |         2 |   0 |         2 |       0.5000 |
+----------------------------+----------+-----------+-----+-----------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+--------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       0.0836 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |       0.1097 |          0 |          0 |          0 |
|                  Clock [MHz]                 |    1500.1430 |      -     |      -     |      -     |
|                      CPI                     |       2.2890 |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |     257.3105 |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |       0.0215 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     192.2061 |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |       0.0161 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |     449.5166 |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |       0.0376 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |      73.5519 |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |       0.0061 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0084 |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  | 7.040000e-07 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |      73.5603 |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |       0.0061 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       0.0836 |         0 |       0.0836 |       0.0209 |
|             Runtime unhalted [s] STAT             |       0.1097 |         0 |       0.1097 |       0.0274 |
|                  Clock [MHz] STAT                 |    1500.1430 | 1500.1430 |    1500.1430 |     375.0358 |
|                      CPI STAT                     |       2.2890 |    2.2890 |       2.2890 |       0.5723 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |     257.3105 |  257.3105 |     257.3105 |      64.3276 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0.0215 |         0 |       0.0215 |       0.0054 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     192.2061 |  192.2061 |     192.2061 |      48.0515 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0161 |         0 |       0.0161 |       0.0040 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |     449.5166 |  449.5166 |     449.5166 |     112.3791 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0.0376 |         0 |       0.0376 |       0.0094 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      73.5519 |   73.5519 |      73.5519 |      18.3880 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0061 |         0 |       0.0061 |       0.0015 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0084 |    0.0084 |       0.0084 |       0.0021 |
|   DDR Memory writeback data volume [GBytes] STAT  | 7.040000e-07 |         0 | 7.040000e-07 | 1.760000e-07 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      73.5603 |   73.5603 |      73.5603 |      18.3901 |
|        DDR Memory data volume [GBytes] STAT       |       0.0061 |         0 |       0.0061 |       0.0015 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.2925 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.289190 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  878891800 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 1741388000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1625288000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |     122219 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |     135127 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |     121810 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |     135668 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |     121463 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |     134557 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |     121480 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |     133918 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     194033 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     107138 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     139843 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      88947 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     260661 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     100332 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     812570 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     107134 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          4 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |      54910 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |      54910 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |      54908 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |      54907 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |      54910 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |      54910 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+------------+-----+------------+--------------+
|            Event           |  Counter |     Sum    | Min |     Max    |      Avg     |
+----------------------------+----------+------------+-----+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  878891800 |   0 |  878891800 | 5.493074e+07 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 1741388000 |   0 | 1741388000 |    108836750 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1625288000 |   0 | 1625288000 |    101580500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |     122219 |   0 |     122219 |    7638.6875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |     135127 |   0 |     135127 |    8445.4375 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |     121810 |   0 |     121810 |    7613.1250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |     135668 |   0 |     135668 |    8479.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |     121463 |   0 |     121463 |    7591.4375 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |     134557 |   0 |     134557 |    8409.8125 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |     121480 |   0 |     121480 |    7592.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |     133918 |   0 |     133918 |    8369.8750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |     194033 |   0 |     194033 |   12127.0625 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |     107138 |   0 |     107138 |    6696.1250 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |     139843 |   0 |     139843 |    8740.1875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |      88947 |   0 |      88947 |    5559.1875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |     260661 |   0 |     260661 |   16291.3125 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |     100332 |   0 |     100332 |    6270.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |     812570 |   0 |     812570 |   50785.6250 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |     107134 |   0 |     107134 |    6695.8750 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          1 |   0 |          1 |       0.0625 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          3 |   0 |          3 |       0.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          2 |   0 |          2 |       0.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          4 |   0 |          4 |       0.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          3 |   0 |          3 |       0.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          3 |   0 |          3 |       0.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          2 |   0 |          2 |       0.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          3 |   0 |          3 |       0.1875 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          2 |   0 |          2 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          1 |   0 |          1 |       0.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          0 |   0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          1 |   0 |          1 |       0.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |      54910 |   0 |      54910 |    3431.8750 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |      54910 |   0 |      54910 |    3431.8750 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          2 |   0 |          2 |       0.1250 |
|      MC_CAS_READS STAT     |  MBOX2C0 |      54908 |   0 |      54908 |    3431.7500 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |      54907 |   0 |      54907 |    3431.6875 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          0 |   0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX5C0 |      54910 |   0 |      54910 |    3431.8750 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          1 |   0 |          1 |       0.0625 |
|      MC_CAS_READS STAT     |  MBOX6C0 |      54910 |   0 |      54910 |    3431.8750 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          1 |   0 |          1 |       0.0625 |
+----------------------------+----------+------------+-----+------------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       0.2892 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |       1.2439 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |    1499.9947 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |       1.9813 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |     227.1100 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |       0.0657 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     327.8020 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |       0.0948 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |     554.9120 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |       0.1605 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |      72.9110 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |       0.0211 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0009 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  | 2.560000e-07 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |      72.9119 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |       0.0211 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       0.2892 |         0 |       0.2892 |       0.0181 |
|             Runtime unhalted [s] STAT             |       1.2439 |         0 |       1.2439 |       0.0777 |
|                  Clock [MHz] STAT                 |    1499.9947 | 1499.9947 |    1499.9947 |      93.7497 |
|                      CPI STAT                     |       1.9813 |    1.9813 |       1.9813 |       0.1238 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |     227.1100 |  227.1100 |     227.1100 |      14.1944 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0.0657 |         0 |       0.0657 |       0.0041 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     327.8020 |  327.8020 |     327.8020 |      20.4876 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0948 |         0 |       0.0948 |       0.0059 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |     554.9120 |  554.9120 |     554.9120 |      34.6820 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0.1605 |         0 |       0.1605 |       0.0100 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      72.9110 |   72.9110 |      72.9110 |       4.5569 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0211 |         0 |       0.0211 |       0.0013 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0009 |    0.0009 |       0.0009 |       0.0001 |
|   DDR Memory writeback data volume [GBytes] STAT  | 2.560000e-07 |         0 | 2.560000e-07 | 1.600000e-08 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      72.9119 |   72.9119 |      72.9119 |       4.5570 |
|        DDR Memory data volume [GBytes] STAT       |       0.0211 |         0 |       0.0211 |       0.0013 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 2.4490 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   2.442734 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+-------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+-------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 28145580000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 57173400000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 53361760000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |      888759 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |      976559 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |      900091 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |      972506 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |      916364 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |      993684 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |      906662 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |      980497 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      967523 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      591229 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      995765 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      527990 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      978852 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      491337 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     5308829 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      574034 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          18 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          22 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          21 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          15 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          15 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          16 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          14 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          17 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |           9 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          11 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |           8 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |           6 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          10 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          15 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          11 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |           9 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |      462009 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          17 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |      462010 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          15 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |      462007 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          13 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |      462006 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          10 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |      461995 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |           9 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |      462002 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |           7 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+-------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+-------------+-----+-------------+--------------+
|            Event           |  Counter |     Sum     | Min |     Max     |      Avg     |
+----------------------------+----------+-------------+-----+-------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 28145580000 |   0 | 28145580000 | 4.397747e+08 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 57173400000 |   0 | 57173400000 |    893334375 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 53361760000 |   0 | 53361760000 |    833777500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |      888759 |   0 |      888759 |   13886.8594 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |      976559 |   0 |      976559 |   15258.7344 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |      900091 |   0 |      900091 |   14063.9219 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |      972506 |   0 |      972506 |   15195.4062 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |      916364 |   0 |      916364 |   14318.1875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |      993684 |   0 |      993684 |   15526.3125 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |      906662 |   0 |      906662 |   14166.5938 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |      980497 |   0 |      980497 |   15320.2656 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |      967523 |   0 |      967523 |   15117.5469 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |      591229 |   0 |      591229 |    9237.9531 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |      995765 |   0 |      995765 |   15558.8281 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |      527990 |   0 |      527990 |    8249.8438 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |      978852 |   0 |      978852 |   15294.5625 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |      491337 |   0 |      491337 |    7677.1406 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |     5308829 |   0 |     5308829 |   82950.4531 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |      574034 |   0 |      574034 |    8969.2812 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          18 |   0 |          18 |       0.2812 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          22 |   0 |          22 |       0.3438 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          21 |   0 |          21 |       0.3281 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          15 |   0 |          15 |       0.2344 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          15 |   0 |          15 |       0.2344 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          16 |   0 |          16 |       0.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          14 |   0 |          14 |       0.2188 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          17 |   0 |          17 |       0.2656 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           9 |   0 |           9 |       0.1406 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          11 |   0 |          11 |       0.1719 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           8 |   0 |           8 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           6 |   0 |           6 |       0.0938 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          10 |   0 |          10 |       0.1562 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          15 |   0 |          15 |       0.2344 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          11 |   0 |          11 |       0.1719 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           9 |   0 |           9 |       0.1406 |
|      MC_CAS_READS STAT     |  MBOX0C0 |      462009 |   0 |      462009 |    7218.8906 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          17 |   0 |          17 |       0.2656 |
|      MC_CAS_READS STAT     |  MBOX1C0 |      462010 |   0 |      462010 |    7218.9062 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          15 |   0 |          15 |       0.2344 |
|      MC_CAS_READS STAT     |  MBOX2C0 |      462007 |   0 |      462007 |    7218.8594 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          13 |   0 |          13 |       0.2031 |
|      MC_CAS_READS STAT     |  MBOX4C0 |      462006 |   0 |      462006 |    7218.8438 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          10 |   0 |          10 |       0.1562 |
|      MC_CAS_READS STAT     |  MBOX5C0 |      461995 |   0 |      461995 |    7218.6719 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           9 |   0 |           9 |       0.1406 |
|      MC_CAS_READS STAT     |  MBOX6C0 |      462002 |   0 |      462002 |    7218.7812 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           7 |   0 |           7 |       0.1094 |
+----------------------------+----------+-------------+-----+-------------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       2.4427 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |      40.8383 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |    1499.9982 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |       2.0313 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |     197.4156 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |       0.4822 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     200.7856 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |       0.4905 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |     398.2013 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |       0.9727 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |      72.6276 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |       0.1774 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0019 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  | 4.544000e-06 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |      72.6294 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |       0.1774 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       2.4427 |         0 |       2.4427 |       0.0382 |
|             Runtime unhalted [s] STAT             |      40.8383 |         0 |      40.8383 |       0.6381 |
|                  Clock [MHz] STAT                 |    1499.9982 | 1499.9982 |    1499.9982 |      23.4375 |
|                      CPI STAT                     |       2.0313 |    2.0313 |       2.0313 |       0.0317 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |     197.4156 |  197.4156 |     197.4156 |       3.0846 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0.4822 |         0 |       0.4822 |       0.0075 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     200.7856 |  200.7856 |     200.7856 |       3.1373 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.4905 |         0 |       0.4905 |       0.0077 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |     398.2013 |  398.2013 |     398.2013 |       6.2219 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0.9727 |         0 |       0.9727 |       0.0152 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      72.6276 |   72.6276 |      72.6276 |       1.1348 |
|     DDR Memory read data volume [GBytes] STAT     |       0.1774 |         0 |       0.1774 |       0.0028 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0019 |    0.0019 |       0.0019 | 2.968750e-05 |
|   DDR Memory writeback data volume [GBytes] STAT  | 4.544000e-06 |         0 | 4.544000e-06 | 7.100000e-08 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      72.6294 |   72.6294 |      72.6294 |       1.1348 |
|        DDR Memory data volume [GBytes] STAT       |       0.1774 |         0 |       0.1774 |       0.0028 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=512 
 Elapsed time is : 3.4006 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.398381 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 1162121000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 4623157000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 4314920000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   22595420 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   22873900 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   22537960 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   22906510 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   22607300 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   22907720 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   22572840 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   22926330 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     180637 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     192800 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     183502 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     180192 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     168904 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     197861 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     190047 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     188687 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          6 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |         12 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |         11 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |         10 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          5 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          9 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          8 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          8 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          1 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          2 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          1 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          3 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          3 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          2 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |     642130 |
|     MC_CAS_WRITES     |  MBOX0C1 |          3 |
|      MC_CAS_READS     |  MBOX1C0 |     642119 |
|     MC_CAS_WRITES     |  MBOX1C1 |          3 |
|      MC_CAS_READS     |  MBOX2C0 |     642127 |
|     MC_CAS_WRITES     |  MBOX2C1 |          1 |
|      MC_CAS_READS     |  MBOX4C0 |     642131 |
|     MC_CAS_WRITES     |  MBOX4C1 |          2 |
|      MC_CAS_READS     |  MBOX5C0 |     642121 |
|     MC_CAS_WRITES     |  MBOX5C1 |          2 |
|      MC_CAS_READS     |  MBOX6C0 |     642125 |
|     MC_CAS_WRITES     |  MBOX6C1 |          1 |
+-----------------------+----------+------------+

+----------------------------------------------+--------------+
|                    Metric                    |  HWThread 0  |
+----------------------------------------------+--------------+
|              Runtime (RDTSC) [s]             |       3.3984 |
|             Runtime unhalted [s]             |       3.3023 |
|                  Clock [MHz]                 |    1499.9863 |
|                      CPI                     |       3.9782 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |    3426.1566 |
|    MCDRAM Memory read data volume [GBytes]   |      11.6434 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     -44.6353 |
| MCDRAM Memory writeback data volume [GBytes] |      -0.1517 |
|      MCDRAM Memory bandwidth [MBytes/s]      |    3381.5213 |
|      MCDRAM Memory data volume [GBytes]      |      11.4917 |
|     DDR Memory read bandwidth [MBytes/s]     |      72.5570 |
|     DDR Memory read data volume [GBytes]     |       0.2466 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0002 |
|   DDR Memory writeback data volume [GBytes]  | 7.680000e-07 |
|        DDR Memory bandwidth [MBytes/s]       |      72.5572 |
|        DDR Memory data volume [GBytes]       |       0.2466 |
+----------------------------------------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 512
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
Working on problem size N=512 
 Elapsed time is : 1.6937 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   1.690821 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 1813949000 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 5469637000 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 5104526000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |    6538867 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |    7053299 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |    6512280 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |    7050874 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |    6520070 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |    7067544 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |    6518187 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |    7034077 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     965185 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |    1044217 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     526540 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     793234 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     870846 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     673337 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     653967 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     235531 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          9 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          8 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |         11 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |         16 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |         12 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |         11 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |         14 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          8 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          3 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          4 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          3 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          4 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          2 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |     319625 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          3 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |     319623 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          6 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |     319613 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          2 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |     319623 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          4 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |     319629 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          5 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |     319618 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          2 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+

+----------------------------+----------+------------+-----+------------+--------------+
|            Event           |  Counter |     Sum    | Min |     Max    |      Avg     |
+----------------------------+----------+------------+-----+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 1813949000 |   0 | 1813949000 |    453487250 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 5469637000 |   0 | 5469637000 |   1367409250 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 5104526000 |   0 | 5104526000 |   1276131500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |    6538867 |   0 |    6538867 | 1.634717e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |    7053299 |   0 |    7053299 | 1.763325e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |    6512280 |   0 |    6512280 |      1628070 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |    7050874 |   0 |    7050874 | 1.762718e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |    6520070 |   0 |    6520070 | 1.630018e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |    7067544 |   0 |    7067544 |      1766886 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |    6518187 |   0 |    6518187 | 1.629547e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |    7034077 |   0 |    7034077 | 1.758519e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |     965185 |   0 |     965185 |  241296.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |    1044217 |   0 |    1044217 |  261054.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |     526540 |   0 |     526540 |       131635 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |     793234 |   0 |     793234 |  198308.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |     870846 |   0 |     870846 |  217711.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |     673337 |   0 |     673337 |  168334.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |     653967 |   0 |     653967 |  163491.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |     235531 |   0 |     235531 |   58882.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          9 |   0 |          9 |       2.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          8 |   0 |          8 |            2 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |         11 |   0 |         11 |       2.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |         16 |   0 |         16 |            4 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |         12 |   0 |         12 |            3 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |         11 |   0 |         11 |       2.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |         14 |   0 |         14 |       3.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          8 |   0 |          8 |            2 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          2 |   0 |          2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          2 |   0 |          2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          3 |   0 |          3 |       0.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          2 |   0 |          2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          4 |   0 |          4 |            1 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          3 |   0 |          3 |       0.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          4 |   0 |          4 |            1 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          2 |   0 |          2 |       0.5000 |
|      MC_CAS_READS STAT     |  MBOX0C0 |     319625 |   0 |     319625 |   79906.2500 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          3 |   0 |          3 |       0.7500 |
|      MC_CAS_READS STAT     |  MBOX1C0 |     319623 |   0 |     319623 |   79905.7500 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          6 |   0 |          6 |       1.5000 |
|      MC_CAS_READS STAT     |  MBOX2C0 |     319613 |   0 |     319613 |   79903.2500 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          2 |   0 |          2 |       0.5000 |
|      MC_CAS_READS STAT     |  MBOX4C0 |     319623 |   0 |     319623 |   79905.7500 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          4 |   0 |          4 |            1 |
|      MC_CAS_READS STAT     |  MBOX5C0 |     319629 |   0 |     319629 |   79907.2500 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          5 |   0 |          5 |       1.2500 |
|      MC_CAS_READS STAT     |  MBOX6C0 |     319618 |   0 |     319618 |   79904.5000 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          2 |   0 |          2 |       0.5000 |
+----------------------------+----------+------------+-----+------------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+--------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       1.6908 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |       3.9069 |          0 |          0 |          0 |
|                  Clock [MHz]                 |    1500.1292 |      -     |      -     |      -     |
|                      CPI                     |       3.0153 |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |    2055.1469 |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |       3.4749 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     145.5435 |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |       0.2461 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |    2200.6905 |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |       3.7210 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |      72.5889 |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |       0.1227 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0008 |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  | 1.408000e-06 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |      72.5897 |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |       0.1227 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       1.6908 |         0 |       1.6908 |       0.4227 |
|             Runtime unhalted [s] STAT             |       3.9069 |         0 |       3.9069 |       0.9767 |
|                  Clock [MHz] STAT                 |    1500.1292 | 1500.1292 |    1500.1292 |     375.0323 |
|                      CPI STAT                     |       3.0153 |    3.0153 |       3.0153 |       0.7538 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |    2055.1469 | 2055.1469 |    2055.1469 |     513.7867 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       3.4749 |         0 |       3.4749 |       0.8687 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     145.5435 |  145.5435 |     145.5435 |      36.3859 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.2461 |         0 |       0.2461 |       0.0615 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |    2200.6905 | 2200.6905 |    2200.6905 |     550.1726 |
|      MCDRAM Memory data volume [GBytes] STAT      |       3.7210 |         0 |       3.7210 |       0.9303 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      72.5889 |   72.5889 |      72.5889 |      18.1472 |
|     DDR Memory read data volume [GBytes] STAT     |       0.1227 |         0 |       0.1227 |       0.0307 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0008 |    0.0008 |       0.0008 |       0.0002 |
|   DDR Memory writeback data volume [GBytes] STAT  | 1.408000e-06 |         0 | 1.408000e-06 | 3.520000e-07 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      72.5897 |   72.5897 |      72.5897 |      18.1474 |
|        DDR Memory data volume [GBytes] STAT       |       0.1227 |         0 |       0.1227 |       0.0307 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

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
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 4.7135 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   4.706732 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+-------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+-------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 16855680000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 57715020000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 53867190000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |     3903545 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |     4096224 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |     3897855 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |     4088253 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |     3891460 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |     4089137 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |     3891972 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |     4076022 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |    13161780 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     2107854 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     2961653 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     1668226 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     3771334 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     1899047 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     3457466 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     1971543 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          21 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          24 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          19 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          21 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          15 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          18 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          13 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          17 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |           6 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |           4 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |           5 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |           8 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |           7 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |           6 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |           5 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |           8 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |      889372 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          11 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |      889370 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |           4 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |      889379 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |           8 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |      889375 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          10 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |      889381 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |           6 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |      889375 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          10 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+-------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+-------------+-----+-------------+-------------+
|            Event           |  Counter |     Sum     | Min |     Max     |     Avg     |
+----------------------------+----------+-------------+-----+-------------+-------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 16855680000 |   0 | 16855680000 |  1053480000 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 57715020000 |   0 | 57715020000 |  3607188750 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 53867190000 |   0 | 53867190000 |  3366699375 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |     3903545 |   0 |     3903545 | 243971.5625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |     4096224 |   0 |     4096224 |      256014 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |     3897855 |   0 |     3897855 | 243615.9375 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |     4088253 |   0 |     4088253 | 255515.8125 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |     3891460 |   0 |     3891460 | 243216.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |     4089137 |   0 |     4089137 | 255571.0625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |     3891972 |   0 |     3891972 | 243248.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |     4076022 |   0 |     4076022 | 254751.3750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |    13161780 |   0 |    13161780 | 822611.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |     2107854 |   0 |     2107854 | 131740.8750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |     2961653 |   0 |     2961653 | 185103.3125 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |     1668226 |   0 |     1668226 | 104264.1250 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |     3771334 |   0 |     3771334 | 235708.3750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |     1899047 |   0 |     1899047 | 118690.4375 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |     3457466 |   0 |     3457466 | 216091.6250 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |     1971543 |   0 |     1971543 | 123221.4375 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          21 |   0 |          21 |      1.3125 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          24 |   0 |          24 |      1.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          19 |   0 |          19 |      1.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          21 |   0 |          21 |      1.3125 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          15 |   0 |          15 |      0.9375 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          18 |   0 |          18 |      1.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          13 |   0 |          13 |      0.8125 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          17 |   0 |          17 |      1.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           6 |   0 |           6 |      0.3750 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           4 |   0 |           4 |      0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           5 |   0 |           5 |      0.3125 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           8 |   0 |           8 |      0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           7 |   0 |           7 |      0.4375 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           6 |   0 |           6 |      0.3750 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           5 |   0 |           5 |      0.3125 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           8 |   0 |           8 |      0.5000 |
|      MC_CAS_READS STAT     |  MBOX0C0 |      889372 |   0 |      889372 |  55585.7500 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          11 |   0 |          11 |      0.6875 |
|      MC_CAS_READS STAT     |  MBOX1C0 |      889370 |   0 |      889370 |  55585.6250 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           4 |   0 |           4 |      0.2500 |
|      MC_CAS_READS STAT     |  MBOX2C0 |      889379 |   0 |      889379 |  55586.1875 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           8 |   0 |           8 |      0.5000 |
|      MC_CAS_READS STAT     |  MBOX4C0 |      889375 |   0 |      889375 |  55585.9375 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          10 |   0 |          10 |      0.6250 |
|      MC_CAS_READS STAT     |  MBOX5C0 |      889381 |   0 |      889381 |  55586.3125 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           6 |   0 |           6 |      0.3750 |
|      MC_CAS_READS STAT     |  MBOX6C0 |      889375 |   0 |      889375 |  55585.9375 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          10 |   0 |          10 |      0.6250 |
+----------------------------+----------+-------------+-----+-------------+-------------+

+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       4.7067 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |      41.2252 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |    1499.9970 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |       3.4241 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |     434.2277 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |       2.0438 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     348.9491 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |       1.6424 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |     783.1767 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |       3.6862 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |      72.5599 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |       0.3415 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0007 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  | 3.136000e-06 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |      72.5606 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |       0.3415 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       4.7067 |         0 |       4.7067 |       0.2942 |
|             Runtime unhalted [s] STAT             |      41.2252 |         0 |      41.2252 |       2.5766 |
|                  Clock [MHz] STAT                 |    1499.9970 | 1499.9970 |    1499.9970 |      93.7498 |
|                      CPI STAT                     |       3.4241 |    3.4241 |       3.4241 |       0.2140 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |     434.2277 |  434.2277 |     434.2277 |      27.1392 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       2.0438 |         0 |       2.0438 |       0.1277 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     348.9491 |  348.9491 |     348.9491 |      21.8093 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       1.6424 |         0 |       1.6424 |       0.1027 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |     783.1767 |  783.1767 |     783.1767 |      48.9485 |
|      MCDRAM Memory data volume [GBytes] STAT      |       3.6862 |         0 |       3.6862 |       0.2304 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      72.5599 |   72.5599 |      72.5599 |       4.5350 |
|     DDR Memory read data volume [GBytes] STAT     |       0.3415 |         0 |       0.3415 |       0.0213 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0007 |    0.0007 |       0.0007 | 4.375000e-05 |
|   DDR Memory writeback data volume [GBytes] STAT  | 3.136000e-06 |         0 | 3.136000e-06 | 1.960000e-07 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      72.5606 |   72.5606 |      72.5606 |       4.5350 |
|        DDR Memory data volume [GBytes] STAT       |       0.3415 |         0 |       0.3415 |       0.0213 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

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
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 38.4311 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  38.409990 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+---------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |   HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+---------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  518858200000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 2338718000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 2182801000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |      15751590 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |      16534660 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |      16233840 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |      16500990 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |      15921360 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |      16821470 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |      15776710 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |      16704940 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      17879290 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      10171650 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      87570110 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |       8948063 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      15951210 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |       9026640 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      16154210 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      10492350 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |           153 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |           151 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |           147 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |           152 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |           140 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |           142 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |           150 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |           166 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |           205 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |           242 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |           211 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |           218 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |           226 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |           218 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |           213 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |           229 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |       7256237 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |           290 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |       7256300 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |           295 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |       7256264 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |           306 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |       7256239 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |           296 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |       7256306 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |           278 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |       7256267 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |           300 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+---------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+---------------+-----+---------------+--------------+
|            Event           |  Counter |      Sum      | Min |      Max      |      Avg     |
+----------------------------+----------+---------------+-----+---------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  518858200000 |   0 |  518858200000 |   8107159375 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 2338718000000 |   0 | 2338718000000 |  36542468750 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 2182801000000 |   0 | 2182801000000 |  34106265625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |      15751590 |   0 |      15751590 |  246118.5938 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |      16534660 |   0 |      16534660 |  258354.0625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |      16233840 |   0 |      16233840 |  253653.7500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |      16500990 |   0 |      16500990 |  257827.9688 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |      15921360 |   0 |      15921360 |  248771.2500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |      16821470 |   0 |      16821470 |  262835.4688 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |      15776710 |   0 |      15776710 |  246511.0938 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |      16704940 |   0 |      16704940 |  261014.6875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |      17879290 |   0 |      17879290 |  279363.9062 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |      10171650 |   0 |      10171650 |  158932.0312 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |      87570110 |   0 |      87570110 | 1.368283e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       8948063 |   0 |       8948063 |  139813.4844 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |      15951210 |   0 |      15951210 |  249237.6562 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       9026640 |   0 |       9026640 |  141041.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |      16154210 |   0 |      16154210 |  252409.5312 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |      10492350 |   0 |      10492350 |  163942.9688 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |           153 |   0 |           153 |       2.3906 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |           151 |   0 |           151 |       2.3594 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |           147 |   0 |           147 |       2.2969 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |           152 |   0 |           152 |       2.3750 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |           140 |   0 |           140 |       2.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |           142 |   0 |           142 |       2.2188 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |           150 |   0 |           150 |       2.3438 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |           166 |   0 |           166 |       2.5938 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           205 |   0 |           205 |       3.2031 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           242 |   0 |           242 |       3.7812 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           211 |   0 |           211 |       3.2969 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           218 |   0 |           218 |       3.4062 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           226 |   0 |           226 |       3.5312 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           218 |   0 |           218 |       3.4062 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           213 |   0 |           213 |       3.3281 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           229 |   0 |           229 |       3.5781 |
|      MC_CAS_READS STAT     |  MBOX0C0 |       7256237 |   0 |       7256237 |  113378.7031 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |           290 |   0 |           290 |       4.5312 |
|      MC_CAS_READS STAT     |  MBOX1C0 |       7256300 |   0 |       7256300 |  113379.6875 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           295 |   0 |           295 |       4.6094 |
|      MC_CAS_READS STAT     |  MBOX2C0 |       7256264 |   0 |       7256264 |  113379.1250 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           306 |   0 |           306 |       4.7812 |
|      MC_CAS_READS STAT     |  MBOX4C0 |       7256239 |   0 |       7256239 |  113378.7344 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           296 |   0 |           296 |       4.6250 |
|      MC_CAS_READS STAT     |  MBOX5C0 |       7256306 |   0 |       7256306 |  113379.7812 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           278 |   0 |           278 |       4.3438 |
|      MC_CAS_READS STAT     |  MBOX6C0 |       7256267 |   0 |       7256267 |  113379.1719 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           300 |   0 |           300 |       4.6875 |
+----------------------------+----------+---------------+-----+---------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |    38.4100 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |  1670.5373 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |  1499.9797 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |     4.5074 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   217.0145 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |     8.3355 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   221.0357 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |     8.4900 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |   438.0502 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |    16.8255 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5438 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |     2.7864 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0029 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |     0.0001 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5468 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |     2.7865 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+-----------+-----------+-----------+--------------+
|                       Metric                      |    Sum    |    Min    |    Max    |      Avg     |
+---------------------------------------------------+-----------+-----------+-----------+--------------+
|              Runtime (RDTSC) [s] STAT             |   38.4100 |         0 |   38.4100 |       0.6002 |
|             Runtime unhalted [s] STAT             | 1670.5373 |         0 | 1670.5373 |      26.1021 |
|                  Clock [MHz] STAT                 | 1499.9797 | 1499.9797 | 1499.9797 |      23.4372 |
|                      CPI STAT                     |    4.5074 |    4.5074 |    4.5074 |       0.0704 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |  217.0145 |  217.0145 |  217.0145 |       3.3909 |
|    MCDRAM Memory read data volume [GBytes] STAT   |    8.3355 |         0 |    8.3355 |       0.1302 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |  221.0357 |  221.0357 |  221.0357 |       3.4537 |
| MCDRAM Memory writeback data volume [GBytes] STAT |    8.4900 |         0 |    8.4900 |       0.1327 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |  438.0502 |  438.0502 |  438.0502 |       6.8445 |
|      MCDRAM Memory data volume [GBytes] STAT      |   16.8255 |         0 |   16.8255 |       0.2629 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |   72.5438 |   72.5438 |   72.5438 |       1.1335 |
|     DDR Memory read data volume [GBytes] STAT     |    2.7864 |         0 |    2.7864 |       0.0435 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |    0.0029 |    0.0029 |    0.0029 | 4.531250e-05 |
|   DDR Memory writeback data volume [GBytes] STAT  |    0.0001 |         0 |    0.0001 | 1.562500e-06 |
|        DDR Memory bandwidth [MBytes/s] STAT       |   72.5468 |   72.5468 |   72.5468 |       1.1335 |
|        DDR Memory data volume [GBytes] STAT       |    2.7865 |         0 |    2.7865 |       0.0435 |
+---------------------------------------------------+-----------+-----------+-----------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=2048 
 Elapsed time is : 187.0607 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 187.059000 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+--------------+
|         Event         |  Counter |  HWThread 0  |
+-----------------------+----------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  63690600000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 271093000000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 253020100000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   1479990000 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   1486680000 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   1480419000 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   1486509000 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   1480583000 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   1487127000 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   1480090000 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   1486203000 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      8000373 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      8342195 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      8163623 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      8333543 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      7905640 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      8464170 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      7973246 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      8436720 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          220 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          246 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          228 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          247 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          233 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          252 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          235 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          264 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          169 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          159 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          181 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          173 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          174 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          181 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          183 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          181 |
|      MC_CAS_READS     |  MBOX0C0 |     35334030 |
|     MC_CAS_WRITES     |  MBOX0C1 |          237 |
|      MC_CAS_READS     |  MBOX1C0 |     35333970 |
|     MC_CAS_WRITES     |  MBOX1C1 |          225 |
|      MC_CAS_READS     |  MBOX2C0 |     35334020 |
|     MC_CAS_WRITES     |  MBOX2C1 |          221 |
|      MC_CAS_READS     |  MBOX4C0 |     35334040 |
|     MC_CAS_WRITES     |  MBOX4C1 |          252 |
|      MC_CAS_READS     |  MBOX5C0 |     35334020 |
|     MC_CAS_WRITES     |  MBOX5C1 |          243 |
|      MC_CAS_READS     |  MBOX6C0 |     35334010 |
|     MC_CAS_WRITES     |  MBOX6C1 |          223 |
+-----------------------+----------+--------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |   187.0590 |
|             Runtime unhalted [s]             |   193.6399 |
|                  Clock [MHz]                 |  1499.9842 |
|                      CPI                     |     4.2564 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |  4060.3566 |
|    MCDRAM Memory read data volume [GBytes]   |   759.5263 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   -50.0837 |
| MCDRAM Memory writeback data volume [GBytes] |    -9.3686 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  4010.2729 |
|      MCDRAM Memory data volume [GBytes]      |   750.1576 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5347 |
|     DDR Memory read data volume [GBytes]     |    13.5683 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0005 |
|   DDR Memory writeback data volume [GBytes]  |     0.0001 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5351 |
|        DDR Memory data volume [GBytes]       |    13.5684 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 2048
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
Working on problem size N=2048 
 Elapsed time is : 69.8340 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  69.831350 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+--------------+------------+------------+------------+
|         Event         |  Counter |  HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+--------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  82983940000 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 387099100000 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 361285400000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   1424434000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   1427574000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   1424575000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   1427375000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   1424508000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   1427543000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   1424261000 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   1427466000 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     16228420 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     13686630 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     17651780 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     13010820 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     18903980 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     10403710 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     12074730 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      9727170 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          112 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |           96 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          119 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |           94 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          121 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |           85 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          111 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |           96 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          105 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          113 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |           92 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          117 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |           95 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |           87 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |           91 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |           95 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |     13190810 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          127 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |     13190840 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          139 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |     13190810 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          134 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |     13190820 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          123 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |     13190830 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          133 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |     13190820 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          139 |          0 |          0 |          0 |
+-----------------------+----------+--------------+------------+------------+------------+

+----------------------------+----------+--------------+-----+--------------+--------------+
|            Event           |  Counter |      Sum     | Min |      Max     |      Avg     |
+----------------------------+----------+--------------+-----+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  82983940000 |   0 |  82983940000 |  20745985000 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 387099100000 |   0 | 387099100000 |  96774775000 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 361285400000 |   0 | 361285400000 |  90321350000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |   1424434000 |   0 |   1424434000 |    356108500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |   1427574000 |   0 |   1427574000 |    356893500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |   1424575000 |   0 |   1424575000 |    356143750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |   1427375000 |   0 |   1427375000 |    356843750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |   1424508000 |   0 |   1424508000 |    356127000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |   1427543000 |   0 |   1427543000 |    356885750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |   1424261000 |   0 |   1424261000 |    356065250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |   1427466000 |   0 |   1427466000 |    356866500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |     16228420 |   0 |     16228420 |      4057105 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |     13686630 |   0 |     13686630 | 3.421658e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |     17651780 |   0 |     17651780 |      4412945 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |     13010820 |   0 |     13010820 |      3252705 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |     18903980 |   0 |     18903980 |      4725995 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |     10403710 |   0 |     10403710 | 2.600928e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |     12074730 |   0 |     12074730 | 3.018682e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |      9727170 |   0 |      9727170 | 2.431792e+06 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          112 |   0 |          112 |           28 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |           96 |   0 |           96 |           24 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          119 |   0 |          119 |      29.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |           94 |   0 |           94 |      23.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          121 |   0 |          121 |      30.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |           85 |   0 |           85 |      21.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          111 |   0 |          111 |      27.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |           96 |   0 |           96 |           24 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          105 |   0 |          105 |      26.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          113 |   0 |          113 |      28.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           92 |   0 |           92 |           23 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          117 |   0 |          117 |      29.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           95 |   0 |           95 |      23.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           87 |   0 |           87 |      21.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           91 |   0 |           91 |      22.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           95 |   0 |           95 |      23.7500 |
|      MC_CAS_READS STAT     |  MBOX0C0 |     13190810 |   0 |     13190810 | 3.297702e+06 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          127 |   0 |          127 |      31.7500 |
|      MC_CAS_READS STAT     |  MBOX1C0 |     13190840 |   0 |     13190840 |      3297710 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          139 |   0 |          139 |      34.7500 |
|      MC_CAS_READS STAT     |  MBOX2C0 |     13190810 |   0 |     13190810 | 3.297702e+06 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          134 |   0 |          134 |      33.5000 |
|      MC_CAS_READS STAT     |  MBOX4C0 |     13190820 |   0 |     13190820 |      3297705 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          123 |   0 |          123 |      30.7500 |
|      MC_CAS_READS STAT     |  MBOX5C0 |     13190830 |   0 |     13190830 | 3.297708e+06 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          133 |   0 |          133 |      33.2500 |
|      MC_CAS_READS STAT     |  MBOX6C0 |     13190820 |   0 |     13190820 |      3297705 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          139 |   0 |          139 |      34.7500 |
+----------------------------+----------+--------------+-----+--------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |    69.8314 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |   276.5589 |          0 |          0 |          0 |
|                  Clock [MHz]                 |  1499.7063 |      -     |      -     |      -     |
|                      CPI                     |     4.6647 |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   | 10455.1179 |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |   730.0950 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |    29.8248 |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |     2.0827 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      | 10484.9428 |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |   732.1777 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5358 |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |     5.0653 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0007 |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |     0.0001 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5366 |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |     5.0653 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+------------+------------+------------+--------------+
|                       Metric                      |     Sum    |     Min    |     Max    |      Avg     |
+---------------------------------------------------+------------+------------+------------+--------------+
|              Runtime (RDTSC) [s] STAT             |    69.8314 |          0 |    69.8314 |      17.4579 |
|             Runtime unhalted [s] STAT             |   276.5589 |          0 |   276.5589 |      69.1397 |
|                  Clock [MHz] STAT                 |  1499.7063 |  1499.7063 |  1499.7063 |     374.9266 |
|                      CPI STAT                     |     4.6647 |     4.6647 |     4.6647 |       1.1662 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   | 10455.1179 | 10455.1179 | 10455.1179 |    2613.7795 |
|    MCDRAM Memory read data volume [GBytes] STAT   |   730.0950 |          0 |   730.0950 |     182.5238 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |    29.8248 |    29.8248 |    29.8248 |       7.4562 |
| MCDRAM Memory writeback data volume [GBytes] STAT |     2.0827 |          0 |     2.0827 |       0.5207 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      | 10484.9428 | 10484.9428 | 10484.9428 |    2621.2357 |
|      MCDRAM Memory data volume [GBytes] STAT      |   732.1777 |          0 |   732.1777 |     183.0444 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |    72.5358 |    72.5358 |    72.5358 |      18.1339 |
|     DDR Memory read data volume [GBytes] STAT     |     5.0653 |          0 |     5.0653 |       1.2663 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |     0.0007 |     0.0007 |     0.0007 |       0.0002 |
|   DDR Memory writeback data volume [GBytes] STAT  |     0.0001 |          0 |     0.0001 | 2.500000e-05 |
|        DDR Memory bandwidth [MBytes/s] STAT       |    72.5366 |    72.5366 |    72.5366 |      18.1342 |
|        DDR Memory data volume [GBytes] STAT       |     5.0653 |          0 |     5.0653 |       1.2663 |
+---------------------------------------------------+------------+------------+------------+--------------+

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
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 102.0028 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] | 101.996400 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+---------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |   HWThread 0  | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+---------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  370353800000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 2213221000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 2065665000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |    1462181000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |    1467209000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |    1462000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |    1467358000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |    1461998000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |    1467554000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |    1462228000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |    1467150000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     201882000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      30489120 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      44774170 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      22687500 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      49255920 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      24491860 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      47051010 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      26228810 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |           250 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |           234 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |           264 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |           219 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |           263 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |           216 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |           249 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |           226 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |           297 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |           294 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |           293 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |           357 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |           292 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |           301 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |           272 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |           315 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |      19266920 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |           384 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |      19266970 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |           395 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |      19266940 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |           409 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |      19266950 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |           397 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |      19266990 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |           425 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |      19266940 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |           424 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+---------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+---------------+-----+---------------+--------------+
|            Event           |  Counter |      Sum      | Min |      Max      |      Avg     |
+----------------------------+----------+---------------+-----+---------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  370353800000 |   0 |  370353800000 |  23147112500 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 2213221000000 |   0 | 2213221000000 | 138326312500 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 2065665000000 |   0 | 2065665000000 | 129104062500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |    1462181000 |   0 |    1462181000 | 9.138631e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |    1467209000 |   0 |    1467209000 | 9.170056e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |    1462000000 |   0 |    1462000000 |     91375000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |    1467358000 |   0 |    1467358000 |     91709875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |    1461998000 |   0 |    1461998000 |     91374875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |    1467554000 |   0 |    1467554000 |     91722125 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |    1462228000 |   0 |    1462228000 |     91389250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |    1467150000 |   0 |    1467150000 |     91696875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |     201882000 |   0 |     201882000 |     12617625 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |      30489120 |   0 |      30489120 |      1905570 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |      44774170 |   0 |      44774170 | 2.798386e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |      22687500 |   0 |      22687500 | 1.417969e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |      49255920 |   0 |      49255920 |      3078495 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |      24491860 |   0 |      24491860 | 1.530741e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |      47051010 |   0 |      47051010 | 2.940688e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |      26228810 |   0 |      26228810 | 1.639301e+06 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |           250 |   0 |           250 |      15.6250 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |           234 |   0 |           234 |      14.6250 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |           264 |   0 |           264 |      16.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |           219 |   0 |           219 |      13.6875 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |           263 |   0 |           263 |      16.4375 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |           216 |   0 |           216 |      13.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |           249 |   0 |           249 |      15.5625 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |           226 |   0 |           226 |      14.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           297 |   0 |           297 |      18.5625 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           294 |   0 |           294 |      18.3750 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           293 |   0 |           293 |      18.3125 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           357 |   0 |           357 |      22.3125 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           292 |   0 |           292 |      18.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           301 |   0 |           301 |      18.8125 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           272 |   0 |           272 |           17 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           315 |   0 |           315 |      19.6875 |
|      MC_CAS_READS STAT     |  MBOX0C0 |      19266920 |   0 |      19266920 | 1.204182e+06 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |           384 |   0 |           384 |           24 |
|      MC_CAS_READS STAT     |  MBOX1C0 |      19266970 |   0 |      19266970 | 1.204186e+06 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           395 |   0 |           395 |      24.6875 |
|      MC_CAS_READS STAT     |  MBOX2C0 |      19266940 |   0 |      19266940 | 1.204184e+06 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           409 |   0 |           409 |      25.5625 |
|      MC_CAS_READS STAT     |  MBOX4C0 |      19266950 |   0 |      19266950 | 1.204184e+06 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           397 |   0 |           397 |      24.8125 |
|      MC_CAS_READS STAT     |  MBOX5C0 |      19266990 |   0 |      19266990 | 1.204187e+06 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           425 |   0 |           425 |      26.5625 |
|      MC_CAS_READS STAT     |  MBOX6C0 |      19266940 |   0 |      19266940 | 1.204184e+06 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           424 |   0 |           424 |      26.5000 |
+----------------------------+----------+---------------+-----+---------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |   101.9964 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             |  1580.8941 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |  1499.9849 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |     5.9760 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |  7352.5253 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |   749.9311 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   207.8559 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |    21.2006 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  7560.3812 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |   771.1317 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5370 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |     7.3985 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0015 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |     0.0002 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5385 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |     7.3987 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+-----------+-----------+-----------+--------------+
|                       Metric                      |    Sum    |    Min    |    Max    |      Avg     |
+---------------------------------------------------+-----------+-----------+-----------+--------------+
|              Runtime (RDTSC) [s] STAT             |  101.9964 |         0 |  101.9964 |       6.3748 |
|             Runtime unhalted [s] STAT             | 1580.8941 |         0 | 1580.8941 |      98.8059 |
|                  Clock [MHz] STAT                 | 1499.9849 | 1499.9849 | 1499.9849 |      93.7491 |
|                      CPI STAT                     |    5.9760 |    5.9760 |    5.9760 |       0.3735 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   | 7352.5253 | 7352.5253 | 7352.5253 |     459.5328 |
|    MCDRAM Memory read data volume [GBytes] STAT   |  749.9311 |         0 |  749.9311 |      46.8707 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |  207.8559 |  207.8559 |  207.8559 |      12.9910 |
| MCDRAM Memory writeback data volume [GBytes] STAT |   21.2006 |         0 |   21.2006 |       1.3250 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      | 7560.3812 | 7560.3812 | 7560.3812 |     472.5238 |
|      MCDRAM Memory data volume [GBytes] STAT      |  771.1317 |         0 |  771.1317 |      48.1957 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |   72.5370 |   72.5370 |   72.5370 |       4.5336 |
|     DDR Memory read data volume [GBytes] STAT     |    7.3985 |         0 |    7.3985 |       0.4624 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |    0.0015 |    0.0015 |    0.0015 |       0.0001 |
|   DDR Memory writeback data volume [GBytes] STAT  |    0.0002 |         0 |    0.0002 | 1.250000e-05 |
|        DDR Memory bandwidth [MBytes/s] STAT       |   72.5385 |   72.5385 |   72.5385 |       4.5337 |
|        DDR Memory data volume [GBytes] STAT       |    7.3987 |         0 |    7.3987 |       0.4624 |
+---------------------------------------------------+-----------+-----------+-----------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 631.2044 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
| RDTSC Runtime [s] | 631.187100 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |   0.000000 |
|     call count    |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+-----------------------+----------+----------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|         Event         |  Counter |   HWThread 0   | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+-----------------------+----------+----------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  9260614000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 57676900000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 53831710000000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |      648062100 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |      679593100 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |      650925400 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |      677303600 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |      693833700 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |      721770200 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |      687134300 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |      718909400 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      269354300 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      180640200 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     1363506000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      157131500 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      267076000 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      152453400 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      272296800 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      175100800 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |            762 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |            799 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |            771 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |            834 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |            740 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |            805 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |            758 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |            814 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |           2436 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |           2784 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |           2454 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |           2815 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |           2388 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |           2799 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |           2448 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |           2866 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |      116432500 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |           3390 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |      116432600 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |           3478 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |      116432400 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |           3540 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |      116432500 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |           3492 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |      116432800 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |           3522 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |      116432600 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |           3569 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+-----------------------+----------+----------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+----------------------------+----------+----------------+-----+----------------+--------------+
|            Event           |  Counter |       Sum      | Min |       Max      |      Avg     |
+----------------------------+----------+----------------+-----+----------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  9260614000000 |   0 |  9260614000000 | 144697093750 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 57676900000000 |   0 | 57676900000000 | 901201562500 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 53831710000000 |   0 | 53831710000000 | 841120468750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |      648062100 |   0 |      648062100 | 1.012597e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |      679593100 |   0 |      679593100 | 1.061864e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |      650925400 |   0 |      650925400 | 1.017071e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |      677303600 |   0 |      677303600 | 1.058287e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |      693833700 |   0 |      693833700 | 1.084115e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |      721770200 |   0 |      721770200 | 1.127766e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |      687134300 |   0 |      687134300 | 1.073647e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |      718909400 |   0 |      718909400 | 1.123296e+07 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |      269354300 |   0 |      269354300 | 4.208661e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |      180640200 |   0 |      180640200 | 2.822503e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |     1363506000 |   0 |     1363506000 | 2.130478e+07 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |      157131500 |   0 |      157131500 | 2.455180e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |      267076000 |   0 |      267076000 | 4.173062e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |      152453400 |   0 |      152453400 | 2.382084e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |      272296800 |   0 |      272296800 | 4.254638e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |      175100800 |   0 |      175100800 |      2735950 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            762 |   0 |            762 |      11.9062 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            799 |   0 |            799 |      12.4844 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            771 |   0 |            771 |      12.0469 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            834 |   0 |            834 |      13.0312 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            740 |   0 |            740 |      11.5625 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            805 |   0 |            805 |      12.5781 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            758 |   0 |            758 |      11.8438 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            814 |   0 |            814 |      12.7188 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           2436 |   0 |           2436 |      38.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           2784 |   0 |           2784 |      43.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           2454 |   0 |           2454 |      38.3438 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           2815 |   0 |           2815 |      43.9844 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           2388 |   0 |           2388 |      37.3125 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           2799 |   0 |           2799 |      43.7344 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           2448 |   0 |           2448 |      38.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           2866 |   0 |           2866 |      44.7812 |
|      MC_CAS_READS STAT     |  MBOX0C0 |      116432500 |   0 |      116432500 | 1.819258e+06 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |           3390 |   0 |           3390 |      52.9688 |
|      MC_CAS_READS STAT     |  MBOX1C0 |      116432600 |   0 |      116432600 | 1.819259e+06 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           3478 |   0 |           3478 |      54.3438 |
|      MC_CAS_READS STAT     |  MBOX2C0 |      116432400 |   0 |      116432400 | 1.819256e+06 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           3540 |   0 |           3540 |      55.3125 |
|      MC_CAS_READS STAT     |  MBOX4C0 |      116432500 |   0 |      116432500 | 1.819258e+06 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           3492 |   0 |           3492 |      54.5625 |
|      MC_CAS_READS STAT     |  MBOX5C0 |      116432800 |   0 |      116432800 | 1.819262e+06 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           3522 |   0 |           3522 |      55.0312 |
|      MC_CAS_READS STAT     |  MBOX6C0 |      116432600 |   0 |      116432600 | 1.819259e+06 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           3569 |   0 |           3569 |      55.7656 |
+----------------------------+----------+----------------+-----+----------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 | HWThread 0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |   631.1871 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|             Runtime unhalted [s]             | 41207.1556 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|                  Clock [MHz]                 |  1499.6607 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|                      CPI                     |     6.2282 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   555.3984 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|    MCDRAM Memory read data volume [GBytes]   |   350.5603 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   216.8829 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
| MCDRAM Memory writeback data volume [GBytes] |   136.8937 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |   772.2812 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|      MCDRAM Memory data volume [GBytes]      |   487.4540 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |    70.8349 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|     DDR Memory read data volume [GBytes]     |    44.7101 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0021 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|   DDR Memory writeback data volume [GBytes]  |     0.0013 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |    70.8371 |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |      -     |
|        DDR Memory data volume [GBytes]       |    44.7114 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+

+---------------------------------------------------+------------+-----------+------------+--------------+
|                       Metric                      |     Sum    |    Min    |     Max    |      Avg     |
+---------------------------------------------------+------------+-----------+------------+--------------+
|              Runtime (RDTSC) [s] STAT             |   631.1871 |         0 |   631.1871 |       9.8623 |
|             Runtime unhalted [s] STAT             | 41207.1556 |         0 | 41207.1556 |     643.8618 |
|                  Clock [MHz] STAT                 |  1499.6607 | 1499.6607 |  1499.6607 |      23.4322 |
|                      CPI STAT                     |     6.2282 |    6.2282 |     6.2282 |       0.0973 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |   555.3984 |  555.3984 |   555.3984 |       8.6781 |
|    MCDRAM Memory read data volume [GBytes] STAT   |   350.5603 |         0 |   350.5603 |       5.4775 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |   216.8829 |  216.8829 |   216.8829 |       3.3888 |
| MCDRAM Memory writeback data volume [GBytes] STAT |   136.8937 |         0 |   136.8937 |       2.1390 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |   772.2812 |  772.2812 |   772.2812 |      12.0669 |
|      MCDRAM Memory data volume [GBytes] STAT      |   487.4540 |         0 |   487.4540 |       7.6165 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |    70.8349 |   70.8349 |    70.8349 |       1.1068 |
|     DDR Memory read data volume [GBytes] STAT     |    44.7101 |         0 |    44.7101 |       0.6986 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |     0.0021 |    0.0021 |     0.0021 | 3.281250e-05 |
|   DDR Memory writeback data volume [GBytes] STAT  |     0.0013 |         0 |     0.0013 | 2.031250e-05 |
|        DDR Memory bandwidth [MBytes/s] STAT       |    70.8371 |   70.8371 |    70.8371 |       1.1068 |
|        DDR Memory data volume [GBytes] STAT       |    44.7114 |         0 |    44.7114 |       0.6986 |
+---------------------------------------------------+------------+-----------+------------+--------------+
```


# Results - FLOPS_DP Flag