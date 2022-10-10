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
 Elapsed time is : 0.0113 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.009194 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |   15021760 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |   13903980 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |   12977240 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |       5370 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |       5491 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |       5367 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |       5468 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |       5375 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |       5445 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |       5320 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |       5388 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |        957 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |       1048 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |        996 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |       1023 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |        953 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |        993 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |        944 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |       1036 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          4 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          3 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          4 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          2 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          5 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          2 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          5 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          4 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          8 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          6 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          4 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          4 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          5 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          2 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          1 |
|      MC_CAS_READS     |  MBOX0C0 |       1941 |
|     MC_CAS_WRITES     |  MBOX0C1 |          4 |
|      MC_CAS_READS     |  MBOX1C0 |       1940 |
|     MC_CAS_WRITES     |  MBOX1C1 |          5 |
|      MC_CAS_READS     |  MBOX2C0 |       1932 |
|     MC_CAS_WRITES     |  MBOX2C1 |          3 |
|      MC_CAS_READS     |  MBOX4C0 |       1942 |
|     MC_CAS_WRITES     |  MBOX4C1 |          3 |
|      MC_CAS_READS     |  MBOX5C0 |       1933 |
|     MC_CAS_WRITES     |  MBOX5C1 |          2 |
|      MC_CAS_READS     |  MBOX6C0 |       1931 |
|     MC_CAS_WRITES     |  MBOX6C1 |          1 |
+-----------------------+----------+------------+

+----------------------------------------------+--------------+
|                    Metric                    |  HWThread 0  |
+----------------------------------------------+--------------+
|              Runtime (RDTSC) [s]             |       0.0092 |
|             Runtime unhalted [s]             |       0.0099 |
|                  Clock [MHz]                 |    1499.9592 |
|                      CPI                     |       0.9256 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |     300.4756 |
|    MCDRAM Memory read data volume [GBytes]   |       0.0028 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     -25.5403 |
| MCDRAM Memory writeback data volume [GBytes] |      -0.0002 |
|      MCDRAM Memory bandwidth [MBytes/s]      |     274.9353 |
|      MCDRAM Memory data volume [GBytes]      |       0.0025 |
|     DDR Memory read bandwidth [MBytes/s]     |      80.8809 |
|     DDR Memory read data volume [GBytes]     |       0.0007 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.1253 |
|   DDR Memory writeback data volume [GBytes]  | 1.152000e-06 |
|        DDR Memory bandwidth [MBytes/s]       |      81.0062 |
|        DDR Memory data volume [GBytes]       |       0.0007 |
+----------------------------------------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 128
srun: Job 63427339 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63427339
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
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0055 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.002372 |   0.003323 |   0.003373 |   0.003421 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |    5840656 |  306717000 |  315779700 |  575075100 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |    6657686 |   52042260 |    2050180 |  129892700 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |    6212361 |   57112870 |   13960710 |  155099900 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |       4412 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |       4520 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |       4187 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |       4274 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |       3982 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |       4198 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |       3880 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |       4080 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |        799 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |        769 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |        838 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |        790 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |        644 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |        705 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |        656 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |        714 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          3 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          1 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          2 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          2 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          0 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          3 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          3 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          1 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          2 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |        711 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          1 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |        707 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          1 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |        713 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          3 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |        708 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          1 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |        711 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          3 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |        708 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          2 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+

+----------------------------+----------+------------+---------+-----------+--------------+
|            Event           |  Counter |     Sum    |   Min   |    Max    |      Avg     |
+----------------------------+----------+------------+---------+-----------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 1203412456 | 5840656 | 575075100 |    300853114 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  |  190642826 | 2050180 | 129892700 | 4.766071e+07 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  |  232385841 | 6212361 | 155099900 | 5.809646e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |       4412 |       0 |      4412 |         1103 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |       4520 |       0 |      4520 |         1130 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |       4187 |       0 |      4187 |    1046.7500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |       4274 |       0 |      4274 |    1068.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |       3982 |       0 |      3982 |     995.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |       4198 |       0 |      4198 |    1049.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |       3880 |       0 |      3880 |          970 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |       4080 |       0 |      4080 |         1020 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |        799 |       0 |       799 |     199.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |        769 |       0 |       769 |     192.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |        838 |       0 |       838 |     209.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |        790 |       0 |       790 |     197.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |        644 |       0 |       644 |          161 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |        705 |       0 |       705 |     176.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |        656 |       0 |       656 |          164 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |        714 |       0 |       714 |     178.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |          3 |       0 |         3 |       0.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |          1 |       0 |         1 |       0.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |          2 |       0 |         2 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |          0 |       0 |         0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |          2 |       0 |         2 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |          0 |       0 |         0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |          3 |       0 |         3 |       0.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |          1 |       0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |          2 |       0 |         2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |          1 |       0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |          2 |       0 |         2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |          2 |       0 |         2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |          1 |       0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |          3 |       0 |         3 |       0.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |          1 |       0 |         1 |       0.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |          2 |       0 |         2 |       0.5000 |
|      MC_CAS_READS STAT     |  MBOX0C0 |        711 |       0 |       711 |     177.7500 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |          1 |       0 |         1 |       0.2500 |
|      MC_CAS_READS STAT     |  MBOX1C0 |        707 |       0 |       707 |     176.7500 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |          1 |       0 |         1 |       0.2500 |
|      MC_CAS_READS STAT     |  MBOX2C0 |        713 |       0 |       713 |     178.2500 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |          3 |       0 |         3 |       0.7500 |
|      MC_CAS_READS STAT     |  MBOX4C0 |        708 |       0 |       708 |          177 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |          1 |       0 |         1 |       0.2500 |
|      MC_CAS_READS STAT     |  MBOX5C0 |        711 |       0 |       711 |     177.7500 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |          3 |       0 |         3 |       0.7500 |
|      MC_CAS_READS STAT     |  MBOX6C0 |        708 |       0 |       708 |          177 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |          2 |       0 |         2 |       0.5000 |
+----------------------------+----------+------------+---------+-----------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 |
+----------------------------------------------+--------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       0.0024 |     0.0033 |     0.0034 |     0.0034 |
|             Runtime unhalted [s]             |       0.0048 |     0.0372 |     0.0015 |     0.0928 |
|                  Clock [MHz]                 |    1500.3523 |  1275.7007 |   205.5943 |  1172.4649 |
|                      CPI                     |       1.1399 |     0.1697 |     0.0065 |     0.2259 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |     904.1650 |          0 |          0 |          0 |
|    MCDRAM Memory read data volume [GBytes]   |       0.0021 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |      44.7131 |          0 |          0 |          0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.0001 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |     948.8781 |          0 |          0 |          0 |
|      MCDRAM Memory data volume [GBytes]      |       0.0023 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |     114.8994 |          0 |          0 |          0 |
|     DDR Memory read data volume [GBytes]     |       0.0003 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.2968 |          0 |          0 |          0 |
|   DDR Memory writeback data volume [GBytes]  | 7.040000e-07 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |     115.1962 |          0 |          0 |          0 |
|        DDR Memory data volume [GBytes]       |       0.0003 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+

+---------------------------------------------------+--------------+----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min   |      Max     |      Avg     |
+---------------------------------------------------+--------------+----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       0.0125 |   0.0024 |       0.0034 |       0.0031 |
|             Runtime unhalted [s] STAT             |       0.1363 |   0.0015 |       0.0928 |       0.0341 |
|                  Clock [MHz] STAT                 |    4154.1122 | 205.5943 |    1500.3523 |    1038.5280 |
|                      CPI STAT                     |       1.5420 |   0.0065 |       1.1399 |       0.3855 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |     904.1650 |        0 |     904.1650 |     226.0412 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0.0021 |        0 |       0.0021 |       0.0005 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      44.7131 |        0 |      44.7131 |      11.1783 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0001 |        0 |       0.0001 | 2.500000e-05 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |     948.8781 |        0 |     948.8781 |     237.2195 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0.0023 |        0 |       0.0023 |       0.0006 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |     114.8994 |        0 |     114.8994 |      28.7248 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0003 |        0 |       0.0003 |       0.0001 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.2968 |        0 |       0.2968 |       0.0742 |
|   DDR Memory writeback data volume [GBytes] STAT  | 7.040000e-07 |        0 | 7.040000e-07 | 1.760000e-07 |
|        DDR Memory bandwidth [MBytes/s] STAT       |     115.1962 |        0 |     115.1962 |      28.7991 |
|        DDR Memory data volume [GBytes] STAT       |       0.0003 |        0 |       0.0003 |       0.0001 |
+---------------------------------------------------+--------------+----------+--------------+--------------+

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
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0140 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.000725 |   0.002647 |   0.000835 |   0.000908 |   0.000765 |   0.000986 |   0.001209 |   0.001530 |   0.001280 |   0.001348 |    0.000614 |    0.000683 |    0.001596 |    0.001136 |    0.001060 |    0.001432 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|         Event         |  Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |   20646080 |     75783220 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |     98302220 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  |   29860230 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  |   27882690 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |       6961 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |       7066 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |       6912 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |       7054 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |       6929 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |       7039 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |       6843 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |       6895 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |       4947 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |       4985 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |       4959 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |       5257 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |       5152 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |       4627 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |       5139 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |       4201 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |       1378 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |       1377 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |       1379 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |       1377 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |       1377 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |       1382 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+----------------------------+----------+--------------+----------+--------------+--------------+
|            Event           |  Counter |      Sum     |    Min   |      Max     |      Avg     |
+----------------------------+----------+--------------+----------+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 2.398076e+20 | 20646080 | 1.844674e+19 | 1.498798e+19 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 2.767011e+20 | 29860230 | 1.844674e+19 | 1.729382e+19 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 2.767011e+20 | 27882690 | 1.844674e+19 | 1.729382e+19 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |         6961 |        0 |         6961 |     435.0625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |         7066 |        0 |         7066 |     441.6250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |         6912 |        0 |         6912 |          432 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |         7054 |        0 |         7054 |     440.8750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |         6929 |        0 |         6929 |     433.0625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |         7039 |        0 |         7039 |     439.9375 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |         6843 |        0 |         6843 |     427.6875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |         6895 |        0 |         6895 |     430.9375 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |         4947 |        0 |         4947 |     309.1875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |         4985 |        0 |         4985 |     311.5625 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |         4959 |        0 |         4959 |     309.9375 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |         5257 |        0 |         5257 |     328.5625 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |         5152 |        0 |         5152 |          322 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |         4627 |        0 |         4627 |     289.1875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |         5139 |        0 |         5139 |     321.1875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |         4201 |        0 |         4201 |     262.5625 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            0 |        0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            1 |        0 |            1 |       0.0625 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            0 |        0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            1 |        0 |            1 |       0.0625 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            0 |        0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            2 |        0 |            2 |       0.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            0 |        0 |            0 |            0 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            0 |        0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            0 |        0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            2 |        0 |            2 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            1 |        0 |            1 |       0.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            2 |        0 |            2 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            1 |        0 |            1 |       0.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            1 |        0 |            1 |       0.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            0 |        0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            1 |        0 |            1 |       0.0625 |
|      MC_CAS_READS STAT     |  MBOX0C0 |         1378 |        0 |         1378 |      86.1250 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            0 |        0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX1C0 |         1377 |        0 |         1377 |      86.0625 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            1 |        0 |            1 |       0.0625 |
|      MC_CAS_READS STAT     |  MBOX2C0 |         1379 |        0 |         1379 |      86.1875 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            3 |        0 |            3 |       0.1875 |
|      MC_CAS_READS STAT     |  MBOX4C0 |         1377 |        0 |         1377 |      86.0625 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            2 |        0 |            2 |       0.1250 |
|      MC_CAS_READS STAT     |  MBOX5C0 |         1377 |        0 |         1377 |      86.0625 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            0 |        0 |            0 |            0 |
|      MC_CAS_READS STAT     |  MBOX6C0 |         1382 |        0 |         1382 |      86.3750 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            2 |        0 |            2 |       0.1250 |
+----------------------------+----------+--------------+----------+--------------+--------------+

+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|                    Metric                    |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|              Runtime (RDTSC) [s]             |       0.0007 |       0.0026 |       0.0008 |       0.0009 |       0.0008 |       0.0010 |       0.0012 |       0.0015 |       0.0013 |       0.0013 |       0.0006 |       0.0007 |       0.0016 |       0.0011 |       0.0011 |       0.0014 |
|             Runtime unhalted [s]             |       0.0213 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 | 1.317630e+10 |
|                  Clock [MHz]                 |    1499.2864 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |    1399.9939 |
|                      CPI                     |       1.4463 | 2.434146e+11 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 | 1.876533e+11 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |    4914.5849 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    MCDRAM Memory read data volume [GBytes]   |       0.0036 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |    2735.6005 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.0020 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |    7650.1854 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MCDRAM Memory data volume [GBytes]      |       0.0055 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     DDR Memory read bandwidth [MBytes/s]     |     729.8583 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     DDR Memory read data volume [GBytes]     |       0.0005 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.7060 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|   DDR Memory writeback data volume [GBytes]  | 5.120000e-07 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|        DDR Memory bandwidth [MBytes/s]       |     730.5643 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|        DDR Memory data volume [GBytes]       |       0.0005 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       0.0186 |    0.0006 |       0.0026 |       0.0012 |
|             Runtime unhalted [s] STAT             | 1.976445e+11 |    0.0213 |  13176300000 | 1.235278e+10 |
|                  Clock [MHz] STAT                 |   22499.1949 | 1399.9939 |    1499.2864 |    1406.1997 |
|                      CPI STAT                     | 4.310679e+11 |         1 | 243414600000 | 2.694174e+10 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |    4914.5849 |         0 |    4914.5849 |     307.1616 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0.0036 |         0 |       0.0036 |       0.0002 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |    2735.6005 |         0 |    2735.6005 |     170.9750 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0020 |         0 |       0.0020 |       0.0001 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |    7650.1854 |         0 |    7650.1854 |     478.1366 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0.0055 |         0 |       0.0055 |       0.0003 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |     729.8583 |         0 |     729.8583 |      45.6161 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0005 |         0 |       0.0005 | 3.125000e-05 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.7060 |         0 |       0.7060 |       0.0441 |
|   DDR Memory writeback data volume [GBytes] STAT  | 5.120000e-07 |         0 | 5.120000e-07 | 3.200000e-08 |
|        DDR Memory bandwidth [MBytes/s] STAT       |     730.5643 |         0 |     730.5643 |      45.6603 |
|        DDR Memory data volume [GBytes] STAT       |       0.0005 |         0 |       0.0005 | 3.125000e-05 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

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
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.3701 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.000334 |   0.050248 |   0.033622 |   0.038681 |   0.017640 |   0.061066 |   0.077251 |   0.081208 |   0.084666 |   0.043325 |    0.048017 |    0.088704 |    0.091170 |    0.090592 |    0.095498 |    0.095226 |    0.063167 |    0.094605 |    0.094889 |    0.096087 |    0.065081 |    0.087410 |    0.059173 |    0.071358 |    0.052501 |    0.003811 |    0.092562 |    0.092291 |    0.096421 |    0.082969 |    0.020492 |    0.023143 |    0.028567 |    0.069190 |    0.095783 |    0.090848 |    0.096754 |    0.009555 |    0.057080 |    0.025867 |    0.014948 |    0.012373 |    0.091728 |    0.091451 |    0.006855 |    0.089785 |    0.079269 |    0.086110 |    0.097064 |    0.091948 |    0.073288 |    0.075337 |    0.031150 |    0.036230 |    0.093399 |    0.093127 |    0.093947 |    0.093672 |    0.040997 |    0.094229 |    0.067178 |    0.045791 |    0.054843 |    0.092846 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|         Event         |  Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  822538500 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 1212842000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |    884636500 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1018875000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |   1375174000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |     765491 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |    1066368 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |     773074 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |    1093783 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |     755663 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |    1081112 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |     738709 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |    1086502 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      52448 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      57730 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      54643 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      53128 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      52982 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      48973 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      55485 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      48079 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |         14 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          5 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          8 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          8 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          8 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          7 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |         17 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          6 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          1 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          5 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |      17930 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |      17926 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          8 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |      17927 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          8 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |      17928 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |      17931 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          8 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |      17928 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          7 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+----------------------------+----------+--------------+------------+--------------+--------------+
|            Event           |  Counter |      Sum     |     Min    |      Max     |      Avg     |
+----------------------------+----------+--------------+------------+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 1.162145e+21 |  822538500 | 1.844674e+19 | 1.815851e+19 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 1.143698e+21 |  884636500 | 1.844674e+19 | 1.787028e+19 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1.143698e+21 | 1018875000 | 1.844674e+19 | 1.787028e+19 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |       765491 |          0 |       765491 |   11960.7969 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |      1066368 |          0 |      1066368 |        16662 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |       773074 |          0 |       773074 |   12079.2812 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |      1093783 |          0 |      1093783 |   17090.3594 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |       755663 |          0 |       755663 |   11807.2344 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |      1081112 |          0 |      1081112 |   16892.3750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |       738709 |          0 |       738709 |   11542.3281 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |      1086502 |          0 |      1086502 |   16976.5938 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |        52448 |          0 |        52448 |     819.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |        57730 |          0 |        57730 |     902.0312 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |        54643 |          0 |        54643 |     853.7969 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |        53128 |          0 |        53128 |     830.1250 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |        52982 |          0 |        52982 |     827.8438 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |        48973 |          0 |        48973 |     765.2031 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |        55485 |          0 |        55485 |     866.9531 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |        48079 |          0 |        48079 |     751.2344 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |           14 |          0 |           14 |       0.2188 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            5 |          0 |            5 |       0.0781 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            8 |          0 |            8 |       0.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            8 |          0 |            8 |       0.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            8 |          0 |            8 |       0.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            7 |          0 |            7 |       0.1094 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |           17 |          0 |           17 |       0.2656 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            6 |          0 |            6 |       0.0938 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            3 |          0 |            3 |       0.0469 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            3 |          0 |            3 |       0.0469 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            0 |          0 |            0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            3 |          0 |            3 |       0.0469 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            1 |          0 |            1 |       0.0156 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            3 |          0 |            3 |       0.0469 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            5 |          0 |            5 |       0.0781 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            3 |          0 |            3 |       0.0469 |
|      MC_CAS_READS STAT     |  MBOX0C0 |        17930 |          0 |        17930 |     280.1562 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            2 |          0 |            2 |       0.0312 |
|      MC_CAS_READS STAT     |  MBOX1C0 |        17926 |          0 |        17926 |     280.0938 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            8 |          0 |            8 |       0.1250 |
|      MC_CAS_READS STAT     |  MBOX2C0 |        17927 |          0 |        17927 |     280.1094 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            8 |          0 |            8 |       0.1250 |
|      MC_CAS_READS STAT     |  MBOX4C0 |        17928 |          0 |        17928 |     280.1250 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            3 |          0 |            3 |       0.0469 |
|      MC_CAS_READS STAT     |  MBOX5C0 |        17931 |          0 |        17931 |     280.1719 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            8 |          0 |            8 |       0.1250 |
|      MC_CAS_READS STAT     |  MBOX6C0 |        17928 |          0 |        17928 |     280.1250 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            7 |          0 |            7 |       0.1094 |
+----------------------------+----------+--------------+------------+--------------+--------------+

+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|                    Metric                    |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|              Runtime (RDTSC) [s]             |       0.0003 |       0.0502 |       0.0336 |       0.0387 |       0.0176 |       0.0611 |       0.0773 |       0.0812 |       0.0847 |       0.0433 |       0.0480 |       0.0887 |       0.0912 |       0.0906 |       0.0955 |       0.0952 |       0.0632 |       0.0946 |       0.0949 |       0.0961 |       0.0651 |       0.0874 |       0.0592 |       0.0714 |       0.0525 |       0.0038 |       0.0926 |       0.0923 |       0.0964 |       0.0830 |       0.0205 |       0.0231 |       0.0286 |       0.0692 |       0.0958 |       0.0908 |       0.0968 |       0.0096 |       0.0571 |       0.0259 |       0.0149 |       0.0124 |       0.0917 |       0.0915 |       0.0069 |       0.0898 |       0.0793 |       0.0861 |       0.0971 |       0.0919 |       0.0733 |       0.0753 |       0.0311 |       0.0362 |       0.0934 |       0.0931 |       0.0939 |       0.0937 |       0.0410 |       0.0942 |       0.0672 |       0.0458 |       0.0548 |       0.0928 |
|             Runtime unhalted [s]             |       0.8665 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 | 1.317908e+10 |       0.6320 |
|                  Clock [MHz]                 |    1666.1641 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |    1399.6984 |     900.4128 |
|                      CPI                     |       1.4745 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 |            1 | 4.795625e-11 |
|    MCDRAM Memory read bandwidth [MBytes/s]   | 1.409104e+06 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    MCDRAM Memory read data volume [GBytes]   |       0.4711 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   60475.0608 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.0202 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MCDRAM Memory bandwidth [MBytes/s]      | 1.469579e+06 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MCDRAM Memory data volume [GBytes]      |       0.4913 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     DDR Memory read bandwidth [MBytes/s]     |   20593.0468 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     DDR Memory read data volume [GBytes]     |       0.0069 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       6.8918 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|   DDR Memory writeback data volume [GBytes]  | 2.304000e-06 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|        DDR Memory bandwidth [MBytes/s]       |   20599.9386 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|        DDR Memory data volume [GBytes]       |       0.0069 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+---------------------------------------------------+--------------+--------------+--------------+--------------+
|                       Metric                      |      Sum     |      Min     |      Max     |      Avg     |
+---------------------------------------------------+--------------+--------------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       4.2145 |       0.0003 |       0.0971 |       0.0659 |
|             Runtime unhalted [s] STAT             | 8.171030e+11 |       0.6320 |  13179080000 | 1.276723e+10 |
|                  Clock [MHz] STAT                 |   89347.8777 |     900.4128 |    1666.1641 |    1396.0606 |
|                      CPI STAT                     |      63.4745 | 4.795625e-11 |       1.4745 |       0.9918 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |      1409104 |            0 |      1409104 |   22017.2500 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       0.4711 |            0 |       0.4711 |       0.0074 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |   60475.0608 |            0 |   60475.0608 |     944.9228 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0202 |            0 |       0.0202 |       0.0003 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |      1469579 |            0 |      1469579 |   22962.1719 |
|      MCDRAM Memory data volume [GBytes] STAT      |       0.4913 |            0 |       0.4913 |       0.0077 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |   20593.0468 |            0 |   20593.0468 |     321.7664 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0069 |            0 |       0.0069 |       0.0001 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       6.8918 |            0 |       6.8918 |       0.1077 |
|   DDR Memory writeback data volume [GBytes] STAT  | 2.304000e-06 |            0 | 2.304000e-06 | 3.600000e-08 |
|        DDR Memory bandwidth [MBytes/s] STAT       |   20599.9386 |            0 |   20599.9386 |     321.8740 |
|        DDR Memory data volume [GBytes] STAT       |       0.0069 |            0 |       0.0069 |       0.0001 |
+---------------------------------------------------+--------------+--------------+--------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=512 
 Elapsed time is : 3.3901 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.387895 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+------------+
|         Event         |  Counter | HWThread 0 |
+-----------------------+----------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  944537700 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 5034913000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 4699253000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   23713930 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   23861310 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   23733930 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   23853300 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   23714950 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   23841470 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   23722570 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   23849480 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     175928 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     178090 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     178966 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     179623 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     170546 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     178212 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     169778 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     180056 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          6 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          9 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          8 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          8 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          7 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |         10 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          6 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          7 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |         17 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |         14 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |         11 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |         22 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |         13 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |         19 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |         12 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |         16 |
|      MC_CAS_READS     |  MBOX0C0 |     627387 |
|     MC_CAS_WRITES     |  MBOX0C1 |         30 |
|      MC_CAS_READS     |  MBOX1C0 |     627376 |
|     MC_CAS_WRITES     |  MBOX1C1 |         17 |
|      MC_CAS_READS     |  MBOX2C0 |     627378 |
|     MC_CAS_WRITES     |  MBOX2C1 |         16 |
|      MC_CAS_READS     |  MBOX4C0 |     627368 |
|     MC_CAS_WRITES     |  MBOX4C1 |         27 |
|      MC_CAS_READS     |  MBOX5C0 |     627362 |
|     MC_CAS_WRITES     |  MBOX5C1 |         19 |
|      MC_CAS_READS     |  MBOX6C0 |     627363 |
|     MC_CAS_WRITES     |  MBOX6C1 |         15 |
+-----------------------+----------+------------+

+----------------------------------------------+--------------+
|                    Metric                    |  HWThread 0  |
+----------------------------------------------+--------------+
|              Runtime (RDTSC) [s]             |       3.3879 |
|             Runtime unhalted [s]             |       3.5964 |
|                  Clock [MHz]                 |    1499.9931 |
|                      CPI                     |       5.3306 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |    3594.7420 |
|    MCDRAM Memory read data volume [GBytes]   |      12.1786 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     -44.4507 |
| MCDRAM Memory writeback data volume [GBytes] |      -0.1506 |
|      MCDRAM Memory bandwidth [MBytes/s]      |    3550.2913 |
|      MCDRAM Memory data volume [GBytes]      |      12.0280 |
|     DDR Memory read bandwidth [MBytes/s]     |      71.1093 |
|     DDR Memory read data volume [GBytes]     |       0.2409 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0023 |
|   DDR Memory writeback data volume [GBytes]  | 7.936000e-06 |
|        DDR Memory bandwidth [MBytes/s]       |      71.1117 |
|        DDR Memory data volume [GBytes]       |       0.2409 |
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
Hello world, I'm thread 3 out of 4 total threads. 
Hello world, I'm thread 2 out of 4 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.8616 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.858162 |   0.859233 |   0.859342 |   0.859320 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+------------+------------+------------+------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-----------------------+----------+------------+------------+------------+------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  820688900 |  871080200 |  851985400 |  857925000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 3181680000 | 5344415000 | 5207386000 | 5262108000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 2969567000 | 5008251000 | 4883212000 | 4955209000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   21745030 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   21833340 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   21741930 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   21840720 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   21738750 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   21845900 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   21746210 |          0 |          0 |          0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   21841270 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      73048 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      74173 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      73315 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      73638 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      71783 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      74334 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      71131 |          0 |          0 |          0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      74395 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          3 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          6 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          4 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          5 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          6 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          6 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          5 |          0 |          0 |          0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          5 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          3 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          3 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          9 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          5 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          6 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          2 |          0 |          0 |          0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          9 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX0C0 |          9 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          5 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX1C0 |         12 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          4 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX2C0 |         16 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          7 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX4C0 |         10 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          7 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX5C0 |         16 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          7 |          0 |          0 |          0 |
|      MC_CAS_READS     |  MBOX6C0 |         16 |          0 |          0 |          0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          9 |          0 |          0 |          0 |
+-----------------------+----------+------------+------------+------------+------------+

+----------------------------+----------+-------------+------------+------------+--------------+
|            Event           |  Counter |     Sum     |     Min    |     Max    |      Avg     |
+----------------------------+----------+-------------+------------+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  3401679500 |  820688900 |  871080200 |    850419875 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 18995589000 | 3181680000 | 5344415000 |   4748897250 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 17816239000 | 2969567000 | 5008251000 |   4454059750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |    21745030 |          0 |   21745030 | 5.436258e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |    21833340 |          0 |   21833340 |      5458335 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |    21741930 |          0 |   21741930 | 5.435482e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |    21840720 |          0 |   21840720 |      5460180 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |    21738750 |          0 |   21738750 | 5.434688e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |    21845900 |          0 |   21845900 |      5461475 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |    21746210 |          0 |   21746210 | 5.436552e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |    21841270 |          0 |   21841270 | 5.460318e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       73048 |          0 |      73048 |        18262 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       74173 |          0 |      74173 |   18543.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       73315 |          0 |      73315 |   18328.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       73638 |          0 |      73638 |   18409.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       71783 |          0 |      71783 |   17945.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       74334 |          0 |      74334 |   18583.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       71131 |          0 |      71131 |   17782.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |       74395 |          0 |      74395 |   18598.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |           3 |          0 |          3 |       0.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |           6 |          0 |          6 |       1.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |           4 |          0 |          4 |            1 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |           5 |          0 |          5 |       1.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |           6 |          0 |          6 |       1.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |           6 |          0 |          6 |       1.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |           5 |          0 |          5 |       1.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |           5 |          0 |          5 |       1.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           2 |          0 |          2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           3 |          0 |          3 |       0.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           3 |          0 |          3 |       0.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           9 |          0 |          9 |       2.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           5 |          0 |          5 |       1.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           6 |          0 |          6 |       1.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           2 |          0 |          2 |       0.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           9 |          0 |          9 |       2.2500 |
|      MC_CAS_READS STAT     |  MBOX0C0 |           9 |          0 |          9 |       2.2500 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |           5 |          0 |          5 |       1.2500 |
|      MC_CAS_READS STAT     |  MBOX1C0 |          12 |          0 |         12 |            3 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           4 |          0 |          4 |            1 |
|      MC_CAS_READS STAT     |  MBOX2C0 |          16 |          0 |         16 |            4 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           7 |          0 |          7 |       1.7500 |
|      MC_CAS_READS STAT     |  MBOX4C0 |          10 |          0 |         10 |       2.5000 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           7 |          0 |          7 |       1.7500 |
|      MC_CAS_READS STAT     |  MBOX5C0 |          16 |          0 |         16 |            4 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           7 |          0 |          7 |       1.7500 |
|      MC_CAS_READS STAT     |  MBOX6C0 |          16 |          0 |         16 |            4 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           9 |          0 |          9 |       2.2500 |
+----------------------------+----------+-------------+------------+------------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+
|                    Metric                    |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 |
+----------------------------------------------+--------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |       0.8582 |     0.8592 |     0.8593 |     0.8593 |
|             Runtime unhalted [s]             |       2.2726 |     3.8175 |     3.7196 |     3.7587 |
|                  Clock [MHz]                 |    1499.9896 |  1493.9599 |  1492.9287 |  1486.6976 |
|                      CPI                     |       3.8768 |     6.1354 |     6.1121 |     6.1335 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   13001.4106 |          0 |          0 |          0 |
|    MCDRAM Memory read data volume [GBytes]   |      11.1573 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |      43.6832 |          0 |          0 |          0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.0375 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |   13045.0938 |          0 |          0 |          0 |
|      MCDRAM Memory data volume [GBytes]      |      11.1948 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |       0.0059 |          0 |          0 |          0 |
|     DDR Memory read data volume [GBytes]     | 5.056000e-06 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0029 |          0 |          0 |          0 |
|   DDR Memory writeback data volume [GBytes]  | 2.496000e-06 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |       0.0088 |          0 |          0 |          0 |
|        DDR Memory data volume [GBytes]       | 7.552000e-06 |          0 |          0 |          0 |
+----------------------------------------------+--------------+------------+------------+------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       3.4360 |    0.8582 |       0.8593 |       0.8590 |
|             Runtime unhalted [s] STAT             |      13.5684 |    2.2726 |       3.8175 |       3.3921 |
|                  Clock [MHz] STAT                 |    5973.5758 | 1486.6976 |    1499.9896 |    1493.3940 |
|                      CPI STAT                     |      22.2578 |    3.8768 |       6.1354 |       5.5644 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |   13001.4106 |         0 |   13001.4106 |    3250.3526 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      11.1573 |         0 |      11.1573 |       2.7893 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      43.6832 |         0 |      43.6832 |      10.9208 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0375 |         0 |       0.0375 |       0.0094 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |   13045.0938 |         0 |   13045.0938 |    3261.2735 |
|      MCDRAM Memory data volume [GBytes] STAT      |      11.1948 |         0 |      11.1948 |       2.7987 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |       0.0059 |         0 |       0.0059 |       0.0015 |
|     DDR Memory read data volume [GBytes] STAT     | 5.056000e-06 |         0 | 5.056000e-06 | 1.264000e-06 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0029 |         0 |       0.0029 |       0.0007 |
|   DDR Memory writeback data volume [GBytes] STAT  | 2.496000e-06 |         0 | 2.496000e-06 | 6.240000e-07 |
|        DDR Memory bandwidth [MBytes/s] STAT       |       0.0088 |         0 |       0.0088 |       0.0022 |
|        DDR Memory data volume [GBytes] STAT       | 7.552000e-06 |         0 | 7.552000e-06 | 1.888000e-06 |
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
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.2456 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.230962 |   0.231372 |   0.232476 |   0.232309 |   0.231555 |   0.232023 |   0.231812 |   0.232264 |   0.231465 |   0.232459 |    0.232188 |    0.231670 |    0.232101 |    0.231962 |    0.231710 |    0.231862 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|         Event         |  Counter | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  684462500 | 1256137000 |  649889900 |  356648800 |  696917700 |  606135800 |  578080500 |  495008500 |  701942900 |  759116300 |   694151000 |   731796700 |   656977100 |   709092600 |   684062500 |   880156700 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 1354983000 | 9191534000 | 6990219000 | 7122644000 | 7384624000 | 7183756000 | 7054152000 | 6946744000 | 7365069000 | 7651068000 |  7325501000 |  7736205000 |  7742208000 |  7627967000 |  7346128000 |  8922020000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 1267043000 | 8873766000 | 7288360000 | 7422014000 | 7519552000 | 7363701000 | 7266846000 | 7124662000 | 7527016000 | 7747669000 |  7563252000 |  7909698000 |  7928089000 |  7818573000 |  7644385000 |  9294648000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   20505510 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   20530450 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   20504950 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   20532860 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   20505140 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   20535220 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   20488590 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   20522020 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      53910 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      53491 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      53655 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      53494 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      52429 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      53566 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      53168 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      53552 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          8 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          4 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          5 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          5 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          8 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          7 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX0C0 |      44908 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX1C0 |      44905 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          3 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX2C0 |      44908 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX4C0 |      44908 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX5C0 |      44905 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          1 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MC_CAS_READS     |  MBOX6C0 |      44911 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          2 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+-----------------------+----------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+----------------------------+----------+--------------+------------+------------+--------------+
|            Event           |  Counter |      Sum     |     Min    |     Max    |      Avg     |
+----------------------------+----------+--------------+------------+------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  11140576500 |  356648800 | 1256137000 | 6.962860e+08 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 114944822000 | 1354983000 | 9191534000 |   7184051375 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 117559274000 | 1267043000 | 9294648000 |   7347454625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |     20505510 |          0 |   20505510 | 1.281594e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |     20530450 |          0 |   20530450 | 1.283153e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |     20504950 |          0 |   20504950 | 1.281559e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |     20532860 |          0 |   20532860 | 1.283304e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |     20505140 |          0 |   20505140 | 1.281571e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |     20535220 |          0 |   20535220 | 1.283451e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |     20488590 |          0 |   20488590 | 1.280537e+06 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |     20522020 |          0 |   20522020 | 1.282626e+06 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |        53910 |          0 |      53910 |    3369.3750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |        53491 |          0 |      53491 |    3343.1875 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |        53655 |          0 |      53655 |    3353.4375 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |        53494 |          0 |      53494 |    3343.3750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |        52429 |          0 |      52429 |    3276.8125 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |        53566 |          0 |      53566 |    3347.8750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |        53168 |          0 |      53168 |         3323 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |        53552 |          0 |      53552 |         3347 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            8 |          0 |          8 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            4 |          0 |          4 |       0.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            5 |          0 |          5 |       0.3125 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            3 |          0 |          3 |       0.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            5 |          0 |          5 |       0.3125 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            3 |          0 |          3 |       0.1875 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            8 |          0 |          8 |       0.5000 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            7 |          0 |          7 |       0.4375 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            0 |          0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            0 |          0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            2 |          0 |          2 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |            2 |          0 |          2 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            2 |          0 |          2 |       0.1250 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            1 |          0 |          1 |       0.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            0 |          0 |          0 |            0 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            0 |          0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX0C0 |        44908 |          0 |      44908 |    2806.7500 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            1 |          0 |          1 |       0.0625 |
|      MC_CAS_READS STAT     |  MBOX1C0 |        44905 |          0 |      44905 |    2806.5625 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            3 |          0 |          3 |       0.1875 |
|      MC_CAS_READS STAT     |  MBOX2C0 |        44908 |          0 |      44908 |    2806.7500 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            0 |          0 |          0 |            0 |
|      MC_CAS_READS STAT     |  MBOX4C0 |        44908 |          0 |      44908 |    2806.7500 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            1 |          0 |          1 |       0.0625 |
|      MC_CAS_READS STAT     |  MBOX5C0 |        44905 |          0 |      44905 |    2806.5625 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |            1 |          0 |          1 |       0.0625 |
|      MC_CAS_READS STAT     |  MBOX6C0 |        44911 |          0 |      44911 |    2806.9375 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            2 |          0 |          2 |       0.1250 |
+----------------------------+----------+--------------+------------+------------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |       0.2310 |     0.2314 |     0.2325 |     0.2323 |     0.2316 |     0.2320 |     0.2318 |     0.2323 |     0.2315 |     0.2325 |      0.2322 |      0.2317 |      0.2321 |      0.2320 |      0.2317 |      0.2319 |
|             Runtime unhalted [s]             |       0.9678 |     6.5654 |     4.9930 |     5.0876 |     5.2748 |     5.1313 |     5.0387 |     4.9620 |     5.2608 |     5.4651 |      5.2325 |      5.5259 |      5.5302 |      5.4486 |      5.2473 |      6.3729 |
|                  Clock [MHz]                 |    1497.1622 |  1450.1282 |  1342.7258 |  1343.5253 |  1374.8737 |  1365.7833 |  1359.0181 |  1365.0338 |  1369.8731 |  1382.5389 |   1355.9858 |   1369.2868 |   1367.1705 |   1365.8647 |   1345.3718 |   1343.8680 |
|                      CPI                     |       1.9796 |     7.3173 |    10.7560 |    19.9710 |    10.5961 |    11.8517 |    12.2027 |    14.0336 |    10.4924 |    10.0789 |     10.5532 |     10.5715 |     11.7846 |     10.7574 |     10.7390 |     10.1369 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   45479.3358 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |      10.5040 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |      43.7323 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.0101 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |   45523.0681 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |      10.5141 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |      74.6638 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |       0.0172 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0022 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  | 5.120000e-07 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |      74.6661 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |       0.0172 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       3.7105 |    0.2310 |       0.2325 |       0.2319 |
|             Runtime unhalted [s] STAT             |      82.1039 |    0.9678 |       6.5654 |       5.1315 |
|                  Clock [MHz] STAT                 |   21998.2100 | 1342.7258 |    1497.1622 |    1374.8881 |
|                      CPI STAT                     |     173.8219 |    1.9796 |      19.9710 |      10.8639 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |   45479.3358 |         0 |   45479.3358 |    2842.4585 |
|    MCDRAM Memory read data volume [GBytes] STAT   |      10.5040 |         0 |      10.5040 |       0.6565 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |      43.7323 |         0 |      43.7323 |       2.7333 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0101 |         0 |       0.0101 |       0.0006 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |   45523.0681 |         0 |   45523.0681 |    2845.1918 |
|      MCDRAM Memory data volume [GBytes] STAT      |      10.5141 |         0 |      10.5141 |       0.6571 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      74.6638 |         0 |      74.6638 |       4.6665 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0172 |         0 |       0.0172 |       0.0011 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0022 |         0 |       0.0022 |       0.0001 |
|   DDR Memory writeback data volume [GBytes] STAT  | 5.120000e-07 |         0 | 5.120000e-07 | 3.200000e-08 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      74.6661 |         0 |      74.6661 |       4.6666 |
|        DDR Memory data volume [GBytes] STAT       |       0.0172 |         0 |       0.0172 |       0.0011 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 512
srun: Job 63427339 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63427339
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
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.3564 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.094125 |   0.104050 |   0.103374 |   0.103095 |   0.096006 |   0.095618 |   0.096357 |   0.097397 |   0.097750 |   0.098414 |    0.094746 |    0.105758 |    0.097050 |    0.096713 |    0.078386 |    0.077909 |    0.094423 |    0.094063 |    0.092081 |    0.091306 |    0.081025 |    0.081781 |    0.106111 |    0.098700 |    0.098106 |    0.092473 |    0.093308 |    0.090235 |    0.104739 |    0.104455 |    0.099136 |    0.099462 |    0.079484 |    0.080262 |    0.085421 |    0.084540 |    0.077128 |    0.078886 |    0.087221 |    0.086406 |    0.089165 |    0.088160 |    0.105080 |    0.076254 |    0.083560 |    0.082715 |    0.076842 |    0.105423 |    0.092904 |    0.093654 |    0.100247 |    0.100881 |    0.103697 |    0.107115 |    0.106808 |    0.102713 |    0.106443 |    0.099816 |    0.101790 |    0.101488 |    0.102407 |    0.102104 |    0.101182 |    0.100542 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|         Event         |  Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 1677456000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 2646002000 |  12193870000 |   9686931000 |  13999600000 |  12829000000 |  14725870000 |  12645650000 |   9877491000 |  11091680000 |   9702262000 |  10965420000 |   9146705000 |  14104680000 |  13334230000 |   9470237000 |   9382713000 |   9702033000 |   9799119000 |  13646860000 |   9558533000 |  10995490000 |  10784370000 |  11767620000 |  12767560000 |  14610790000 |   9442613000 |   9288111000 |  10068250000 |   9265773000 |  10388310000 |  13717010000 |   9483833000 |  11753420000 |  11701450000 |  10807710000 |   9980391000 |  12033970000 |  11834050000 |  11048770000 |  10490190000 |  11658850000 |  10175930000 |   8198107000 |  10637930000 |   9095789000 |  10460930000 |  10499780000 |   9101869000 |   8859797000 |   9020764000 |   9742011000 |   9433951000 |   9573021000 |   8329780000 |  10569290000 |  10506090000 |  10290040000 |  11014020000 |  10477880000 |  10977180000 |  10879490000 |  16052780000 |  15737260000 |  19405910000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 2420619000 |  12416250000 |  12191830000 |  15091630000 |  13789490000 |  15138410000 |  14349980000 |  12806260000 |  14060980000 |  11769720000 |  12791870000 |  12571420000 |  14872460000 |  14153020000 |  11049070000 |  11079400000 |  11869610000 |  11897690000 |  14451930000 |  11641070000 |  11965650000 |  11919270000 |  11516670000 |  12838820000 |  14500930000 |  11577980000 |  11496060000 |  11670240000 |  12437210000 |  13411180000 |  14649610000 |  11776080000 |  12568830000 |  12515110000 |  11844940000 |  11048030000 |  12310220000 |  12214570000 |  12180760000 |  11633860000 |  12600830000 |  11439330000 |  11387750000 |  11684340000 |  10667290000 |  11824610000 |  11581660000 |  12682880000 |  10854280000 |  11067460000 |  12064390000 |  11861970000 |  12036570000 |  13201150000 |  12396490000 |  12672670000 |  13968030000 |  12715350000 |  12432650000 |  12880460000 |  12739090000 |  16223290000 |  15844590000 |  17836970000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   17043390 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   16630510 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   16994860 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   16688470 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   16965340 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   16594400 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   16917790 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   16610770 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     109265 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     108110 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     108363 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     103877 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     110992 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     100320 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     110968 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      99903 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          4 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          6 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          5 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          4 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          9 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          5 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          7 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          6 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |         10 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          2 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          7 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          5 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          7 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |      36307 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          9 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |      36299 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          9 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |      36306 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          3 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |      36306 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |         11 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |      36306 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |         13 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |      36313 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          4 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+-----------------------+----------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+----------------------------+----------+--------------+------------+--------------+--------------+
|            Event           |  Counter |      Sum     |     Min    |      Max     |      Avg     |
+----------------------------+----------+--------------+------------+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  | 1.162145e+21 | 1677456000 | 1.844674e+19 | 1.815851e+19 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 701437016000 | 2646002000 |  19405910000 |  10959953375 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 801152829000 | 2420619000 |  17836970000 | 1.251801e+10 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |     17043390 |          0 |     17043390 |  266302.9688 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |     16630510 |          0 |     16630510 |  259851.7188 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |     16994860 |          0 |     16994860 |  265544.6875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |     16688470 |          0 |     16688470 |  260757.3438 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |     16965340 |          0 |     16965340 |  265083.4375 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |     16594400 |          0 |     16594400 |  259287.5000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |     16917790 |          0 |     16917790 |  264340.4688 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |     16610770 |          0 |     16610770 |  259543.2812 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       109265 |          0 |       109265 |    1707.2656 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       108110 |          0 |       108110 |    1689.2188 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       108363 |          0 |       108363 |    1693.1719 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       103877 |          0 |       103877 |    1623.0781 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       110992 |          0 |       110992 |    1734.2500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       100320 |          0 |       100320 |    1567.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       110968 |          0 |       110968 |    1733.8750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |        99903 |          0 |        99903 |    1560.9844 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            4 |          0 |            4 |       0.0625 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            3 |          0 |            3 |       0.0469 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            6 |          0 |            6 |       0.0938 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            5 |          0 |            5 |       0.0781 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            2 |          0 |            2 |       0.0312 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            4 |          0 |            4 |       0.0625 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            2 |          0 |            2 |       0.0312 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            9 |          0 |            9 |       0.1406 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |            5 |          0 |            5 |       0.0781 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |            7 |          0 |            7 |       0.1094 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |            6 |          0 |            6 |       0.0938 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           10 |          0 |           10 |       0.1562 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |            2 |          0 |            2 |       0.0312 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |            7 |          0 |            7 |       0.1094 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |            5 |          0 |            5 |       0.0781 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |            7 |          0 |            7 |       0.1094 |
|      MC_CAS_READS STAT     |  MBOX0C0 |        36307 |          0 |        36307 |     567.2969 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |            9 |          0 |            9 |       0.1406 |
|      MC_CAS_READS STAT     |  MBOX1C0 |        36299 |          0 |        36299 |     567.1719 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            9 |          0 |            9 |       0.1406 |
|      MC_CAS_READS STAT     |  MBOX2C0 |        36306 |          0 |        36306 |     567.2812 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |            3 |          0 |            3 |       0.0469 |
|      MC_CAS_READS STAT     |  MBOX4C0 |        36306 |          0 |        36306 |     567.2812 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           11 |          0 |           11 |       0.1719 |
|      MC_CAS_READS STAT     |  MBOX5C0 |        36306 |          0 |        36306 |     567.2812 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           13 |          0 |           13 |       0.2031 |
|      MC_CAS_READS STAT     |  MBOX6C0 |        36313 |          0 |        36313 |     567.3906 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |            4 |          0 |            4 |       0.0625 |
+----------------------------+----------+--------------+------------+--------------+--------------+

+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|                    Metric                    |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|              Runtime (RDTSC) [s]             |       0.0941 |       0.1041 |       0.1034 |       0.1031 |       0.0960 |       0.0956 |       0.0964 |       0.0974 |       0.0977 |       0.0984 |       0.0947 |       0.1058 |       0.0970 |       0.0967 |       0.0784 |       0.0779 |       0.0944 |       0.0941 |       0.0921 |       0.0913 |       0.0810 |       0.0818 |       0.1061 |       0.0987 |       0.0981 |       0.0925 |       0.0933 |       0.0902 |       0.1047 |       0.1045 |       0.0991 |       0.0995 |       0.0795 |       0.0803 |       0.0854 |       0.0845 |       0.0771 |       0.0789 |       0.0872 |       0.0864 |       0.0892 |       0.0882 |       0.1051 |       0.0763 |       0.0836 |       0.0827 |       0.0768 |       0.1054 |       0.0929 |       0.0937 |       0.1002 |       0.1009 |       0.1037 |       0.1071 |       0.1068 |       0.1027 |       0.1064 |       0.0998 |       0.1018 |       0.1015 |       0.1024 |       0.1021 |       0.1012 |       0.1005 |
|             Runtime unhalted [s]             |       1.8900 |       8.7099 |       6.9192 |       9.9997 |       9.1636 |      10.5185 |       9.0326 |       7.0554 |       7.9226 |       6.9302 |       7.8325 |       6.5334 |      10.0748 |       9.5245 |       6.7645 |       6.7020 |       6.9300 |       6.9994 |       9.7478 |       6.8275 |       7.8539 |       7.7031 |       8.4055 |       9.1197 |      10.4363 |       6.7447 |       6.6344 |       7.1916 |       6.6184 |       7.4202 |       9.7979 |       6.7742 |       8.3953 |       8.3582 |       7.7198 |       7.1289 |       8.5957 |       8.4529 |       7.8920 |       7.4930 |       8.3278 |       7.2685 |       5.8558 |       7.5985 |       6.4970 |       7.4721 |       7.4999 |       6.5013 |       6.3284 |       6.4434 |       6.9586 |       6.7385 |       6.8379 |       5.9499 |       7.5495 |       7.5044 |       7.3500 |       7.8672 |       7.4842 |       7.8409 |       7.7711 |      11.4663 |      11.2409 |      13.8614 |
|                  Clock [MHz]                 |    1530.3507 |    1374.9229 |    1112.3579 |    1298.6937 |    1302.4823 |    1361.8458 |    1233.7214 |    1079.8205 |    1104.3557 |    1154.0752 |    1200.1029 |    1018.6092 |    1327.7236 |    1319.0039 |    1199.9478 |    1185.6034 |    1144.3360 |    1153.0593 |    1322.0081 |    1149.5440 |    1286.4874 |    1266.6959 |    1430.5036 |    1392.2270 |    1410.6039 |    1141.7911 |    1131.1120 |    1207.8179 |    1043.0039 |    1084.4391 |    1310.8731 |    1127.4840 |    1309.1718 |    1308.9777 |    1277.4034 |    1264.7071 |    1368.5805 |    1356.3834 |    1269.8920 |    1262.3703 |    1295.3401 |    1245.3768 |    1007.8663 |    1274.6184 |    1193.7504 |    1238.5419 |    1269.2192 |    1004.7082 |    1142.7468 |    1141.0971 |    1130.4998 |    1113.4329 |    1113.4572 |     883.3829 |    1193.6426 |    1160.6472 |    1031.3573 |    1212.6760 |    1179.8776 |    1193.1270 |    1195.6316 |    1385.2832 |    1390.5140 |    1523.1412 |
|                      CPI                     |       1.5774 | 6.610312e-10 | 5.251297e-10 | 7.589200e-10 | 6.954616e-10 | 7.982912e-10 | 6.855222e-10 | 5.354600e-10 | 6.012813e-10 | 5.259608e-10 | 5.944367e-10 | 4.958440e-10 | 7.646164e-10 | 7.228502e-10 | 5.133827e-10 | 5.086380e-10 | 5.259484e-10 | 5.312114e-10 | 7.397979e-10 | 5.181692e-10 | 5.960668e-10 | 5.846220e-10 | 6.379241e-10 | 6.921310e-10 | 7.920527e-10 | 5.118852e-10 | 5.035096e-10 | 5.458010e-10 | 5.022987e-10 | 5.631515e-10 | 7.436008e-10 | 5.141197e-10 | 6.371543e-10 | 6.343370e-10 | 5.858873e-10 | 5.410382e-10 | 6.523630e-10 | 6.415253e-10 | 5.989552e-10 | 5.686745e-10 | 6.320277e-10 | 5.516384e-10 | 4.444204e-10 | 5.766835e-10 | 4.930838e-10 | 5.670883e-10 | 5.691943e-10 | 4.934134e-10 | 4.802907e-10 | 4.890167e-10 | 5.281156e-10 | 5.114156e-10 | 5.189546e-10 | 4.515584e-10 | 5.729625e-10 | 5.695364e-10 | 5.578243e-10 | 5.970714e-10 | 5.680071e-10 | 5.950743e-10 | 5.897785e-10 | 8.702231e-10 | 8.531188e-10 | 1.051997e-09 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |   91415.8780 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    MCDRAM Memory read data volume [GBytes]   |       8.6045 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     431.0604 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.0406 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |   91846.9383 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MCDRAM Memory data volume [GBytes]      |       8.6451 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     DDR Memory read bandwidth [MBytes/s]     |     148.1178 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     DDR Memory read data volume [GBytes]     |       0.0139 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0333 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|   DDR Memory writeback data volume [GBytes]  | 3.136000e-06 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|        DDR Memory bandwidth [MBytes/s]       |     148.1511 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|        DDR Memory data volume [GBytes]       |       0.0139 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+----------------------------------------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+---------------------------------------------------+--------------+--------------+--------------+--------------+
|                       Metric                      |      Sum     |      Min     |      Max     |      Avg     |
+---------------------------------------------------+--------------+--------------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |       6.0484 |       0.0763 |       0.1071 |       0.0945 |
|             Runtime unhalted [s] STAT             |     501.0273 |       1.8900 |      13.8614 |       7.8286 |
|                  Clock [MHz] STAT                 |   78343.0251 |     883.3829 |    1530.3507 |    1224.1098 |
|                      CPI STAT                     |       1.5774 | 4.444204e-10 |       1.5774 |       0.0246 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |   91415.8780 |            0 |   91415.8780 |    1428.3731 |
|    MCDRAM Memory read data volume [GBytes] STAT   |       8.6045 |            0 |       8.6045 |       0.1344 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     431.0604 |            0 |     431.0604 |       6.7353 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.0406 |            0 |       0.0406 |       0.0006 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |   91846.9383 |            0 |   91846.9383 |    1435.1084 |
|      MCDRAM Memory data volume [GBytes] STAT      |       8.6451 |            0 |       8.6451 |       0.1351 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |     148.1178 |            0 |     148.1178 |       2.3143 |
|     DDR Memory read data volume [GBytes] STAT     |       0.0139 |            0 |       0.0139 |       0.0002 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0333 |            0 |       0.0333 |       0.0005 |
|   DDR Memory writeback data volume [GBytes] STAT  | 3.136000e-06 |            0 | 3.136000e-06 | 4.900000e-08 |
|        DDR Memory bandwidth [MBytes/s] STAT       |     148.1511 |            0 |     148.1511 |       2.3149 |
|        DDR Memory data volume [GBytes] STAT       |       0.0139 |            0 |       0.0139 |       0.0002 |
+---------------------------------------------------+--------------+--------------+--------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-0 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=2048 
 Elapsed time is : 218.8221 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 218.820400 |
|     call count    |          1 |
+-------------------+------------+

+-----------------------+----------+--------------+
|         Event         |  Counter |  HWThread 0  |
+-----------------------+----------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  60209330000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 325311400000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 303624000000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   1500414000 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   1508915000 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   1501543000 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   1508818000 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   1500838000 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   1509233000 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   1500905000 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   1508233000 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      9618269 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      9798795 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      9961094 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      9837897 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      9374387 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      9811550 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      9261058 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      9923808 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          470 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          520 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          504 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          472 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          472 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          481 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          447 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          501 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |         1381 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |         1460 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |         1432 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |         1478 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |         1392 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |         1474 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |         1367 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |         1465 |
|      MC_CAS_READS     |  MBOX0C0 |     41335430 |
|     MC_CAS_WRITES     |  MBOX0C1 |         1911 |
|      MC_CAS_READS     |  MBOX1C0 |     41335380 |
|     MC_CAS_WRITES     |  MBOX1C1 |         1917 |
|      MC_CAS_READS     |  MBOX2C0 |     41335400 |
|     MC_CAS_WRITES     |  MBOX2C1 |         1888 |
|      MC_CAS_READS     |  MBOX4C0 |     41335410 |
|     MC_CAS_WRITES     |  MBOX4C1 |         1947 |
|      MC_CAS_READS     |  MBOX5C0 |     41335390 |
|     MC_CAS_WRITES     |  MBOX5C1 |         1910 |
|      MC_CAS_READS     |  MBOX6C0 |     41335430 |
|     MC_CAS_WRITES     |  MBOX6C1 |         1890 |
+-----------------------+----------+--------------+

+----------------------------------------------+------------+
|                    Metric                    | HWThread 0 |
+----------------------------------------------+------------+
|              Runtime (RDTSC) [s]             |   218.8204 |
|             Runtime unhalted [s]             |   232.3668 |
|                  Clock [MHz]                 |  1499.9900 |
|                      CPI                     |     5.4030 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |  3521.1002 |
|    MCDRAM Memory read data volume [GBytes]   |   770.4886 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   -49.8456 |
| MCDRAM Memory writeback data volume [GBytes] |   -10.9072 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  3471.2546 |
|      MCDRAM Memory data volume [GBytes]      |   759.5813 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5380 |
|     DDR Memory read data volume [GBytes]     |    15.8728 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0034 |
|   DDR Memory writeback data volume [GBytes]  |     0.0007 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5414 |
|        DDR Memory data volume [GBytes]       |    15.8735 |
+----------------------------------------------+------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-3 ./benchmark-basic-omp -N 2048
srun: Job 63427339 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63427339
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
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 55.8752 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  55.872060 |  55.873210 |  55.873280 |  55.873300 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+-----------------------+----------+--------------+--------------+--------------+--------------+
|         Event         |  Counter |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |
+-----------------------+----------+--------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  60314520000 |  59425570000 |  60559260000 |  60577200000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 323952500000 | 328951000000 | 329160900000 | 329249100000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 302355700000 | 307049500000 | 307249000000 | 307354900000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   1327842000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   1331127000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   1328243000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   1331119000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   1327709000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   1331067000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   1327793000 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   1330786000 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      3137255 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      3154174 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      3200834 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      3105478 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      3077886 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      3196288 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      3038190 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      3246345 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          213 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          229 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          204 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          219 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          209 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          213 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          205 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          233 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          422 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          435 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          411 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          430 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          405 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          426 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          415 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          434 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |     10554690 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          565 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |     10554720 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          553 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |     10554690 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          574 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |     10554680 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          570 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |     10554700 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          554 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |     10554710 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          569 |            0 |            0 |            0 |
+-----------------------+----------+--------------+--------------+--------------+--------------+

+----------------------------+----------+---------------+--------------+--------------+--------------+
|            Event           |  Counter |      Sum      |      Min     |      Max     |      Avg     |
+----------------------------+----------+---------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  240876550000 |  59425570000 |  60577200000 |  60219137500 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 1311313500000 | 323952500000 | 329249100000 | 327828375000 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 1224009100000 | 302355700000 | 307354900000 | 306002275000 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |    1327842000 |            0 |   1327842000 |    331960500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |    1331127000 |            0 |   1331127000 |    332781750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |    1328243000 |            0 |   1328243000 |    332060750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |    1331119000 |            0 |   1331119000 |    332779750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |    1327709000 |            0 |   1327709000 |    331927250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |    1331067000 |            0 |   1331067000 |    332766750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |    1327793000 |            0 |   1327793000 |    331948250 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |    1330786000 |            0 |   1330786000 |    332696500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       3137255 |            0 |      3137255 |  784313.7500 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       3154174 |            0 |      3154174 |  788543.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       3200834 |            0 |      3200834 |  800208.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       3105478 |            0 |      3105478 |  776369.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       3077886 |            0 |      3077886 |  769471.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       3196288 |            0 |      3196288 |       799072 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       3038190 |            0 |      3038190 |  759547.5000 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |       3246345 |            0 |      3246345 |  811586.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |           213 |            0 |          213 |      53.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |           229 |            0 |          229 |      57.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |           204 |            0 |          204 |           51 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |           219 |            0 |          219 |      54.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |           209 |            0 |          209 |      52.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |           213 |            0 |          213 |      53.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |           205 |            0 |          205 |      51.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |           233 |            0 |          233 |      58.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           422 |            0 |          422 |     105.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           435 |            0 |          435 |     108.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           411 |            0 |          411 |     102.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           430 |            0 |          430 |     107.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           405 |            0 |          405 |     101.2500 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           426 |            0 |          426 |     106.5000 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           415 |            0 |          415 |     103.7500 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           434 |            0 |          434 |     108.5000 |
|      MC_CAS_READS STAT     |  MBOX0C0 |      10554690 |            0 |     10554690 | 2.638672e+06 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |           565 |            0 |          565 |     141.2500 |
|      MC_CAS_READS STAT     |  MBOX1C0 |      10554720 |            0 |     10554720 |      2638680 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           553 |            0 |          553 |     138.2500 |
|      MC_CAS_READS STAT     |  MBOX2C0 |      10554690 |            0 |     10554690 | 2.638672e+06 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           574 |            0 |          574 |     143.5000 |
|      MC_CAS_READS STAT     |  MBOX4C0 |      10554680 |            0 |     10554680 |      2638670 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           570 |            0 |          570 |     142.5000 |
|      MC_CAS_READS STAT     |  MBOX5C0 |      10554700 |            0 |     10554700 |      2638675 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           554 |            0 |          554 |     138.5000 |
|      MC_CAS_READS STAT     |  MBOX6C0 |      10554710 |            0 |     10554710 | 2.638678e+06 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           569 |            0 |          569 |     142.2500 |
+----------------------------+----------+---------------+--------------+--------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+----------------------------------------------+------------+------------+------------+------------+
|              Runtime (RDTSC) [s]             |    55.8721 |    55.8732 |    55.8733 |    55.8733 |
|             Runtime unhalted [s]             |   231.4420 |   235.0131 |   235.1631 |   235.2261 |
|                  Clock [MHz]                 |  1499.6928 |  1499.5534 |  1499.5360 |  1499.4210 |
|                      CPI                     |     5.3711 |     5.5355 |     5.4354 |     5.4352 |
|    MCDRAM Memory read bandwidth [MBytes/s]   | 12182.8975 |          0 |          0 |          0 |
|    MCDRAM Memory read data volume [GBytes]   |   680.6836 |          0 |          0 |          0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   -43.7247 |          0 |          0 |          0 |
| MCDRAM Memory writeback data volume [GBytes] |    -2.4430 |          0 |          0 |          0 |
|      MCDRAM Memory bandwidth [MBytes/s]      | 12139.1727 |          0 |          0 |          0 |
|      MCDRAM Memory data volume [GBytes]      |   678.2406 |          0 |          0 |          0 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5408 |          0 |          0 |          0 |
|     DDR Memory read data volume [GBytes]     |     4.0530 |          0 |          0 |          0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0039 |          0 |          0 |          0 |
|   DDR Memory writeback data volume [GBytes]  |     0.0002 |          0 |          0 |          0 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5447 |          0 |          0 |          0 |
|        DDR Memory data volume [GBytes]       |     4.0532 |          0 |          0 |          0 |
+----------------------------------------------+------------+------------+------------+------------+

+---------------------------------------------------+------------+-----------+------------+-----------+
|                       Metric                      |     Sum    |    Min    |     Max    |    Avg    |
+---------------------------------------------------+------------+-----------+------------+-----------+
|              Runtime (RDTSC) [s] STAT             |   223.4919 |   55.8721 |    55.8733 |   55.8730 |
|             Runtime unhalted [s] STAT             |   936.8443 |  231.4420 |   235.2261 |  234.2111 |
|                  Clock [MHz] STAT                 |  5998.2032 | 1499.4210 |  1499.6928 | 1499.5508 |
|                      CPI STAT                     |    21.7772 |    5.3711 |     5.5355 |    5.4443 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   | 12182.8975 |         0 | 12182.8975 | 3045.7244 |
|    MCDRAM Memory read data volume [GBytes] STAT   |   680.6836 |         0 |   680.6836 |  170.1709 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |   -43.7247 |  -43.7247 |          0 |  -10.9312 |
| MCDRAM Memory writeback data volume [GBytes] STAT |    -2.4430 |   -2.4430 |          0 |   -0.6108 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      | 12139.1727 |         0 | 12139.1727 | 3034.7932 |
|      MCDRAM Memory data volume [GBytes] STAT      |   678.2406 |         0 |   678.2406 |  169.5601 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |    72.5408 |         0 |    72.5408 |   18.1352 |
|     DDR Memory read data volume [GBytes] STAT     |     4.0530 |         0 |     4.0530 |    1.0132 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |     0.0039 |         0 |     0.0039 |    0.0010 |
|   DDR Memory writeback data volume [GBytes] STAT  |     0.0002 |         0 |     0.0002 |    0.0001 |
|        DDR Memory bandwidth [MBytes/s] STAT       |    72.5447 |         0 |    72.5447 |   18.1362 |
|        DDR Memory data volume [GBytes] STAT       |     4.0532 |         0 |     4.0532 |    1.0133 |
+---------------------------------------------------+------------+-----------+------------+-----------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-15 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 14.2432 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |  14.228550 |  14.230160 |  14.229410 |  14.229820 |  14.229960 |  14.230090 |  14.230370 |  14.230420 |  14.229480 |  14.230290 |   14.230020 |   14.230160 |   14.229560 |   14.229720 |   14.229850 |   14.230450 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|         Event         |  Counter |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+-----------------------+----------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  |  56574830000 |  59537250000 |  60488400000 |  60346370000 |  60176900000 |  59586280000 |  58959250000 |  58374680000 |  60614270000 |  60543690000 |  59587590000 |  59622160000 |  60259260000 |  59719100000 |  60800310000 |  60921370000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 247661400000 | 334463600000 | 332288900000 | 331905600000 | 331799200000 | 331766600000 | 332044600000 | 331648900000 | 332064700000 | 331627600000 | 332136400000 | 331946200000 | 332418800000 | 332549300000 | 332591400000 | 332798700000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 231131400000 | 312603400000 | 310932400000 | 310606000000 | 310477100000 | 310442800000 | 310701300000 | 310483800000 | 310745200000 | 310499000000 | 310786100000 | 310746300000 | 311139600000 | 311264700000 | 311297200000 | 311935200000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |   1341090000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |   1342719000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |   1341242000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |   1342355000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |   1341086000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |   1342619000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |   1341081000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |   1342413000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |      1540174 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |      1553913 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |      1556933 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |      1508711 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |      1469197 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |      1588930 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |      1479661 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |      1562832 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |           54 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |           50 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |           60 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |           59 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |           82 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |           60 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |           68 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |           61 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          150 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          158 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          147 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          160 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          154 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          159 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          158 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          168 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |      2689127 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          209 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |      2689128 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |          213 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |      2689139 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          202 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |      2689145 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |          221 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |      2689128 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          207 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |      2689147 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          205 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+-----------------------+----------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+----------------------------+----------+---------------+--------------+--------------+--------------+
|            Event           |  Counter |      Sum      |      Min     |      Max     |      Avg     |
+----------------------------+----------+---------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  956111710000 |  56574830000 |  60921370000 |  59756981875 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 5231711900000 | 247661400000 | 334463600000 | 326981993750 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 4895791500000 | 231131400000 | 312603400000 | 305986968750 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |    1341090000 |            0 |   1341090000 |     83818125 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |    1342719000 |            0 |   1342719000 | 8.391994e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |    1341242000 |            0 |   1341242000 |     83827625 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |    1342355000 |            0 |   1342355000 | 8.389719e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |    1341086000 |            0 |   1341086000 |     83817875 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |    1342619000 |            0 |   1342619000 | 8.391369e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |    1341081000 |            0 |   1341081000 | 8.381756e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |    1342413000 |            0 |   1342413000 | 8.390081e+07 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |       1540174 |            0 |      1540174 |   96260.8750 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |       1553913 |            0 |      1553913 |   97119.5625 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |       1556933 |            0 |      1556933 |   97308.3125 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |       1508711 |            0 |      1508711 |   94294.4375 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |       1469197 |            0 |      1469197 |   91824.8125 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |       1588930 |            0 |      1588930 |   99308.1250 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |       1479661 |            0 |      1479661 |   92478.8125 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |       1562832 |            0 |      1562832 |        97677 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |            54 |            0 |           54 |       3.3750 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |            50 |            0 |           50 |       3.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |            60 |            0 |           60 |       3.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |            59 |            0 |           59 |       3.6875 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |            82 |            0 |           82 |       5.1250 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |            60 |            0 |           60 |       3.7500 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |            68 |            0 |           68 |       4.2500 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |            61 |            0 |           61 |       3.8125 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |           150 |            0 |          150 |       9.3750 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |           158 |            0 |          158 |       9.8750 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |           147 |            0 |          147 |       9.1875 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |           160 |            0 |          160 |           10 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |           154 |            0 |          154 |       9.6250 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |           159 |            0 |          159 |       9.9375 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |           158 |            0 |          158 |       9.8750 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |           168 |            0 |          168 |      10.5000 |
|      MC_CAS_READS STAT     |  MBOX0C0 |       2689127 |            0 |      2689127 |  168070.4375 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |           209 |            0 |          209 |      13.0625 |
|      MC_CAS_READS STAT     |  MBOX1C0 |       2689128 |            0 |      2689128 |  168070.5000 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |           213 |            0 |          213 |      13.3125 |
|      MC_CAS_READS STAT     |  MBOX2C0 |       2689139 |            0 |      2689139 |  168071.1875 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |           202 |            0 |          202 |      12.6250 |
|      MC_CAS_READS STAT     |  MBOX4C0 |       2689145 |            0 |      2689145 |  168071.5625 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |           221 |            0 |          221 |      13.8125 |
|      MC_CAS_READS STAT     |  MBOX5C0 |       2689128 |            0 |      2689128 |  168070.5000 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |           207 |            0 |          207 |      12.9375 |
|      MC_CAS_READS STAT     |  MBOX6C0 |       2689147 |            0 |      2689147 |  168071.6875 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |           205 |            0 |          205 |      12.8125 |
+----------------------------+----------+---------------+--------------+--------------+--------------+

+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |    14.2286 |    14.2302 |    14.2294 |    14.2298 |    14.2300 |    14.2301 |    14.2304 |    14.2304 |    14.2295 |    14.2303 |     14.2300 |     14.2302 |     14.2296 |     14.2297 |     14.2299 |     14.2304 |
|             Runtime unhalted [s]             |   176.9017 |   238.9036 |   237.3502 |   237.0764 |   237.0004 |   236.9771 |   237.1757 |   236.8931 |   237.1901 |   236.8778 |    237.2413 |    237.1054 |    237.4430 |    237.5362 |    237.5663 |    237.7143 |
|                  Clock [MHz]                 |  1500.1187 |  1497.8951 |  1496.1533 |  1495.9979 |  1496.1392 |  1496.1575 |  1496.1653 |  1495.4292 |  1496.0445 |  1495.2599 |   1496.1706 |   1495.5054 |   1495.7414 |   1495.7272 |   1495.7604 |   1493.6315 |
|                      CPI                     |     4.3776 |     5.6177 |     5.4934 |     5.5000 |     5.5137 |     5.5678 |     5.6318 |     5.6814 |     5.4783 |     5.4775 |      5.5739 |      5.5675 |      5.5165 |      5.5686 |      5.4702 |      5.4628 |
|    MCDRAM Memory read bandwidth [MBytes/s]   | 48284.2319 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |   687.0146 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |   -17.4273 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |    -0.2480 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      | 48266.8046 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |   686.7666 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |    72.5744 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |     1.0326 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |     0.0057 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  |     0.0001 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |    72.5800 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |     1.0327 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+------------+-----------+------------+--------------+
|                       Metric                      |     Sum    |    Min    |     Max    |      Avg     |
+---------------------------------------------------+------------+-----------+------------+--------------+
|              Runtime (RDTSC) [s] STAT             |   227.6785 |   14.2286 |    14.2304 |      14.2299 |
|             Runtime unhalted [s] STAT             |  3736.9526 |  176.9017 |   238.9036 |     233.5595 |
|                  Clock [MHz] STAT                 | 23937.8971 | 1493.6315 |  1500.1187 |    1496.1186 |
|                      CPI STAT                     |    87.4987 |    4.3776 |     5.6814 |       5.4687 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   | 48284.2319 |         0 | 48284.2319 |    3017.7645 |
|    MCDRAM Memory read data volume [GBytes] STAT   |   687.0146 |         0 |   687.0146 |      42.9384 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |   -17.4273 |  -17.4273 |          0 |      -1.0892 |
| MCDRAM Memory writeback data volume [GBytes] STAT |    -0.2480 |   -0.2480 |          0 |      -0.0155 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      | 48266.8046 |         0 | 48266.8046 |    3016.6753 |
|      MCDRAM Memory data volume [GBytes] STAT      |   686.7666 |         0 |   686.7666 |      42.9229 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |    72.5744 |         0 |    72.5744 |       4.5359 |
|     DDR Memory read data volume [GBytes] STAT     |     1.0326 |         0 |     1.0326 |       0.0645 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |     0.0057 |         0 |     0.0057 |       0.0004 |
|   DDR Memory writeback data volume [GBytes] STAT  |     0.0001 |         0 |     0.0001 | 6.250000e-06 |
|        DDR Memory bandwidth [MBytes/s] STAT       |    72.5800 |         0 |    72.5800 |       4.5362 |
|        DDR Memory data volume [GBytes] STAT       |     1.0327 |         0 |     1.0327 |       0.0645 |
+---------------------------------------------------+------------+-----------+------------+--------------+

srun -n 1 likwid-perfctr -m -g HBM_CACHE -C N:0-63 ./benchmark-basic-omp -N 2048
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
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 4.1118 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: HBM_CACHE
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   3.837940 |   3.845152 |   3.858999 |   3.859577 |   3.857987 |   3.857134 |   3.856016 |   3.857505 |   3.849373 |   3.860702 |    3.860159 |    3.859885 |    3.858608 |    3.858281 |    3.857702 |    3.843018 |    3.842704 |    3.844398 |    3.854382 |    3.854723 |    3.860367 |    3.843892 |    3.842196 |    3.841783 |    3.845504 |    3.844742 |    3.854997 |    3.855292 |    3.849711 |    3.848978 |    3.855657 |    3.856867 |    3.845922 |    3.846306 |    3.853050 |    3.853360 |    3.848258 |    3.847527 |    3.847117 |    3.846750 |    3.850517 |    3.851955 |    3.851611 |    3.851278 |    3.848561 |    3.852300 |    3.852718 |    3.850098 |    3.856228 |    3.853985 |    3.840945 |    3.843557 |    3.841389 |    3.840048 |    3.847829 |    3.837570 |    3.839561 |    3.859286 |    3.840384 |    3.856535 |    3.838614 |    3.838132 |    3.850876 |    3.853680 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+-----------------------+----------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|         Event         |  Counter |  HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+-----------------------+----------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|   INSTR_RETIRED_ANY   |   FIXC0  | 45432690000 |  63761700000 |  58143500000 |  60592050000 |  61715470000 |  61777050000 |  56883110000 |  61843620000 |  60139870000 |  56302290000 |  58715300000 |  60502200000 |  62429020000 |  62417080000 |  61690970000 |  61535970000 |  60403300000 |  60615430000 |  61429180000 |  61853810000 |  60692280000 |  60238670000 |  62182600000 |  60400870000 |  60338880000 |  62228130000 |  61777380000 |  56402910000 |  62163390000 |  63780120000 |  63256190000 |  62318660000 |  63977530000 |  63860820000 |  63539110000 |  63030330000 |  58630250000 |  60572870000 |  62346890000 |  62625160000 |  62516260000 |  63021240000 |  61890280000 |  61760290000 |  63581410000 |  63252280000 |  56367210000 |  61844820000 |  61863000000 |  62083010000 |  53553620000 |  58166530000 |  54012080000 |  56244140000 |  60822340000 |  60569870000 |  58406810000 |  59032520000 |  59828040000 |  59898490000 |  59224410000 |  59164940000 |  58936520000 |  60639600000 |
| CPU_CLK_UNHALTED_CORE |   FIXC1  | 96890370000 | 365730800000 | 370084100000 | 368950100000 | 361954600000 | 362444000000 | 369437600000 | 368304000000 | 370361200000 | 365412700000 | 371328100000 | 369603600000 | 366608500000 | 368053600000 | 361703400000 | 366087200000 | 366788100000 | 368589200000 | 362695700000 | 362612000000 | 360574600000 | 362940900000 | 369182100000 | 362880000000 | 363264300000 | 370321900000 | 362818700000 | 368271800000 | 363122900000 | 369256200000 | 368951600000 | 368777100000 | 369520600000 | 369560600000 | 369063500000 | 368946700000 | 367721600000 | 363415700000 | 370054700000 | 365618400000 | 365180800000 | 368572700000 | 362489800000 | 362358500000 | 369040600000 | 368921700000 | 363939600000 | 362897000000 | 362128400000 | 362608000000 | 364796600000 | 363707000000 | 370778100000 | 370151700000 | 369614400000 | 369510600000 | 363827200000 | 365575100000 | 363931800000 | 364068700000 | 365603200000 | 365792600000 | 372003600000 | 377934600000 |
|  CPU_CLK_UNHALTED_REF |   FIXC2  | 90477130000 | 343753900000 | 350103100000 | 349210900000 | 343330500000 | 343603800000 | 349331600000 | 348178500000 | 348657300000 | 343853800000 | 348767100000 | 347180700000 | 347126000000 | 348326200000 | 343296300000 | 345580100000 | 346199300000 | 347439500000 | 343600300000 | 343566800000 | 342898800000 | 343036300000 | 347678300000 | 342884600000 | 343493200000 | 348683900000 | 343740600000 | 348387000000 | 343604000000 | 348141200000 | 348341900000 | 348454800000 | 348233100000 | 348331200000 | 348259600000 | 348302900000 | 347485100000 | 343825400000 | 348897400000 | 345385400000 | 345288800000 | 347998400000 | 343307800000 | 343145000000 | 348143700000 | 348269800000 | 344927200000 | 343495300000 | 343332300000 | 343536500000 | 344828900000 | 343736800000 | 349446600000 | 348758600000 | 348552500000 | 347913100000 | 343657900000 | 343816300000 | 343727200000 | 344998600000 | 345026200000 | 345190500000 | 350464600000 | 354364300000 |
|    EDC_RPQ_INSERTS    | EDBOX0C0 |  1322588000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX1C0 |  1324103000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX2C0 |  1322532000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX3C0 |  1323936000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX4C0 |  1322532000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX5C0 |  1324067000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX6C0 |  1322581000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_RPQ_INSERTS    | EDBOX7C0 |  1323996000 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX0C1 |     1301857 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX1C1 |     1320497 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX2C1 |     1299443 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX3C1 |     1312673 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX4C1 |     1310969 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX5C1 |     1344810 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX6C1 |     1303783 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|    EDC_WPQ_INSERTS    | EDBOX7C1 |     1334650 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX0C0 |          40 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX1C0 |          24 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX2C0 |          28 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX3C0 |          28 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX4C0 |          38 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX5C0 |          26 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX6C0 |          44 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_CLEAN    | EUBOX7C0 |          26 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX0C1 |          71 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX1C1 |          76 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX2C1 |          70 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX3C1 |          77 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX4C1 |          68 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX5C1 |          59 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX6C1 |          64 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     EDC_MISS_DIRTY    | EUBOX7C1 |          63 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX0C0 |      748753 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX0C1 |          93 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX1C0 |      748731 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX1C1 |         104 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX2C0 |      748739 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX2C1 |          82 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX4C0 |      748741 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX4C1 |         107 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX5C0 |      748728 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX5C1 |          94 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|      MC_CAS_READS     |  MBOX6C0 |      748745 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
|     MC_CAS_WRITES     |  MBOX6C1 |          79 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |            0 |
+-----------------------+----------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+----------------------------+----------+----------------+-------------+--------------+--------------+
|            Event           |  Counter |       Sum      |     Min     |      Max     |      Avg     |
+----------------------------+----------+----------------+-------------+--------------+--------------+
|   INSTR_RETIRED_ANY STAT   |   FIXC0  |  3869226360000 | 45432690000 |  63977530000 |  60456661875 |
| CPU_CLK_UNHALTED_CORE STAT |   FIXC1  | 23193335070000 | 96890370000 | 377934600000 | 3.623959e+11 |
|  CPU_CLK_UNHALTED_REF STAT |   FIXC2  | 21905574430000 | 90477130000 | 354364300000 | 3.422746e+11 |
|    EDC_RPQ_INSERTS STAT    | EDBOX0C0 |     1322588000 |           0 |   1322588000 | 2.066544e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX1C0 |     1324103000 |           0 |   1324103000 | 2.068911e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX2C0 |     1322532000 |           0 |   1322532000 | 2.066456e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX3C0 |     1323936000 |           0 |   1323936000 |     20686500 |
|    EDC_RPQ_INSERTS STAT    | EDBOX4C0 |     1322532000 |           0 |   1322532000 | 2.066456e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX5C0 |     1324067000 |           0 |   1324067000 | 2.068855e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX6C0 |     1322581000 |           0 |   1322581000 | 2.066533e+07 |
|    EDC_RPQ_INSERTS STAT    | EDBOX7C0 |     1323996000 |           0 |   1323996000 | 2.068744e+07 |
|    EDC_WPQ_INSERTS STAT    | EDBOX0C1 |        1301857 |           0 |      1301857 |   20341.5156 |
|    EDC_WPQ_INSERTS STAT    | EDBOX1C1 |        1320497 |           0 |      1320497 |   20632.7656 |
|    EDC_WPQ_INSERTS STAT    | EDBOX2C1 |        1299443 |           0 |      1299443 |   20303.7969 |
|    EDC_WPQ_INSERTS STAT    | EDBOX3C1 |        1312673 |           0 |      1312673 |   20510.5156 |
|    EDC_WPQ_INSERTS STAT    | EDBOX4C1 |        1310969 |           0 |      1310969 |   20483.8906 |
|    EDC_WPQ_INSERTS STAT    | EDBOX5C1 |        1344810 |           0 |      1344810 |   21012.6562 |
|    EDC_WPQ_INSERTS STAT    | EDBOX6C1 |        1303783 |           0 |      1303783 |   20371.6094 |
|    EDC_WPQ_INSERTS STAT    | EDBOX7C1 |        1334650 |           0 |      1334650 |   20853.9062 |
|     EDC_MISS_CLEAN STAT    | EUBOX0C0 |             40 |           0 |           40 |       0.6250 |
|     EDC_MISS_CLEAN STAT    | EUBOX1C0 |             24 |           0 |           24 |       0.3750 |
|     EDC_MISS_CLEAN STAT    | EUBOX2C0 |             28 |           0 |           28 |       0.4375 |
|     EDC_MISS_CLEAN STAT    | EUBOX3C0 |             28 |           0 |           28 |       0.4375 |
|     EDC_MISS_CLEAN STAT    | EUBOX4C0 |             38 |           0 |           38 |       0.5938 |
|     EDC_MISS_CLEAN STAT    | EUBOX5C0 |             26 |           0 |           26 |       0.4062 |
|     EDC_MISS_CLEAN STAT    | EUBOX6C0 |             44 |           0 |           44 |       0.6875 |
|     EDC_MISS_CLEAN STAT    | EUBOX7C0 |             26 |           0 |           26 |       0.4062 |
|     EDC_MISS_DIRTY STAT    | EUBOX0C1 |             71 |           0 |           71 |       1.1094 |
|     EDC_MISS_DIRTY STAT    | EUBOX1C1 |             76 |           0 |           76 |       1.1875 |
|     EDC_MISS_DIRTY STAT    | EUBOX2C1 |             70 |           0 |           70 |       1.0938 |
|     EDC_MISS_DIRTY STAT    | EUBOX3C1 |             77 |           0 |           77 |       1.2031 |
|     EDC_MISS_DIRTY STAT    | EUBOX4C1 |             68 |           0 |           68 |       1.0625 |
|     EDC_MISS_DIRTY STAT    | EUBOX5C1 |             59 |           0 |           59 |       0.9219 |
|     EDC_MISS_DIRTY STAT    | EUBOX6C1 |             64 |           0 |           64 |            1 |
|     EDC_MISS_DIRTY STAT    | EUBOX7C1 |             63 |           0 |           63 |       0.9844 |
|      MC_CAS_READS STAT     |  MBOX0C0 |         748753 |           0 |       748753 |   11699.2656 |
|     MC_CAS_WRITES STAT     |  MBOX0C1 |             93 |           0 |           93 |       1.4531 |
|      MC_CAS_READS STAT     |  MBOX1C0 |         748731 |           0 |       748731 |   11698.9219 |
|     MC_CAS_WRITES STAT     |  MBOX1C1 |            104 |           0 |          104 |       1.6250 |
|      MC_CAS_READS STAT     |  MBOX2C0 |         748739 |           0 |       748739 |   11699.0469 |
|     MC_CAS_WRITES STAT     |  MBOX2C1 |             82 |           0 |           82 |       1.2812 |
|      MC_CAS_READS STAT     |  MBOX4C0 |         748741 |           0 |       748741 |   11699.0781 |
|     MC_CAS_WRITES STAT     |  MBOX4C1 |            107 |           0 |          107 |       1.6719 |
|      MC_CAS_READS STAT     |  MBOX5C0 |         748728 |           0 |       748728 |   11698.8750 |
|     MC_CAS_WRITES STAT     |  MBOX5C1 |             94 |           0 |           94 |       1.4688 |
|      MC_CAS_READS STAT     |  MBOX6C0 |         748745 |           0 |       748745 |   11699.1406 |
|     MC_CAS_WRITES STAT     |  MBOX6C1 |             79 |           0 |           79 |       1.2344 |
+----------------------------+----------+----------------+-------------+--------------+--------------+

+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|                    Metric                    |  HWThread 0  | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|              Runtime (RDTSC) [s]             |       3.8379 |     3.8452 |     3.8590 |     3.8596 |     3.8580 |     3.8571 |     3.8560 |     3.8575 |     3.8494 |     3.8607 |      3.8602 |      3.8599 |      3.8586 |      3.8583 |      3.8577 |      3.8430 |      3.8427 |      3.8444 |      3.8544 |      3.8547 |      3.8604 |      3.8439 |      3.8422 |      3.8418 |      3.8455 |      3.8447 |      3.8550 |      3.8553 |      3.8497 |      3.8490 |      3.8557 |      3.8569 |      3.8459 |      3.8463 |      3.8531 |      3.8534 |      3.8483 |      3.8475 |      3.8471 |      3.8468 |      3.8505 |      3.8520 |      3.8516 |      3.8513 |      3.8486 |      3.8523 |      3.8527 |      3.8501 |      3.8562 |      3.8540 |      3.8409 |      3.8436 |      3.8414 |      3.8400 |      3.8478 |      3.8376 |      3.8396 |      3.8593 |      3.8404 |      3.8565 |      3.8386 |      3.8381 |      3.8509 |      3.8537 |
|             Runtime unhalted [s]             |      69.2075 |   261.2368 |   264.3463 |   263.5363 |   258.5395 |   258.8890 |   263.8845 |   263.0748 |   264.5442 |   261.0095 |    265.2348 |    264.0030 |    261.8637 |    262.8959 |    258.3600 |    261.4913 |    261.9920 |    263.2785 |    259.0688 |    259.0090 |    257.5537 |    259.2440 |    263.7020 |    259.2005 |    259.4750 |    264.5161 |    259.1567 |    263.0518 |    259.3740 |    263.7549 |    263.5373 |    263.4127 |    263.9438 |    263.9723 |    263.6173 |    263.5338 |    262.6588 |    259.5831 |    264.3253 |    261.1565 |    260.8439 |    263.2667 |    258.9218 |    258.8280 |    263.6009 |    263.5160 |    259.9573 |    259.2126 |    258.6636 |    259.0062 |    260.5695 |    259.7912 |    264.8420 |    264.3945 |    264.0108 |    263.9366 |    259.8770 |    261.1255 |    259.9518 |    260.0495 |    261.1456 |    261.2809 |    265.7173 |    269.9538 |
|                  Clock [MHz]                 |    1499.2327 |  1489.5022 |  1479.8978 |  1479.1326 |  1475.9409 |  1476.7610 |  1480.5752 |  1480.9205 |  1487.1473 |  1487.7743 |   1490.5603 |   1490.4173 |   1478.5726 |   1479.2861 |   1475.0635 |   1483.0749 |   1483.2567 |   1485.2196 |   1477.8016 |   1477.6046 |   1472.1648 |   1481.2320 |   1486.5869 |   1481.6387 |   1480.5798 |   1486.8760 |   1477.6994 |   1479.9048 |   1479.5263 |   1484.9083 |   1482.8285 |   1481.6470 |   1485.5794 |   1485.3218 |   1483.6288 |   1482.9749 |   1481.5292 |   1479.7658 |   1484.8940 |   1482.0106 |   1480.6510 |   1482.7679 |   1478.2210 |   1478.3867 |   1484.0306 |   1483.0153 |   1477.1654 |   1479.0738 |   1476.6419 |   1477.7186 |   1481.0659 |   1481.3336 |   1485.4585 |   1485.8743 |   1484.5948 |   1486.9055 |   1482.1634 |   1488.5979 |   1482.2906 |   1477.3836 |   1483.4919 |   1483.5539 |   1486.0391 |   1493.1174 |
|                      CPI                     |       2.1326 |     5.7359 |     6.3650 |     6.0891 |     5.8649 |     5.8670 |     6.4947 |     5.9554 |     6.1583 |     6.4902 |      6.3242 |      6.1089 |      5.8724 |      5.8967 |      5.8631 |      5.9492 |      6.0723 |      6.0808 |      5.9043 |      5.8624 |      5.9410 |      6.0250 |      5.9371 |      6.0079 |      6.0204 |      5.9510 |      5.8730 |      6.5293 |      5.8414 |      5.7895 |      5.8327 |      5.9176 |      5.7758 |      5.7870 |      5.8084 |      5.8535 |      6.2719 |      5.9996 |      5.9354 |      5.8382 |      5.8414 |      5.8484 |      5.8570 |      5.8672 |      5.8042 |      5.8325 |      6.4566 |      5.8679 |      5.8537 |      5.8407 |      6.8118 |      6.2529 |      6.8647 |      6.5812 |      6.0770 |      6.1006 |      6.2292 |      6.1928 |      6.0830 |      6.0781 |      6.1732 |      6.1826 |      6.3119 |      6.2325 |
|    MCDRAM Memory read bandwidth [MBytes/s]   |  176533.6062 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|    MCDRAM Memory read data volume [GBytes]   |     677.5254 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback bandwidth [MBytes/s] |     100.6581 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
| MCDRAM Memory writeback data volume [GBytes] |       0.3863 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory bandwidth [MBytes/s]      |  176634.2643 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|      MCDRAM Memory data volume [GBytes]      |     677.9117 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read bandwidth [MBytes/s]     |      74.9141 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|     DDR Memory read data volume [GBytes]     |       0.2875 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback bandwidth [MBytes/s]  |       0.0093 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|   DDR Memory writeback data volume [GBytes]  | 3.577600e-05 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory bandwidth [MBytes/s]       |      74.9235 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
|        DDR Memory data volume [GBytes]       |       0.2876 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |          0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |           0 |
+----------------------------------------------+--------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+---------------------------------------------------+--------------+-----------+--------------+--------------+
|                       Metric                      |      Sum     |    Min    |      Max     |      Avg     |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
|              Runtime (RDTSC) [s] STAT             |     246.4105 |    3.8376 |       3.8607 |       3.8502 |
|             Runtime unhalted [s] STAT             |   16566.6980 |   69.2075 |     269.9538 |     258.8547 |
|                  Clock [MHz] STAT                 |   94878.5813 | 1472.1648 |    1499.2327 |    1482.4778 |
|                      CPI STAT                     |     383.2642 |    2.1326 |       6.8647 |       5.9885 |
|    MCDRAM Memory read bandwidth [MBytes/s] STAT   |  176533.6062 |         0 |  176533.6062 |    2758.3376 |
|    MCDRAM Memory read data volume [GBytes] STAT   |     677.5254 |         0 |     677.5254 |      10.5863 |
| MCDRAM Memory writeback bandwidth [MBytes/s] STAT |     100.6581 |         0 |     100.6581 |       1.5728 |
| MCDRAM Memory writeback data volume [GBytes] STAT |       0.3863 |         0 |       0.3863 |       0.0060 |
|      MCDRAM Memory bandwidth [MBytes/s] STAT      |  176634.2643 |         0 |  176634.2643 |    2759.9104 |
|      MCDRAM Memory data volume [GBytes] STAT      |     677.9117 |         0 |     677.9117 |      10.5924 |
|     DDR Memory read bandwidth [MBytes/s] STAT     |      74.9141 |         0 |      74.9141 |       1.1705 |
|     DDR Memory read data volume [GBytes] STAT     |       0.2875 |         0 |       0.2875 |       0.0045 |
|   DDR Memory writeback bandwidth [MBytes/s] STAT  |       0.0093 |         0 |       0.0093 |       0.0001 |
|   DDR Memory writeback data volume [GBytes] STAT  | 3.577600e-05 |         0 | 3.577600e-05 | 5.590000e-07 |
|        DDR Memory bandwidth [MBytes/s] STAT       |      74.9235 |         0 |      74.9235 |       1.1707 |
|        DDR Memory data volume [GBytes] STAT       |       0.2876 |         0 |       0.2876 |       0.0045 |
+---------------------------------------------------+--------------+-----------+--------------+--------------+
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
 Elapsed time is : 0.0095 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   0.009114 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |   15000220 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |   13642690 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |   12733060 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |    4194353 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |        730 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     0.0091 |
|      Runtime unhalted [s]     |     0.0097 |
|          Clock [MHz]          |  1500.0117 |
|              CPI              |     0.9095 |
|   DP [MFLOP/s] (SSE assumed)  |   460.3831 |
|   DP [MFLOP/s] (AVX assumed)  |   460.5433 |
| DP [MFLOP/s] (AVX512 assumed) |   460.8637 |
|        Packed [MUOPS/s]       |     0.0801 |
|        Scalar [MUOPS/s]       |   460.2229 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-3 ./benchmark-basic-omp -N 128
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
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0043 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.002355 |   0.002373 |   0.002410 |   0.002404 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+------------+--------------+--------------+------------+
|           Event          | Counter | HWThread 0 |  HWThread 1  |  HWThread 2  | HWThread 3 |
+--------------------------+---------+------------+--------------+--------------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |    3811783 |    313444500 |    321486600 |  610911400 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |    3584084 | 1.844674e+19 | 1.844674e+19 |    2865344 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |    3345885 | 1.844674e+19 | 1.844674e+19 |   32574720 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |    1076659 |    113775200 |    118297300 |  209419300 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |      40479 | 1.844674e+19 |         3462 |       1704 |
+--------------------------+---------+------------+--------------+--------------+------------+

+-------------------------------+---------+--------------+---------+--------------+---------------------+
|             Event             | Counter |      Sum     |   Min   |      Max     |         Avg         |
+-------------------------------+---------+--------------+---------+--------------+---------------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |   1249654283 | 3811783 |    610911400 |        3.124136e+08 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 3.689348e+19 | 2865344 | 1.844674e+19 | 9223370000001612800 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 3.689348e+19 | 3345885 | 1.844674e+19 | 9223370000008980480 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |    442568459 | 1076659 |    209419300 |        1.106421e+08 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  | 1.844674e+19 |    1704 | 1.844674e+19 | 4611685000000011776 |
+-------------------------------+---------+--------------+---------+--------------+---------------------+

+-------------------------------+------------+-------------------+--------------+------------+
|             Metric            | HWThread 0 |     HWThread 1    |  HWThread 2  | HWThread 3 |
+-------------------------------+------------+-------------------+--------------+------------+
|      Runtime (RDTSC) [s]      |     0.0024 |            0.0024 |       0.0024 |     0.0024 |
|      Runtime unhalted [s]     |     0.0026 |      1.317630e+10 | 1.317630e+10 |     0.0020 |
|          Clock [MHz]          |  1499.6620 |         1399.9941 |    1399.9941 |   123.1466 |
|              CPI              |     0.9403 |      5.885169e+10 | 5.737950e+10 |     0.0047 |
|   DP [MFLOP/s] (SSE assumed)  |   491.4766 | 15548394818693812 |   49080.8045 | 87122.7153 |
|   DP [MFLOP/s] (AVX assumed)  |   525.8480 | 31096789637339680 |   49083.6771 | 87124.1331 |
| DP [MFLOP/s] (AVX512 assumed) |   594.5909 | 62193579274631392 |   49089.4222 | 87126.9686 |
|        Packed [MUOPS/s]       |    17.1857 |  7774197409322932 |       1.4363 |     0.7089 |
|        Scalar [MUOPS/s]       |   457.1051 |        47949.4407 |   49077.9320 | 87121.2975 |
+-------------------------------+------------+-------------------+--------------+------------+

+------------------------------------+-------------------+----------+-------------------+-------------------+
|               Metric               |        Sum        |    Min   |        Max        |        Avg        |
+------------------------------------+-------------------+----------+-------------------+-------------------+
|      Runtime (RDTSC) [s] STAT      |            0.0096 |   0.0024 |            0.0024 |            0.0024 |
|      Runtime unhalted [s] STAT     |      2.635260e+10 |   0.0020 |       13176300000 |      6.588150e+09 |
|          Clock [MHz] STAT          |         4422.7968 | 123.1466 |         1499.6620 |         1105.6992 |
|              CPI STAT              |      1.162312e+11 |   0.0047 |       58851690000 |      2.905780e+10 |
|   DP [MFLOP/s] (SSE assumed) STAT  | 15548394818830506 | 491.4766 | 15548394818693812 |      3.887099e+15 |
|   DP [MFLOP/s] (AVX assumed) STAT  | 31096789637476412 | 525.8480 | 31096789637339680 |  7774197409369103 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 62193579274768200 | 594.5909 | 62193579274631392 | 15548394818692050 |
|        Packed [MUOPS/s] STAT       |  7774197409322951 |   0.7089 |  7774197409322932 |      1.943549e+15 |
|        Scalar [MUOPS/s] STAT       |       184605.7753 | 457.1051 |        87121.2975 |        46151.4438 |
+------------------------------------+-------------------+----------+-------------------+-------------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 128
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.0214 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.001196 |   0.001272 |   0.001043 |   0.001348 |   0.001555 |   0.001758 |   0.001484 |   0.000578 |   0.000891 |   0.000966 |    0.001418 |    0.000813 |    0.001119 |    0.001633 |    0.000736 |    0.000659 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|           Event          | Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |   30615900 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  |   44783800 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  |   28461240 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |     286902 |     57846110 |     73552670 |     72152730 |     73961440 |     75974150 |     71008270 |     73657530 |     75396770 |     73463210 |     71931080 |     74923760 |     74507610 |     74008270 |     76960060 |     95642270 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |     397458 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |        36824 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+--------------+----------+--------------+--------------+
|             Event             | Counter |      Sum     |    Min   |      Max     |      Avg     |
+-------------------------------+---------+--------------+----------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  | 2.767011e+20 | 30615900 | 1.844674e+19 | 1.729382e+19 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 2.767011e+20 | 44783800 | 1.844674e+19 | 1.729382e+19 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 2.767011e+20 | 28461240 | 1.844674e+19 | 1.729382e+19 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |   1115272832 |   286902 |     95642270 |     69704552 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  | 2.582544e+20 |    36824 | 1.844674e+19 | 1.614090e+19 |
+-------------------------------+---------+--------------+----------+--------------+--------------+

+-------------------------------+------------+--------------------+--------------------+--------------------+-------------------+--------------+-------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+-------------------+--------------------+--------------------+
|             Metric            | HWThread 0 |     HWThread 1     |     HWThread 2     |     HWThread 3     |     HWThread 4    |  HWThread 5  |     HWThread 6    |     HWThread 7     |     HWThread 8     |     HWThread 9     |     HWThread 10    |     HWThread 11    |     HWThread 12    |    HWThread 13    |     HWThread 14    |     HWThread 15    |
+-------------------------------+------------+--------------------+--------------------+--------------------+-------------------+--------------+-------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+-------------------+--------------------+--------------------+
|      Runtime (RDTSC) [s]      |     0.0012 |             0.0013 |             0.0010 |             0.0013 |            0.0016 |       0.0018 |            0.0015 |             0.0006 |             0.0009 |             0.0010 |             0.0014 |             0.0008 |             0.0011 |            0.0016 |             0.0007 |             0.0007 |
|      Runtime unhalted [s]     |     0.0320 |       1.317629e+10 |       1.317629e+10 |       1.317629e+10 |      1.317629e+10 | 1.317629e+10 |      1.317629e+10 |       1.317629e+10 |       1.317629e+10 |       1.317629e+10 |       1.317629e+10 |       1.317629e+10 |       1.317629e+10 |      1.317629e+10 |       1.317629e+10 |       1.317629e+10 |
|          Clock [MHz]          |  2202.8946 |          1399.9953 |          1399.9953 |          1399.9953 |         1399.9953 |    1399.9953 |         1399.9953 |          1399.9953 |          1399.9953 |          1399.9953 |          1399.9953 |          1399.9953 |          1399.9953 |         1399.9953 |          1399.9953 |          1399.9953 |
|              CPI              |     1.4628 |                  1 |                  1 |                  1 |                 1 |            1 |                 1 |                  1 |                  1 |                  1 |                  1 |                  1 |                  1 |                 1 |                  1 |                  1 |
|   DP [MFLOP/s] (SSE assumed)  |   904.6178 |  29003076913446952 |  35368971233016820 |  27370999715166768 | 23732196902738020 |   43257.4933 | 24855057281205520 |  63875766168659840 |  41392292358053640 |  38187537256324816 |  26013841245269212 |  45358646209713632 |  32981421652218288 | 22599305974605900 |  50135709687777296 |  55992354554789920 |
|   DP [MFLOP/s] (AVX assumed)  |  1569.3278 |  58006153826848424 |  70737942465963128 |  54741999430280016 | 47464393805428464 |   43299.3858 | 49710114562363200 | 127751532337192160 |  82784584716022704 |  76375074512573600 |  52027682490487712 |  90717292419335152 |  65962843304369960 | 45198611949166464 | 100271419375450000 | 111984709109434688 |
| DP [MFLOP/s] (AVX512 assumed) |  2898.7477 | 116012307653651376 | 141475884931855744 | 109483998860506496 | 94928787610809344 |   43383.1707 | 99420229124678560 | 255503064674256800 | 165569169431960832 | 152750149025071136 | 104055364980924688 | 181434584838578176 | 131925686608673328 | 90397223898287600 | 200542838750795392 | 223969418218724224 |
|        Packed [MUOPS/s]       |   332.3550 |  14501538456700738 |  17684485616473156 |  13685499857556620 | 11866098451345222 |      20.9462 | 12427528640578842 |  31937883084266156 |  20696146178984528 |  19093768628124388 |  13006920622609248 |  22679323104810760 |  16490710826075840 | 11299652987280284 |  25067854843836356 |  27996177277322384 |
|        Scalar [MUOPS/s]       |   239.9079 |         45474.5710 |         70513.3338 |         53529.5763 |        47576.6303 |   43215.6009 |        47838.1171 |        127527.4429 |         84590.6959 |         76039.9688 |         50719.0890 |         92114.9299 |         66607.0780 |        45334.1766 |        104583.4447 |        145153.9918 |
+-------------------------------+------------+--------------------+--------------------+--------------------+-------------------+--------------+-------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+-------------------+--------------------+--------------------+

+------------------------------------+---------------------+-----------+--------------------+--------------------+
|               Metric               |         Sum         |    Min    |         Max        |         Avg        |
+------------------------------------+---------------------+-----------+--------------------+--------------------+
|      Runtime (RDTSC) [s] STAT      |              0.0185 |    0.0006 |             0.0018 |             0.0012 |
|      Runtime unhalted [s] STAT     |        1.976444e+11 |    0.0320 |        13176290000 |       1.235277e+10 |
|          Clock [MHz] STAT          |          23202.8241 | 1399.9953 |          2202.8946 |          1450.1765 |
|              CPI STAT              |             16.4628 |         1 |             1.4628 |             1.0289 |
|   DP [MFLOP/s] (SSE assumed) STAT  |  516867177153030656 |  904.6178 |  63875766168659840 |  32304198572064416 |
|   DP [MFLOP/s] (AVX assumed) STAT  | 1033734354304960512 | 1569.3278 | 127751532337192160 |  64608397144060032 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 2067468708608820224 | 2898.7477 | 255503064674256800 | 129216794288051264 |
|        Packed [MUOPS/s] STAT       |  258433588575964864 |   20.9462 |  31937883084266156 |  16152099285997804 |
|        Scalar [MUOPS/s] STAT       |        1.101059e+06 |  239.9079 |        145153.9918 |         68816.1597 |
+------------------------------------+---------------------+-----------+--------------------+--------------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 128
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
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=128 
 Elapsed time is : 0.7575 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.108951 |   0.016746 |   0.012402 |   0.051501 |   0.049339 |   0.067211 |   0.064704 |   0.065957 |   0.094447 |   0.093457 |    0.053658 |    0.045671 |    0.032376 |    0.027032 |    0.021146 |    0.019044 |    0.025041 |    0.048139 |    0.005032 |    0.118986 |    0.103575 |    0.115740 |    0.110042 |    0.112189 |    0.108334 |    0.106628 |    0.105359 |    0.002686 |    0.104602 |    0.023037 |    0.037299 |    0.040226 |    0.028998 |    0.030732 |    0.072629 |    0.050485 |    0.007622 |    0.014715 |    0.074387 |    0.054629 |    0.035696 |    0.034051 |    0.038796 |    0.046937 |    0.056584 |    0.055623 |    0.066626 |    0.052597 |    0.041605 |    0.042978 |    0.092347 |    0.102152 |    0.069963 |    0.071189 |    0.092913 |    0.089535 |    0.091409 |    0.090512 |    0.059237 |    0.060906 |    0.044335 |    0.068579 |    0.000294 |    0.010000 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|           Event          | Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  | 2100446000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 2797668000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 2668296000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |    334868900 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |     277610 |      9645760 |     10697690 |     10540580 |     10459600 |     11014120 |     10957260 |     10676410 |     11451740 |     11213400 |     10756090 |     10441600 |     10283110 |     10568620 |     10325070 |     10602330 |     10379400 |     10724310 |     10277350 |     10419730 |     10415600 |     10698720 |     10328180 |     10291260 |     10387210 |     10386700 |     10828030 |     10296310 |     10386310 |     10469630 |     10448370 |     10534900 |      9953668 |     10303510 |     10687560 |     10438010 |     10027270 |     10108260 |     10672280 |     10626660 |     10155110 |     10046960 |     10230440 |     10476940 |     10470760 |     10624440 |     10769660 |     11132910 |     10627460 |     11011340 |     11664050 |     10578280 |     10846960 |     10753150 |     10965010 |     11388720 |     11221150 |     11389750 |     10872510 |     10920640 |     10619520 |     10754080 |     10500560 |     11121450 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |   39991410 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |        45298 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+--------------+------------+--------------+--------------+
|             Event             | Counter |      Sum     |     Min    |      Max     |      Avg     |
+-------------------------------+---------+--------------+------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  | 1.162145e+21 | 2100446000 | 1.844674e+19 | 1.815851e+19 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 1.162145e+21 | 2797668000 | 1.844674e+19 | 1.815851e+19 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 1.143698e+21 |  334868900 | 1.844674e+19 | 1.787028e+19 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |    669142068 |     277610 |     11664050 | 1.045534e+07 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  | 1.143698e+21 |      45298 | 1.844674e+19 | 1.787028e+19 |
+-------------------------------+---------+--------------+------------+--------------+--------------+

+-------------------------------+------------+------------------+-------------------+--------------+------------------+--------------+--------------+--------------+------------------+------------------+--------------+--------------+------------------+------------------+------------------+------------------+------------------+------------------+-------------------+--------------+------------------+-----------------+--------------+--------------+------------------+-----------------+--------------+-------------------+--------------+------------------+------------------+------------------+------------------+------------------+------------------+------------------+-------------------+-------------------+--------------+------------------+------------------+-----------------+------------------+--------------+------------------+------------------+--------------+------------------+------------------+------------------+--------------+-----------------+--------------+--------------+--------------+------------------+--------------+--------------+-----------------+--------------+--------------+------------------+--------------------+-------------------+
|             Metric            | HWThread 0 |    HWThread 1    |     HWThread 2    |  HWThread 3  |    HWThread 4    |  HWThread 5  |  HWThread 6  |  HWThread 7  |    HWThread 8    |    HWThread 9    |  HWThread 10 |  HWThread 11 |    HWThread 12   |    HWThread 13   |    HWThread 14   |    HWThread 15   |    HWThread 16   |    HWThread 17   |    HWThread 18    |  HWThread 19 |    HWThread 20   |   HWThread 21   |  HWThread 22 |  HWThread 23 |    HWThread 24   |   HWThread 25   |  HWThread 26 |    HWThread 27    |  HWThread 28 |    HWThread 29   |    HWThread 30   |    HWThread 31   |    HWThread 32   |    HWThread 33   |    HWThread 34   |    HWThread 35   |    HWThread 36    |    HWThread 37    |  HWThread 38 |    HWThread 39   |    HWThread 40   |   HWThread 41   |    HWThread 42   |  HWThread 43 |    HWThread 44   |    HWThread 45   |  HWThread 46 |    HWThread 47   |    HWThread 48   |    HWThread 49   |  HWThread 50 |   HWThread 51   |  HWThread 52 |  HWThread 53 |  HWThread 54 |    HWThread 55   |  HWThread 56 |  HWThread 57 |   HWThread 58   |  HWThread 59 |  HWThread 60 |    HWThread 61   |     HWThread 62    |    HWThread 63    |
+-------------------------------+------------+------------------+-------------------+--------------+------------------+--------------+--------------+--------------+------------------+------------------+--------------+--------------+------------------+------------------+------------------+------------------+------------------+------------------+-------------------+--------------+------------------+-----------------+--------------+--------------+------------------+-----------------+--------------+-------------------+--------------+------------------+------------------+------------------+------------------+------------------+------------------+------------------+-------------------+-------------------+--------------+------------------+------------------+-----------------+------------------+--------------+------------------+------------------+--------------+------------------+------------------+------------------+--------------+-----------------+--------------+--------------+--------------+------------------+--------------+--------------+-----------------+--------------+--------------+------------------+--------------------+-------------------+
|      Runtime (RDTSC) [s]      |     0.1090 |           0.0167 |            0.0124 |       0.0515 |           0.0493 |       0.0672 |       0.0647 |       0.0660 |           0.0944 |           0.0935 |       0.0537 |       0.0457 |           0.0324 |           0.0270 |           0.0211 |           0.0190 |           0.0250 |           0.0481 |            0.0050 |       0.1190 |           0.1036 |          0.1157 |       0.1100 |       0.1122 |           0.1083 |          0.1066 |       0.1054 |            0.0027 |       0.1046 |           0.0230 |           0.0373 |           0.0402 |           0.0290 |           0.0307 |           0.0726 |           0.0505 |            0.0076 |            0.0147 |       0.0744 |           0.0546 |           0.0357 |          0.0341 |           0.0388 |       0.0469 |           0.0566 |           0.0556 |       0.0666 |           0.0526 |           0.0416 |           0.0430 |       0.0923 |          0.1022 |       0.0700 |       0.0712 |       0.0929 |           0.0895 |       0.0914 |       0.0905 |          0.0592 |       0.0609 |       0.0443 |           0.0686 |             0.0003 |            0.0100 |
|      Runtime unhalted [s]     |     1.9983 |     1.317633e+10 |      1.317633e+10 | 1.317633e+10 |     1.317633e+10 | 1.317633e+10 | 1.317633e+10 | 1.317633e+10 |     1.317633e+10 |     1.317633e+10 | 1.317633e+10 | 1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |      1.317633e+10 | 1.317633e+10 |     1.317633e+10 |    1.317633e+10 | 1.317633e+10 | 1.317633e+10 |     1.317633e+10 |    1.317633e+10 | 1.317633e+10 |      1.317633e+10 | 1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 |      1.317633e+10 |      1.317633e+10 | 1.317633e+10 |     1.317633e+10 |     1.317633e+10 |    1.317633e+10 |     1.317633e+10 | 1.317633e+10 |     1.317633e+10 |     1.317633e+10 | 1.317633e+10 |     1.317633e+10 |     1.317633e+10 |     1.317633e+10 | 1.317633e+10 |    1.317633e+10 | 1.317633e+10 | 1.317633e+10 | 1.317633e+10 |     1.317633e+10 | 1.317633e+10 | 1.317633e+10 |    1.317633e+10 | 1.317633e+10 | 1.317633e+10 |     1.317633e+10 |       1.317633e+10 |      1.317633e+10 |
|          Clock [MHz]          |  1467.8688 |        1399.9904 |         1399.9904 |    1399.9904 |        1399.9904 |    1399.9904 |    1399.9904 |    1399.9904 |        1399.9904 |        1399.9904 |    1399.9904 |    1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |         1399.9904 |    1399.9904 |        1399.9904 |       1399.9904 |    1399.9904 |    1399.9904 |        1399.9904 |       1399.9904 |    1399.9904 |         1399.9904 |    1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |         1399.9904 |         1399.9904 |    1399.9904 |        1399.9904 |        1399.9904 |       1399.9904 |        1399.9904 |    1399.9904 |        1399.9904 |        1399.9904 |    1399.9904 |        1399.9904 |        1399.9904 |        1399.9904 |    1399.9904 |       1399.9904 |    1399.9904 |    1399.9904 |    1399.9904 |        1399.9904 |    1399.9904 |    1399.9904 |       1399.9904 |    1399.9904 |    1399.9904 |        1399.9904 |          1399.9904 |        nil        |
|              CPI              |     1.3319 |                1 |                 1 |            1 |                1 |            1 |            1 |            1 |                1 |                1 |            1 |            1 |                1 |                1 |                1 |                1 |                1 |                1 |                 1 |            1 |                1 |               1 |            1 |            1 |                1 |               1 |            1 |                 1 |            1 |                1 |                1 |                1 |                1 |                1 |                1 |                1 |                 1 |                 1 |            1 |                1 |                1 |               1 |                1 |            1 |                1 |                1 |            1 |                1 |                1 |                1 |            1 |               1 |            1 |            1 |            1 |                1 |            1 |            1 |               1 |            1 |            1 |                1 |                  1 |                 1 |
|   DP [MFLOP/s] (SSE assumed)  |   736.6681 |     2.203175e+15 |      2.974815e+15 | 7.163691e+14 |     7.477625e+14 | 5.489240e+14 | 5.701910e+14 | 5.593587e+14 |     3.906252e+14 |  394762702477485 | 6.875621e+14 | 8.078144e+14 |     1.139533e+15 |     1.364823e+15 |     1.744675e+15 | 1937308335364310 | 1473305887995801 |     7.663996e+14 |  7331316633128796 |      88.3322 |     3.561993e+14 | 318761707275019 | 3.352679e+14 | 3.288517e+14 |     3.405522e+14 | 346001476158821 | 3.501686e+14 | 13733085126305402 | 3.527051e+14 |     1.601513e+15 |  989136609965193 |     9.171651e+14 |     1.272293e+15 |     1.200487e+15 |     5.079704e+14 |     7.307858e+14 |  4840507910185497 |  2507144245393590 | 4.959687e+14 |     6.753464e+14 |     1.033557e+15 |    1.083491e+15 |     9.509629e+14 | 7.860265e+14 |  652016731338077 |     6.632821e+14 | 5.537377e+14 |     7.014358e+14 |     8.867632e+14 |     8.584213e+14 | 3.995079e+14 |    3.611612e+14 | 5.273277e+14 | 5.182476e+14 | 3.970750e+14 |     4.120562e+14 | 4.036103e+14 | 4.076102e+14 | 622809631182767 | 6.057439e+14 | 8.321485e+14 |  537967456403604 | 125692898084260112 |  3689493366039734 |
|   DP [MFLOP/s] (AVX assumed)  |  1470.7881 |     4.406349e+15 |  5949630461041636 | 1.432738e+15 |     1.495525e+15 | 1.097848e+15 | 1.140382e+15 | 1.118717e+15 |     7.812503e+14 |     7.895254e+14 | 1.375124e+15 | 1.615629e+15 |     2.279066e+15 |     2.729646e+15 | 3489350634365883 |     3.874617e+15 | 2946611775991188 | 1532799182362854 | 14662633266255552 |      89.0936 |     7.123985e+14 |    6.375234e+14 | 6.705357e+14 | 6.577034e+14 |  681104322453834 |    6.920030e+14 | 7.003371e+14 | 27466170252606972 | 7.054102e+14 | 3203026135756363 |     1.978273e+15 | 1834330211935161 |     2.544587e+15 |     2.400974e+15 |     1.015941e+15 |     1.461572e+15 |  9681015820369680 |  5014288490786493 | 9.919374e+14 | 1350692864976415 |     2.067114e+15 |    2.166983e+15 |     1.901926e+15 | 1.572053e+15 | 1304033462675969 |     1.326564e+15 | 1.107475e+15 |     1.402872e+15 | 1773526330944914 |     1.716843e+15 | 7.990157e+14 | 722322334081339 | 1.054655e+15 | 1.036495e+15 | 7.941501e+14 |     8.241125e+14 | 8.072206e+14 | 8.152203e+14 |    1.245619e+15 | 1.211488e+15 | 1.664297e+15 | 1075934912807051 | 251385796168484448 |  7378986732078357 |
| DP [MFLOP/s] (AVX512 assumed) |  2939.0282 | 8812698261036312 | 11899260922082406 | 2.865476e+15 | 2991049991386249 | 2.195696e+15 | 2.280764e+15 | 2.237435e+15 | 1562500641892682 | 1579050809909580 | 2.750248e+15 | 3.231257e+15 | 4558131231280802 | 5459291128564262 | 6978701268731279 | 7749233341455569 | 5893223551981961 |     3.065598e+15 | 29325266532509064 |      90.6164 | 1424797007783802 |    1.275047e+15 | 1.341071e+15 | 1.315407e+15 | 1362208644907572 |    1.384006e+15 | 1.400674e+15 | 54932340505210104 | 1.410820e+15 | 6406052271512272 | 3956546439859932 | 3668660423870060 | 5089173525275866 | 4801947149723264 | 2031881671818324 | 2923143203669756 | 19362031640738044 | 10028576981572298 | 1.983875e+15 |     2.701386e+15 | 4134228157836928 |    4.333966e+15 | 3803851539028079 | 3.144106e+15 | 2608066925351753 | 2653128287220082 | 2.214951e+15 | 2805743055366963 |     3.547053e+15 | 3433685239687549 | 1.598031e+15 |    1.444645e+15 | 2.109311e+15 | 2.072990e+15 | 1.588300e+15 | 1648224952326065 | 1.614441e+15 | 1.630441e+15 |    2.491239e+15 | 2.422976e+15 | 3.328594e+15 |     2.151870e+15 | 502771592336933120 | 14757973464155602 |
|        Packed [MUOPS/s]       |   367.0600 |     1.101587e+15 |      1.487408e+15 | 3.581845e+14 |     3.738812e+14 | 2.744620e+14 | 2.850955e+14 | 2.796793e+14 |     1.953126e+14 |     1.973814e+14 | 3.437810e+14 | 4.039072e+14 |     5.697664e+14 |  682411391070484 |     8.723377e+14 |     9.686542e+14 |     7.366529e+14 |     3.831998e+14 |      3.665658e+15 |       0.3807 |     1.780996e+14 |    1.593809e+14 | 1.676339e+14 | 1.644259e+14 |     1.702761e+14 |    1.730007e+14 | 1.750843e+14 |  6866542563150785 | 1.763525e+14 |     8.007565e+14 |     4.945683e+14 |     4.585826e+14 |     6.361467e+14 |  600243393715366 |     2.539852e+14 |     3.653929e+14 |  2420253955092091 |      1.253572e+15 | 2.479844e+14 |     3.376732e+14 |     5.167785e+14 | 541745728042572 |     4.754814e+14 | 3.930132e+14 |  326008365668946 |     3.316410e+14 | 2.768689e+14 |     3.507179e+14 |     4.433816e+14 |     4.292107e+14 | 1.997539e+14 |    1.805806e+14 | 2.636638e+14 | 2.591238e+14 | 1.985375e+14 |     2.060281e+14 | 2.018051e+14 | 2.038051e+14 |    3.114048e+14 | 3.028719e+14 | 4.160743e+14 |     2.689837e+14 |  62846449042112176 |  1844746683019311 |
|        Scalar [MUOPS/s]       |     2.5480 |         576.0176 |          862.5820 |     204.6688 |         211.9967 |     163.8749 |     169.3451 |     161.8699 |         121.2501 |         119.9841 |     200.4549 |     228.6278 |         317.6155 |         390.9713 |         488.2677 |         556.7375 |         414.4914 |         222.7794 |         2042.2716 |      87.5708 |         100.5606 |         92.4375 |      93.8569 |      91.7316 |          95.8811 |         97.4105 |     102.7725 |         3832.6583 |      99.2941 |         454.4773 |         280.1271 |         261.8957 |         343.2581 |         335.2687 |         147.1524 |         206.7560 |         1315.6005 |          686.9199 |     143.4703 |         194.5243 |         284.4916 |        295.0601 |         263.6989 |     223.2143 |         185.0492 |         191.0094 |     161.6428 |         211.6640 |         255.4392 |         256.2070 |     126.3063 |        103.5539 |     155.0383 |     151.0509 |     118.0136 |         127.1984 |     122.7580 |     125.8374 |        183.5420 |     179.3030 |     239.5279 |         156.8121 |         35774.5005 |         1112.1888 |
+-------------------------------+------------+------------------+-------------------+--------------+------------------+--------------+--------------+--------------+------------------+------------------+--------------+--------------+------------------+------------------+------------------+------------------+------------------+------------------+-------------------+--------------+------------------+-----------------+--------------+--------------+------------------+-----------------+--------------+-------------------+--------------+------------------+------------------+------------------+------------------+------------------+------------------+------------------+-------------------+-------------------+--------------+------------------+------------------+-----------------+------------------+--------------+------------------+------------------+--------------+------------------+------------------+------------------+--------------+-----------------+--------------+--------------+--------------+------------------+--------------+--------------+-----------------+--------------+--------------+------------------+--------------------+-------------------+

+------------------------------------+--------------------+-----------+--------------------+-------------------+
|               Metric               |         Sum        |    Min    |         Max        |        Avg        |
+------------------------------------+--------------------+-----------+--------------------+-------------------+
|      Runtime (RDTSC) [s] STAT      |             3.7392 |    0.0003 |             0.1190 |            0.0584 |
|      Runtime unhalted [s] STAT     |         nil        |    1.9983 |        13176330000 |      1.297045e+10 |
|          Clock [MHz] STAT          |         88267.2736 | 1399.9904 |          1467.8688 |         1379.1761 |
|              CPI STAT              |            64.3319 |         1 |             1.3319 |            1.0052 |
|   DP [MFLOP/s] (SSE assumed) STAT  | 202135983703475040 |   88.3322 | 125692898084260112 |      3.158375e+15 |
|   DP [MFLOP/s] (AVX assumed) STAT  | 404271968959975680 |   89.0936 | 251385796168484448 |  6316749514999620 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 808543935104680704 |   90.6164 | 502771592336933120 | 12633498986010636 |
|        Packed [MUOPS/s] STAT       | 101067991321872096 |    0.3807 |  62846449042112176 |      1.579187e+15 |
|        Scalar [MUOPS/s] STAT       |         57523.0861 |    2.5480 |         35774.5005 |          898.7982 |
+------------------------------------+--------------------+-----------+--------------------+-------------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=512 
 Elapsed time is : 3.3828 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] |   3.382300 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+------------+
|           Event          | Counter | HWThread 0 |
+--------------------------+---------+------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |  944516100 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 5031900000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 4696441000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |  268436000 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |        730 |
+--------------------------+---------+------------+

+-------------------------------+------------+
|             Metric            | HWThread 0 |
+-------------------------------+------------+
|      Runtime (RDTSC) [s]      |     3.3823 |
|      Runtime unhalted [s]     |     3.5942 |
|          Clock [MHz]          |  1499.9853 |
|              CPI              |     5.3275 |
|   DP [MFLOP/s] (SSE assumed)  |    79.3654 |
|   DP [MFLOP/s] (AVX assumed)  |    79.3658 |
| DP [MFLOP/s] (AVX512 assumed) |    79.3667 |
|        Packed [MUOPS/s]       |     0.0002 |
|        Scalar [MUOPS/s]       |    79.3649 |
+-------------------------------+------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-3 ./benchmark-basic-omp -N 512
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
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.8558 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |   0.853622 |   0.853690 |   0.853647 |   0.853669 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+------------+--------------+--------------+--------------+
|           Event          | Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |
+--------------------------+---------+------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |  808478100 |    867821900 |    850061900 |    877508100 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 3128267000 |   5331997000 |   5232527000 |   5345630000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 2919721000 |   4998409000 |   4907185000 |   5030688000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |  149299600 |    380631800 |    380631900 |    383251400 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |    6751875 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+------------+--------------+--------------+--------------+

+-------------------------------+---------+--------------+------------+--------------+--------------+
|             Event             | Counter |      Sum     |     Min    |      Max     |      Avg     |
+-------------------------------+---------+--------------+------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |   3403870000 |  808478100 |    877508100 |    850967500 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  |  19038421000 | 3128267000 |   5345630000 |   4759605250 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  |  17856003000 | 2919721000 |   5030688000 |   4464000750 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |   1293814700 |  149299600 |    383251400 |    323453675 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  | 5.534022e+19 |    6751875 | 1.844674e+19 | 1.383506e+19 |
+-------------------------------+---------+--------------+------------+--------------+--------------+

+-------------------------------+------------+--------------+--------------+--------------+
|             Metric            | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |
+-------------------------------+------------+--------------+--------------+--------------+
|      Runtime (RDTSC) [s]      |     0.8536 |       0.8537 |       0.8536 |       0.8537 |
|      Runtime unhalted [s]     |     2.2345 |       3.8086 |       3.7376 |       3.8184 |
|          Clock [MHz]          |  1499.9783 |    1493.4154 |    1492.7997 |    1487.6269 |
|              CPI              |     3.8693 |       6.1441 |       6.1555 |       6.0918 |
|   DP [MFLOP/s] (SSE assumed)  |   190.7207 |      nil     |      nil     |      nil     |
|   DP [MFLOP/s] (AVX assumed)  |   206.5400 |      nil     |      nil     |      nil     |
| DP [MFLOP/s] (AVX512 assumed) |   238.1788 | 1.728660e+14 | 1.728746e+14 | 1.728702e+14 |
|        Packed [MUOPS/s]       |     7.9097 |      nil     |      nil     |      nil     |
|        Scalar [MUOPS/s]       |   174.9013 |     445.8666 |     445.8889 |     448.9462 |
+-------------------------------+------------+--------------+--------------+--------------+

+------------------------------------+--------------+-----------+-----------------+--------------+
|               Metric               |      Sum     |    Min    |       Max       |      Avg     |
+------------------------------------+--------------+-----------+-----------------+--------------+
|      Runtime (RDTSC) [s] STAT      |       3.4146 |    0.8536 |          0.8537 |       0.8537 |
|      Runtime unhalted [s] STAT     |      13.5991 |    2.2345 |          3.8184 |       3.3998 |
|          Clock [MHz] STAT          |    5973.8203 | 1487.6269 |       1499.9783 |    1493.4551 |
|              CPI STAT              |      22.2607 |    3.8693 |          6.1555 |       5.5652 |
|   DP [MFLOP/s] (SSE assumed) STAT  |     190.7207 |  190.7207 |        190.7207 |      47.6802 |
|   DP [MFLOP/s] (AVX assumed) STAT  |     206.5400 |  206.5400 |        206.5400 |      51.6350 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 5.186108e+14 |  238.1788 | 172874600000000 | 1.296527e+14 |
|        Packed [MUOPS/s] STAT       |       7.9097 |    7.9097 |          7.9097 |       1.9774 |
|        Scalar [MUOPS/s] STAT       |    1515.6030 |  174.9013 |        448.9462 |     378.9008 |
+------------------------------------+--------------+-----------+-----------------+--------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 512
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.2562 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.234383 |   0.235414 |   0.233923 |   0.234042 |   0.234536 |   0.234171 |   0.233726 |   0.233653 |   0.234301 |   0.233927 |    0.235060 |    0.234245 |    0.233551 |    0.234459 |    0.233863 |    0.233790 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|           Event          | Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |  674540600 |   1060278000 |    409011600 |    701691000 |    598142100 |    486911800 |    517041300 |    410518900 |    566871000 |    592421200 |    611693000 |    640690600 |    580456600 |    483728400 |    486953200 |    623477200 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 1334300000 |   8446789000 |   7169914000 |   7145427000 |   6980002000 |   6639693000 |   7001459000 |   6522365000 |   6989037000 |   6917224000 |   6719993000 |   7065672000 |   7202606000 |   6672179000 |   6775619000 |   8995138000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 1247725000 |   8107824000 |   7273167000 |   7226877000 |   7109527000 |   6791302000 |   7158509000 |   6703494000 |   7127152000 |   7065647000 |   6994170000 |   7179201000 |   7298754000 |   6874676000 |   6960705000 |   9398350000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |   28373190 |    725352400 |    705559500 |    751696800 |    749075600 |    740293300 |    749336000 |    742783800 |    746191600 |    757201600 |    746977900 |    744882000 |    734395300 |    757725700 |    756546100 |    793896500 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |   11974380 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+--------------+------------+--------------+--------------+
|             Event             | Counter |      Sum     |     Min    |      Max     |      Avg     |
+-------------------------------+---------+--------------+------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |   9444426500 |  409011600 |   1060278000 | 5.902767e+08 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 108577417000 | 1334300000 |   8995138000 | 6.786089e+09 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 110517080000 | 1247725000 |   9398350000 |   6907317500 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |  11230287290 |   28373190 |    793896500 | 7.018930e+08 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  | 2.767011e+20 |   11974380 | 1.844674e+19 | 1.729382e+19 |
+-------------------------------+---------+--------------+------------+--------------+--------------+

+-------------------------------+------------+-----------------+-----------------+--------------+--------------+-----------------+-----------------+--------------+-----------------+--------------+-----------------+-----------------+-----------------+--------------+--------------+--------------+
|             Metric            | HWThread 0 |    HWThread 1   |    HWThread 2   |  HWThread 3  |  HWThread 4  |    HWThread 5   |    HWThread 6   |  HWThread 7  |    HWThread 8   |  HWThread 9  |   HWThread 10   |   HWThread 11   |   HWThread 12   |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+-------------------------------+------------+-----------------+-----------------+--------------+--------------+-----------------+-----------------+--------------+-----------------+--------------+-----------------+-----------------+-----------------+--------------+--------------+--------------+
|      Runtime (RDTSC) [s]      |     0.2344 |          0.2354 |          0.2339 |       0.2340 |       0.2345 |          0.2342 |          0.2337 |       0.2337 |          0.2343 |       0.2339 |          0.2351 |          0.2342 |          0.2336 |       0.2345 |       0.2339 |       0.2338 |
|      Runtime unhalted [s]     |     0.9531 |          6.0334 |          5.1214 |       5.1039 |       4.9857 |          4.7427 |          5.0011 |       4.6588 |          4.9922 |       4.9409 |          4.8000 |          5.0469 |          5.1447 |       4.7659 |       4.8397 |       6.4251 |
|          Clock [MHz]          |  1497.1369 |       1458.5262 |       1380.1214 |    1384.2178 |    1374.4905 |       1368.7428 |       1369.2819 |    1362.1683 |       1372.8662 |    1370.5876 |       1345.1154 |       1377.8574 |       1381.5539 |    1358.7588 |    1362.7703 |    1339.9331 |
|              CPI              |     1.9781 |          7.9666 |         17.5299 |      10.1832 |      11.6695 |         13.6363 |         13.5414 |      15.8881 |         12.3291 |      11.6762 |         10.9859 |         11.0282 |         12.4085 |      13.7932 |      13.9143 |      14.4274 |
|   DP [MFLOP/s] (SSE assumed)  |   223.2326 |    1.567176e+14 | 157716207715633 | 1.576359e+14 | 1.573039e+14 | 157549379537510 | 157849276506462 | 1.578989e+14 |    1.574621e+14 | 1.577136e+14 |    1.569535e+14 |    1.574998e+14 |    1.579678e+14 | 1.573557e+14 | 1.577570e+14 | 1.578063e+14 |
|   DP [MFLOP/s] (AVX assumed)  |   325.4104 | 313435151213418 |    3.154324e+14 | 3.152719e+14 | 3.146077e+14 |    3.150988e+14 |    3.156986e+14 | 3.157979e+14 |    3.149242e+14 | 3.154273e+14 | 313907050929346 |    3.149996e+14 |    3.159355e+14 | 3.147113e+14 | 3.155140e+14 | 3.156125e+14 |
| DP [MFLOP/s] (AVX512 assumed) |   529.7661 |    6.268703e+14 |    6.308648e+14 | 6.305438e+14 | 6.292154e+14 |    6.301975e+14 |    6.313971e+14 | 6.315957e+14 | 629848395675925 | 6.308546e+14 |    6.278141e+14 | 629999240113731 | 631871024153361 | 6.294226e+14 | 6.310280e+14 | 6.312251e+14 |
|        Packed [MUOPS/s]       |    51.0889 |       nil       |       nil       |      nil     |      nil     |       nil       |       nil       |      nil     |       nil       |      nil     |       nil       |       nil       |       nil       |      nil     |      nil     |      nil     |
|        Scalar [MUOPS/s]       |   121.0548 |       3081.1805 |       3016.2015 |    3211.7989 |    3193.8565 |       3161.3377 |       3206.0447 |    3179.0107 |       3184.7604 |    3236.9141 |       3177.8194 |       3179.9324 |       3144.4791 |    3231.8020 |    3235.0011 |    3395.7719 |
+-------------------------------+------------+-----------------+-----------------+--------------+--------------+-----------------+-----------------+--------------+-----------------+--------------+-----------------+-----------------+-----------------+--------------+--------------+--------------+

+------------------------------------+------------------+-----------+-----------------+--------------+
|               Metric               |        Sum       |    Min    |       Max       |      Avg     |
+------------------------------------+------------------+-----------+-----------------+--------------+
|      Runtime (RDTSC) [s] STAT      |           3.7471 |    0.2336 |          0.2354 |       0.2342 |
|      Runtime unhalted [s] STAT     |          77.5555 |    0.9531 |          6.4251 |       4.8472 |
|          Clock [MHz] STAT          |       22104.1285 | 1339.9331 |       1497.1369 |    1381.5080 |
|              CPI STAT              |         192.9559 |    1.9781 |         17.5299 |      12.0597 |
|   DP [MFLOP/s] (SSE assumed) STAT  | 2363186963759828 |  223.2326 | 157967800000000 | 1.476992e+14 |
|   DP [MFLOP/s] (AVX assumed) STAT  | 4726373902143090 |  325.4104 | 315935500000000 | 2.953984e+14 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 9452747659943548 |  529.7661 | 631871024153361 | 5.907967e+14 |
|        Packed [MUOPS/s] STAT       |          51.0889 |   51.0889 |         51.0889 |       3.1931 |
|        Scalar [MUOPS/s] STAT       |       47956.9657 |  121.0548 |       3395.7719 |    2997.3104 |
+------------------------------------+------------------+-----------+-----------------+--------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 512
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
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=512 
 Elapsed time is : 0.5173 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   0.083464 |   0.103085 |   0.081914 |   0.081743 |   0.098645 |   0.098935 |   0.099259 |   0.099545 |   0.081304 |   0.089211 |    0.087245 |    0.086483 |    0.084377 |    0.083981 |    0.087998 |    0.088786 |    0.101077 |    0.100758 |    0.084814 |    0.085707 |    0.088375 |    0.087622 |    0.093414 |    0.092676 |    0.101623 |    0.101345 |    0.091259 |    0.091954 |    0.101957 |    0.102231 |    0.094750 |    0.094096 |    0.097112 |    0.098033 |    0.092316 |    0.091611 |    0.082564 |    0.098314 |    0.095419 |    0.096407 |    0.099842 |    0.100444 |    0.093076 |    0.093755 |    0.095091 |    0.094428 |    0.097732 |    0.083062 |    0.096732 |    0.096069 |    0.086865 |    0.086110 |    0.085256 |    0.095756 |    0.097407 |    0.090476 |    0.080563 |    0.080257 |    0.090066 |    0.090901 |    0.089567 |    0.102515 |    0.102809 |    0.100121 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|           Event          | Counter | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  | 2424535000 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 3715383000 |   7216615000 |  10308920000 |   9379050000 |   5815441000 |   5488114000 |   5423821000 |   6131100000 |   8441859000 |   4336400000 |   6308182000 |   5516304000 |   9041624000 |   4747424000 |   8652005000 |   9187702000 |   5107363000 |   5680842000 |   4420749000 |   4450210000 |   3885543000 |   4973230000 |   5436592000 |   5159247000 |   3414539000 |   3258677000 |   6797592000 |   6904730000 |   7737351000 |   8248769000 |   6285770000 |   9951789000 |   7703688000 |   6349521000 |   3913990000 |   3922416000 |   5029294000 |   3292172000 |   9878716000 |   9814448000 |   5183346000 |   8768235000 |   7603511000 |   7726390000 |   3584186000 |   3218354000 |  11272140000 |   6496932000 |   2803437000 |   4447907000 |   5319714000 |   5783645000 |   6705960000 |   6357895000 |   6324453000 |   7871120000 |   9335974000 |  11270050000 |   7052326000 |  10733700000 |   7309879000 |   6008971000 |  11253690000 |  14363870000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 3417588000 |   8898868000 |  12471130000 |  11633380000 |   9240553000 |   8974879000 |   8609639000 |   9291914000 |  10882250000 |   7648025000 |   9176334000 |   8719134000 |  11152650000 |   8172944000 |  10452870000 |  10865900000 |   8324718000 |   8784264000 |   7795961000 |   7734515000 |   7175580000 |   7989121000 |   8981939000 |   8723340000 |   7410177000 |   7467960000 |   9519727000 |   9676914000 |  10320460000 |  10672560000 |   9206911000 |  11758930000 |  10595800000 |   9826729000 |   7698701000 |   7653448000 |   8629511000 |   8522119000 |  12235980000 |  11631210000 |   8593650000 |  10985720000 |  10083690000 |  10220040000 |   7547932000 |   7181286000 |  13179410000 |   9854856000 |   6989012000 |   8380109000 |   8418103000 |   9248669000 |   9996003000 |   9312340000 |   9033500000 |  10297960000 |  11004390000 |  12411120000 |   9739399000 |  11878880000 |   8788314000 |   7975598000 |  11802210000 |  14541300000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |   10381600 |    594258700 |    588160400 |    594778000 |    632269100 |    633318300 |    632138700 |    624897900 |    592058700 |    580002900 |    579280600 |    568238400 |    585309200 |    570661900 |    590847700 |    605037700 |    638007100 |    634270500 |    573152100 |    575579200 |    580067300 |    588324200 |    634135600 |    637445600 |    639807300 |    639612500 |    636231600 |    634988800 |    644986900 |    646624600 |    641671200 |    666970700 |    659599800 |    650881400 |    588393300 |    601859400 |    592683100 |    654683900 |    678113400 |    670771300 |    642594100 |    663629400 |    606643500 |    605859000 |    589277700 |    592193600 |    644133600 |    582753200 |    605957900 |    591375700 |    578954000 |    584425000 |    578755200 |    580298300 |    595307000 |    628237200 |    639671200 |    634035400 |    573645500 |    603235300 |    597730200 |    645704000 |    667695400 |    679423800 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |   47100330 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |        19079 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+--------------+------------+--------------+--------------+
|             Event             | Counter |      Sum     |     Min    |      Max     |      Avg     |
+-------------------------------+---------+--------------+------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  | 1.162145e+21 | 2424535000 | 1.844674e+19 | 1.815851e+19 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 428122867000 | 2803437000 |  14363870000 | 6.689420e+09 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 605408124000 | 3417588000 |  14541300000 | 9.459502e+09 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |  38802035800 |   10381600 |    679423800 | 6.062818e+08 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  | 1.143698e+21 |      19079 | 1.844674e+19 | 1.787028e+19 |
+-------------------------------+---------+--------------+------------+--------------+--------------+

+-------------------------------+------------+-----------------+------------------+-----------------+--------------+--------------+--------------+------------------+--------------+-----------------+------------------+--------------+-----------------+--------------+--------------+--------------+--------------+------------------+------------------+--------------+--------------+--------------+-----------------+------------------+--------------+--------------+--------------+--------------+--------------+--------------+-----------------+--------------+------------------+--------------+--------------+--------------+-----------------+--------------+--------------+--------------+--------------+------------------+-----------------+------------------+------------------+--------------+------------------+--------------+------------------+-----------------+--------------+--------------+--------------+--------------+-----------------+--------------+-----------------+------------------+------------------+--------------+------------------+-----------------+--------------+--------------+
|             Metric            | HWThread 0 |    HWThread 1   |    HWThread 2    |    HWThread 3   |  HWThread 4  |  HWThread 5  |  HWThread 6  |    HWThread 7    |  HWThread 8  |    HWThread 9   |    HWThread 10   |  HWThread 11 |   HWThread 12   |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |    HWThread 17   |    HWThread 18   |  HWThread 19 |  HWThread 20 |  HWThread 21 |   HWThread 22   |    HWThread 23   |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |   HWThread 30   |  HWThread 31 |    HWThread 32   |  HWThread 33 |  HWThread 34 |  HWThread 35 |   HWThread 36   |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |    HWThread 41   |   HWThread 42   |    HWThread 43   |    HWThread 44   |  HWThread 45 |    HWThread 46   |  HWThread 47 |    HWThread 48   |   HWThread 49   |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |   HWThread 54   |  HWThread 55 |   HWThread 56   |    HWThread 57   |    HWThread 58   |  HWThread 59 |    HWThread 60   |   HWThread 61   |  HWThread 62 |  HWThread 63 |
+-------------------------------+------------+-----------------+------------------+-----------------+--------------+--------------+--------------+------------------+--------------+-----------------+------------------+--------------+-----------------+--------------+--------------+--------------+--------------+------------------+------------------+--------------+--------------+--------------+-----------------+------------------+--------------+--------------+--------------+--------------+--------------+--------------+-----------------+--------------+------------------+--------------+--------------+--------------+-----------------+--------------+--------------+--------------+--------------+------------------+-----------------+------------------+------------------+--------------+------------------+--------------+------------------+-----------------+--------------+--------------+--------------+--------------+-----------------+--------------+-----------------+------------------+------------------+--------------+------------------+-----------------+--------------+--------------+
|      Runtime (RDTSC) [s]      |     0.0835 |          0.1031 |           0.0819 |          0.0817 |       0.0986 |       0.0989 |       0.0993 |           0.0995 |       0.0813 |          0.0892 |           0.0872 |       0.0865 |          0.0844 |       0.0840 |       0.0880 |       0.0888 |       0.1011 |           0.1008 |           0.0848 |       0.0857 |       0.0884 |       0.0876 |          0.0934 |           0.0927 |       0.1016 |       0.1013 |       0.0913 |       0.0920 |       0.1020 |       0.1022 |          0.0948 |       0.0941 |           0.0971 |       0.0980 |       0.0923 |       0.0916 |          0.0826 |       0.0983 |       0.0954 |       0.0964 |       0.0998 |           0.1004 |          0.0931 |           0.0938 |           0.0951 |       0.0944 |           0.0977 |       0.0831 |           0.0967 |          0.0961 |       0.0869 |       0.0861 |       0.0853 |       0.0958 |          0.0974 |       0.0905 |          0.0806 |           0.0803 |           0.0901 |       0.0909 |           0.0896 |          0.1025 |       0.1028 |       0.1001 |
|      Runtime unhalted [s]     |     2.6539 |          5.1548 |           7.3636 |          6.6994 |       4.1539 |       3.9201 |       3.8742 |           4.3794 |       6.0299 |          3.0975 |           4.5059 |       3.9402 |          6.4584 |       3.3910 |       6.1801 |       6.5627 |       3.6481 |           4.0578 |           3.1577 |       3.1787 |       2.7754 |       3.5523 |          3.8833 |           3.6852 |       2.4390 |       2.3276 |       4.8555 |       4.9320 |       5.5267 |       5.8920 |          4.4899 |       7.1085 |           5.5027 |       4.5354 |       2.7957 |       2.8017 |          3.5924 |       2.3516 |       7.0563 |       7.0104 |       3.7024 |           6.2631 |          5.4311 |           5.5189 |           2.5602 |       2.2988 |           8.0516 |       4.6407 |           2.0025 |          3.1771 |       3.7998 |       4.1312 |       4.7900 |       4.5414 |          4.5175 |       5.6223 |          6.6686 |           8.0501 |           5.0374 |       7.6670 |           5.2214 |          4.2922 |       8.0384 |      10.2600 |
|          Clock [MHz]          |  1521.9788 |       1135.3336 |        1157.2631 |       1128.6978 |     881.0680 |     856.0897 |     881.9524 |         923.7574 |    1086.0358 |        793.7884 |         962.4091 |     885.7264 |       1134.9928 |     813.2128 |    1158.7932 |    1183.7662 |     858.9184 |         905.3824 |         793.8728 |     805.5122 |     758.0877 |     871.4937 |        847.3862 |         827.9960 |     645.1018 |     610.8915 |     999.6669 |     998.9288 |    1049.5859 |    1082.0449 |        955.8049 |    1184.8356 |        1017.8638 |     904.6003 |     711.7492 |     717.4989 |        815.9162 |     540.8286 |    1130.2811 |    1181.3150 |     844.4176 |        1117.3993 |       1055.6487 |        1058.3974 |         664.7943 |     627.4171 |        1197.3886 |     922.9598 |         561.5646 |        743.0718 |     884.7056 |     875.4818 |     939.2026 |     955.8269 |        980.1480 |    1070.0648 |       1187.7318 |        1271.2753 |        1013.7362 |    1265.0238 |        1164.4728 |       1054.7793 |    1334.9234 |    1382.9069 |
|              CPI              |     1.5324 |    3.912136e-10 |     5.588478e-10 |    5.084394e-10 | 3.152558e-10 | 2.975113e-10 | 2.940260e-10 |     3.323677e-10 | 4.576342e-10 |    2.350768e-10 |     3.419673e-10 | 2.990395e-10 |    4.901475e-10 | 2.573584e-10 | 4.690262e-10 | 4.980664e-10 | 2.768708e-10 |     3.079591e-10 |     2.396493e-10 | 2.412464e-10 | 2.106358e-10 | 2.695994e-10 |    2.947183e-10 |     2.796834e-10 | 1.851026e-10 | 1.766533e-10 | 3.684983e-10 | 3.743062e-10 | 4.194427e-10 | 4.471668e-10 |    3.407523e-10 | 5.394877e-10 |     4.176179e-10 | 3.442083e-10 | 2.121779e-10 | 2.126346e-10 |    2.726386e-10 | 1.784690e-10 | 5.355264e-10 | 5.320424e-10 | 2.809898e-10 |     4.753271e-10 |    4.121872e-10 |     4.188485e-10 |     1.942992e-10 | 1.744674e-10 |     6.110641e-10 | 3.521995e-10 |     1.519747e-10 |    2.411216e-10 | 2.883823e-10 | 3.135321e-10 | 3.635309e-10 | 3.446623e-10 |    3.428494e-10 | 4.266944e-10 |    5.061043e-10 |     6.109508e-10 |     3.823074e-10 | 5.818752e-10 |     3.962694e-10 |    3.257470e-10 | 6.100639e-10 | 7.786671e-10 |
|   DP [MFLOP/s] (SSE assumed)  |  1253.0264 |    3.578924e+14 |     4.503929e+14 |    4.513338e+14 | 3.740014e+14 | 3.729045e+14 | 3.716897e+14 |     3.706216e+14 | 4.537698e+14 |    4.135553e+14 |     4.228713e+14 | 4.265992e+14 |    4.372445e+14 | 4.393071e+14 | 4.192546e+14 | 4.155318e+14 | 3.650030e+14 |     3.661582e+14 |     4.349910e+14 | 4.304592e+14 | 4.174674e+14 | 4.210504e+14 | 394946446937373 |     3.980915e+14 |    6296.2910 | 3.640381e+14 | 4.042717e+14 | 4.012146e+14 | 3.618526e+14 | 3.608831e+14 |    3.893764e+14 | 3.920822e+14 |     3.799082e+14 | 3.763390e+14 | 3.996428e+14 | 4.027199e+14 |    4.468492e+14 | 3.752621e+14 | 3.866454e+14 | 3.826865e+14 | 3.695190e+14 |     3.673043e+14 |    3.963783e+14 |     3.935104e+14 |     3.879815e+14 | 3.907042e+14 |     3.774982e+14 | 4.441663e+14 |     3.813996e+14 |    3.840324e+14 | 4.247229e+14 | 4.284442e+14 | 4.327363e+14 | 3.852859e+14 |    3.787556e+14 | 4.077710e+14 |    4.579452e+14 |  459693687734252 |     4.096287e+14 | 4.058660e+14 |     4.119071e+14 | 359882671178309 | 3.588549e+14 | 3.684900e+14 |
|   DP [MFLOP/s] (AVX assumed)  |  2381.6683 | 715784776511458 |  900785702084969 | 902667535899851 | 7.480029e+14 | 7.458090e+14 | 7.433795e+14 |     7.412432e+14 | 9.075396e+14 | 827110524639695 |     8.457425e+14 | 8.531985e+14 | 874489006104909 | 8.786143e+14 | 8.385091e+14 | 8.310637e+14 | 7.300060e+14 |     7.323164e+14 |     8.699820e+14 | 8.609183e+14 | 8.349349e+14 | 8.421009e+14 |    7.898929e+14 |  796183084125754 |    6296.6665 | 7.280762e+14 | 8.085434e+14 | 8.024293e+14 | 7.237052e+14 | 7.217663e+14 |    7.787528e+14 | 7.841644e+14 |     7.598164e+14 | 7.526781e+14 | 7.992856e+14 | 8.054399e+14 | 893698325455884 | 7.505243e+14 | 7.732907e+14 | 7.653730e+14 | 7.390380e+14 |     7.346087e+14 |    7.927567e+14 |     7.870208e+14 |     7.759630e+14 | 7.814084e+14 |     7.549963e+14 | 8.883326e+14 |     7.627992e+14 |    7.680648e+14 | 8.494457e+14 | 8.568883e+14 | 8.654726e+14 | 7.705718e+14 | 757511105459410 | 8.155421e+14 | 915890391004611 |  919387375460604 |  819257417317251 | 8.117319e+14 |     8.238142e+14 |    7.197653e+14 | 7.177098e+14 | 7.369801e+14 |
| DP [MFLOP/s] (AVX512 assumed) |  4638.9520 |    1.431570e+15 | 1801571404162758 |    1.805335e+15 | 1.496006e+15 | 1.491618e+15 | 1.486759e+15 | 1482486440543093 | 1.815079e+15 |    1.654221e+15 | 1691485076889970 | 1.706397e+15 |    1.748978e+15 | 1.757229e+15 | 1.677018e+15 | 1.662127e+15 | 1.460012e+15 | 1464632888810493 | 1739964050901447 | 1.721837e+15 | 1.669870e+15 | 1.684202e+15 |    1.579786e+15 | 1592366168244630 |    6297.4174 | 1.456152e+15 | 1.617087e+15 | 1.604859e+15 | 1.447410e+15 | 1.443533e+15 |    1.557506e+15 | 1.568329e+15 | 1519632884083621 | 1.505356e+15 | 1.598571e+15 | 1.610880e+15 |    1.787397e+15 | 1.501049e+15 | 1.546581e+15 | 1.530746e+15 | 1.478076e+15 | 1469217344215663 |    1.585513e+15 | 1574041558207548 | 1551926042919698 | 1.562817e+15 | 1509992627771115 | 1.776665e+15 | 1525598347520211 |    1.536130e+15 | 1.698891e+15 | 1.713777e+15 | 1.730945e+15 | 1.541144e+15 |    1.515022e+15 | 1.631084e+15 |    1.831781e+15 | 1838774750913308 | 1638514834628133 | 1.623464e+15 | 1647628357977669 |    1.439531e+15 | 1.435420e+15 | 1.473960e+15 |
|        Packed [MUOPS/s]       |   564.3209 |    1.789462e+14 |     2.251964e+14 |    2.256669e+14 | 1.870007e+14 | 1.864522e+14 | 1.858449e+14 |     1.853108e+14 | 2.268849e+14 |    2.067776e+14 |     2.114356e+14 | 2.132996e+14 |    2.186223e+14 | 2.196536e+14 | 2.096273e+14 | 2.077659e+14 | 1.825015e+14 |     1.830791e+14 |     2.174955e+14 | 2.152296e+14 | 2.087337e+14 | 2.105252e+14 |    1.974732e+14 |     1.990458e+14 |       0.1877 | 1.820191e+14 | 2.021359e+14 | 2.006073e+14 | 1.809263e+14 | 1.804416e+14 | 194688199504022 | 1.960411e+14 |     1.899541e+14 | 1.881695e+14 | 1.998214e+14 | 2.013600e+14 |    2.234246e+14 | 1.876311e+14 | 1.933227e+14 | 1.913432e+14 | 1.847595e+14 |  183652168026132 | 198189165613679 |     1.967552e+14 |     1.939908e+14 | 1.953521e+14 |     1.887491e+14 | 2.220832e+14 |     1.906998e+14 | 192016190085696 | 2.123614e+14 | 2.142221e+14 | 2.163682e+14 | 1.926430e+14 |    1.893778e+14 | 2.038855e+14 |    2.289726e+14 |     2.298468e+14 |     2.048144e+14 | 2.029330e+14 |     2.059535e+14 |    1.799413e+14 | 1.794275e+14 | 1.842450e+14 |
|        Scalar [MUOPS/s]       |   124.3846 |       5764.7223 |        7180.2183 |       7276.1744 |    6409.5214 |    6401.3270 |    6368.5904 |        6277.5500 |    7282.0007 |       6501.5079 |        6639.6860 |    6570.5396 |       6936.8146 |    6795.1262 |    6714.3463 |    6814.5489 |    6312.0773 |        6294.9702 |        6757.7255 |    6715.6403 |    6563.7399 |    6714.3074 |       6788.4516 |        6878.2262 |    6295.9155 |    6311.2326 |    6971.7043 |    6905.4696 |    6326.0554 |    6325.1261 |       6772.2433 |    7088.1721 |        6792.1862 |    6639.4410 |    6373.6775 |    6569.7457 |       7178.5027 |    6659.1191 |    7106.6595 |    6957.7365 |    6436.1165 |        6606.9657 |       6517.6920 |        6462.1665 |        6196.9988 |    6271.3665 |        6590.8460 |    7015.8559 |        6264.3072 |       6155.7602 |    6664.9989 |    6786.9302 |    6788.4188 |    6060.1699 |       6111.5360 |    6943.6912 |       7940.0033 |        7900.0970 |        6369.1922 |    6636.2045 |        6673.5181 |       6298.6110 |    6494.5292 |    6786.0472 |
+-------------------------------+------------+-----------------+------------------+-----------------+--------------+--------------+--------------+------------------+--------------+-----------------+------------------+--------------+-----------------+--------------+--------------+--------------+--------------+------------------+------------------+--------------+--------------+--------------+-----------------+------------------+--------------+--------------+--------------+--------------+--------------+--------------+-----------------+--------------+------------------+--------------+--------------+--------------+-----------------+--------------+--------------+--------------+--------------+------------------+-----------------+------------------+------------------+--------------+------------------+--------------+------------------+-----------------+--------------+--------------+--------------+--------------+-----------------+--------------+-----------------+------------------+------------------+--------------+------------------+-----------------+--------------+--------------+

+------------------------------------+-------------------+--------------+------------------+--------------+
|               Metric               |        Sum        |      Min     |        Max       |      Avg     |
+------------------------------------+-------------------+--------------+------------------+--------------+
|      Runtime (RDTSC) [s] STAT      |            5.9305 |       0.0803 |           0.1031 |       0.0927 |
|      Runtime unhalted [s] STAT     |          305.8046 |       2.0025 |          10.2600 |       4.7782 |
|          Clock [MHz] STAT          |        61893.7667 |     540.8286 |        1521.9788 |     967.0901 |
|              CPI STAT              |            1.5324 | 1.519747e-10 |           1.5324 |       0.0239 |
|   DP [MFLOP/s] (SSE assumed) STAT  | 24811387205857480 |    1253.0264 |  459693687734252 | 3.876779e+14 |
|   DP [MFLOP/s] (AVX assumed) STAT  | 49622774844073072 |    2381.6683 |  919387375460604 | 7.753559e+14 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 99245552777800272 |    4638.9520 | 1838774750913308 | 1.550712e+15 |
|        Packed [MUOPS/s] STAT       | 12405693923230092 |       0.1877 |  229846800000000 | 1.938390e+14 |
|        Scalar [MUOPS/s] STAT       |       419327.2069 |     124.3846 |        7940.0033 |    6551.9876 |
+------------------------------------+-------------------+--------------+------------------+--------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-0 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 1 total threads. 
Working on problem size N=2048 
 Elapsed time is : 218.5238 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+
|    Region Info    | HWThread 0 |
+-------------------+------------+
| RDTSC Runtime [s] | 218.524000 |
|     call count    |          1 |
+-------------------+------------+

+--------------------------+---------+--------------+
|           Event          | Counter |  HWThread 0  |
+--------------------------+---------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |  60209310000 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 325233000000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 303550800000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |  17179910000 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |          730 |
+--------------------------+---------+--------------+

+-------------------------------+--------------+
|             Metric            |  HWThread 0  |
+-------------------------------+--------------+
|      Runtime (RDTSC) [s]      |     218.5240 |
|      Runtime unhalted [s]     |     232.3396 |
|          Clock [MHz]          |    1499.8041 |
|              CPI              |       5.4017 |
|   DP [MFLOP/s] (SSE assumed)  |      78.6180 |
|   DP [MFLOP/s] (AVX assumed)  |      78.6180 |
| DP [MFLOP/s] (AVX512 assumed) |      78.6180 |
|        Packed [MUOPS/s]       | 3.340594e-06 |
|        Scalar [MUOPS/s]       |      78.6180 |
+-------------------------------+--------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-3 ./benchmark-basic-omp -N 2048
srun: Job 63427339 step creation temporarily disabled, retrying (Requested nodes are busy)
srun: Step created for job 63427339
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
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 55.8627 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 |
+-------------------+------------+------------+------------+------------+
| RDTSC Runtime [s] |  55.860870 |  55.860890 |  55.860960 |  55.861030 |
|     call count    |          1 |          1 |          1 |          1 |
+-------------------+------------+------------+------------+------------+

+--------------------------+---------+--------------+--------------+--------------+--------------+
|           Event          | Counter |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |
+--------------------------+---------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |  60314730000 |  59526000000 |  60584250000 |  60619210000 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 323958200000 | 329514500000 | 329339300000 | 329485100000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 302361000000 | 307580900000 | 307420100000 | 307576700000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |  16897970000 |  17179900000 |  17481890000 |  17481890000 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |     63687610 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+---------------+--------------+--------------+--------------+
|             Event             | Counter |      Sum      |      Min     |      Max     |      Avg     |
+-------------------------------+---------+---------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |  241044190000 |  59526000000 |  60619210000 |  60261047500 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 1312297100000 | 323958200000 | 329514500000 | 328074275000 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 1224938700000 | 302361000000 | 307580900000 | 306234675000 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |   69041650000 |  16897970000 |  17481890000 |  17260412500 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |  5.534022e+19 |     63687610 | 1.844674e+19 | 1.383506e+19 |
+-------------------------------+---------+---------------+--------------+--------------+--------------+

+-------------------------------+------------+--------------+--------------+--------------+
|             Metric            | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |
+-------------------------------+------------+--------------+--------------+--------------+
|      Runtime (RDTSC) [s]      |    55.8609 |      55.8609 |      55.8610 |      55.8610 |
|      Runtime unhalted [s]     |   231.3993 |     235.3681 |     235.2430 |     235.3471 |
|          Clock [MHz]          |  1499.9959 |    1499.8300 |    1499.8167 |    1499.7167 |
|              CPI              |     5.3711 |       5.5356 |       5.4361 |       5.4353 |
|   DP [MFLOP/s] (SSE assumed)  |   304.7812 | 6.604528e+11 | 6.604520e+11 | 6.604511e+11 |
|   DP [MFLOP/s] (AVX assumed)  |   307.0615 | 1.320906e+12 | 1.320904e+12 | 1.320902e+12 |
| DP [MFLOP/s] (AVX512 assumed) |   311.6219 | 2.641811e+12 | 2.641808e+12 | 2.641804e+12 |
|        Packed [MUOPS/s]       |     1.1401 | 3.302264e+11 | 3.302260e+11 | 3.302256e+11 |
|        Scalar [MUOPS/s]       |   302.5010 |     307.5479 |     312.9536 |     312.9532 |
+-------------------------------+------------+--------------+--------------+--------------+

+------------------------------------+--------------+-----------+---------------+--------------+
|               Metric               |      Sum     |    Min    |      Max      |      Avg     |
+------------------------------------+--------------+-----------+---------------+--------------+
|      Runtime (RDTSC) [s] STAT      |     223.4438 |   55.8609 |       55.8610 |      55.8609 |
|      Runtime unhalted [s] STAT     |     937.3575 |  231.3993 |      235.3681 |     234.3394 |
|          Clock [MHz] STAT          |    5999.3593 | 1499.7167 |     1499.9959 |    1499.8398 |
|              CPI STAT              |      21.7781 |    5.3711 |        5.5356 |       5.4445 |
|   DP [MFLOP/s] (SSE assumed) STAT  | 1.981356e+12 |  304.7812 |  660452800000 | 4.953390e+11 |
|   DP [MFLOP/s] (AVX assumed) STAT  | 3.962712e+12 |  307.0615 | 1320906000000 | 9.906780e+11 |
| DP [MFLOP/s] (AVX512 assumed) STAT | 7.925423e+12 |  311.6219 | 2641811000000 | 1.981356e+12 |
|        Packed [MUOPS/s] STAT       | 9.906780e+11 |    1.1401 |  330226400000 | 2.476695e+11 |
|        Scalar [MUOPS/s] STAT       |    1235.9557 |  302.5010 |      312.9536 |     308.9889 |
+------------------------------------+--------------+-----------+---------------+--------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-15 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 16 total threads. 
Hello world, I'm thread 14 out of 16 total threads. 
Hello world, I'm thread 2 out of 16 total threads. 
Hello world, I'm thread 3 out of 16 total threads. 
Hello world, I'm thread 15 out of 16 total threads. 
Hello world, I'm thread 10 out of 16 total threads. 
Hello world, I'm thread 11 out of 16 total threads. 
Hello world, I'm thread 5 out of 16 total threads. 
Hello world, I'm thread 9 out of 16 total threads. 
Hello world, I'm thread 4 out of 16 total threads. 
Hello world, I'm thread 6 out of 16 total threads. 
Hello world, I'm thread 7 out of 16 total threads. 
Hello world, I'm thread 8 out of 16 total threads. 
Hello world, I'm thread 1 out of 16 total threads. 
Hello world, I'm thread 13 out of 16 total threads. 
Hello world, I'm thread 12 out of 16 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 14.1708 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |  14.149930 |  14.149340 |  14.149170 |  14.149810 |  14.149130 |  14.149780 |  14.150050 |  14.149300 |  14.149910 |  14.149510 |   14.149660 |   14.149720 |   14.150610 |   14.151280 |   14.149360 |   14.149570 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|           Event          | Counter |  HWThread 0  |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+--------------------------+---------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  |  56378890000 |  59119340000 |  60555840000 |  60431840000 |  59721840000 |  60337530000 |  59633100000 |  59621530000 |  59646140000 |  60284760000 |  58832530000 |  59282140000 |  60613250000 |  60623700000 |  60671000000 |  60795120000 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 244477700000 | 334091600000 | 332469600000 | 332259300000 | 332282800000 | 332405900000 | 332016000000 | 332170400000 | 332049800000 | 332334900000 | 332563700000 | 332478900000 | 331268600000 | 331577200000 | 332406100000 | 333740900000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 228351000000 | 312308500000 | 311080700000 | 310951900000 | 310925900000 | 311036800000 | 310744300000 | 310879000000 | 310760300000 | 310994300000 | 311261900000 | 311175400000 | 310011900000 | 310437800000 | 311170900000 | 312724500000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |  12345730000 |  17389620000 |  17968430000 |  17943260000 |  17725160000 |  17892930000 |  17700000000 |  17700000000 |  17725160000 |  17892930000 |  17448340000 |  17582560000 |  18001990000 |  18001980000 |  18010370000 |  18018760000 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |    403480500 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+---------------+--------------+--------------+--------------+
|             Event             | Counter |      Sum      |      Min     |      Max     |      Avg     |
+-------------------------------+---------+---------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |  956548550000 |  56378890000 |  60795120000 |  59784284375 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 5230593400000 | 244477700000 | 334091600000 | 326912087500 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 4894815100000 | 228351000000 | 312724500000 | 305925943750 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |  279347220000 |  12345730000 |  18018760000 |  17459201250 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |  2.767011e+20 |    403480500 | 1.844674e+19 | 1.729382e+19 |
+-------------------------------+---------+---------------+--------------+--------------+--------------+

+-------------------------------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|             Metric            | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |
+-------------------------------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|      Runtime (RDTSC) [s]      |    14.1499 |      14.1493 |      14.1492 |      14.1498 |      14.1491 |      14.1498 |      14.1501 |      14.1493 |      14.1499 |      14.1495 |      14.1497 |      14.1497 |      14.1506 |      14.1513 |      14.1494 |      14.1496 |
|      Runtime unhalted [s]     |   174.6300 |     238.6410 |     237.4824 |     237.3322 |     237.3490 |     237.4369 |     237.1584 |     237.2687 |     237.1826 |     237.3862 |     237.5497 |     237.4891 |     236.6246 |     236.8450 |     237.4371 |     238.3905 |
|          Clock [MHz]          |  1498.8452 |    1497.6219 |    1496.2333 |    1495.9062 |    1496.1371 |    1496.1578 |    1495.8095 |    1495.8567 |    1495.8847 |    1496.0426 |    1495.7855 |    1495.8198 |    1495.9681 |    1495.3075 |    1495.5139 |    1494.0597 |
|              CPI              |     4.3363 |       5.6511 |       5.4903 |       5.4981 |       5.5638 |       5.5091 |       5.5676 |       5.5713 |       5.5670 |       5.5128 |       5.6527 |       5.6084 |       5.4653 |       5.4694 |       5.4788 |       5.4896 |
|   DP [MFLOP/s] (SSE assumed)  |   929.5234 |      nil     |      nil     | 2.607348e+12 | 2.607473e+12 | 2.607354e+12 |      nil     | 2.607442e+12 | 2.607330e+12 | 2.607403e+12 | 2.607376e+12 | 2.607365e+12 | 2.607201e+12 | 2.607077e+12 | 2.607431e+12 | 2.607392e+12 |
|   DP [MFLOP/s] (AVX assumed)  |   986.5527 | 5.214869e+12 | 5.214932e+12 | 5.214696e+12 | 5.214947e+12 | 5.214707e+12 | 5.214608e+12 | 5.214884e+12 |      nil     | 5.214807e+12 | 5.214751e+12 | 5.214729e+12 | 5.214401e+12 | 5.214154e+12 | 5.214862e+12 |      nil     |
| DP [MFLOP/s] (AVX512 assumed) |  1100.6114 |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |
|        Packed [MUOPS/s]       |    28.5147 | 1.303717e+12 | 1.303733e+12 | 1.303674e+12 | 1.303737e+12 | 1.303677e+12 | 1.303652e+12 | 1.303721e+12 | 1.303665e+12 | 1.303702e+12 | 1.303688e+12 | 1.303682e+12 | 1.303600e+12 |      nil     | 1.303716e+12 | 1.303696e+12 |
|        Scalar [MUOPS/s]       |   872.4941 |    1229.0057 |    1269.9282 |    1268.0919 |    1252.7385 |    1264.5377 |    1250.8790 |    1250.9453 |    1252.6695 |    1264.5618 |    1233.1279 |    1242.6083 |    1272.1706 |    1272.1097 |    1272.8752 |    1273.4493 |
+-------------------------------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+------------------------------------+------------+-----------+---------------+--------------+
|               Metric               |     Sum    |    Min    |      Max      |      Avg     |
+------------------------------------+------------+-----------+---------------+--------------+
|      Runtime (RDTSC) [s] STAT      |   226.3962 |   14.1491 |       14.1513 |      14.1498 |
|      Runtime unhalted [s] STAT     |  3736.2034 |  174.6300 |      238.6410 |     233.5127 |
|          Clock [MHz] STAT          | 23936.9495 | 1494.0597 |     1498.8452 |    1496.0593 |
|              CPI STAT              |    87.4316 |    4.3363 |        5.6527 |       5.4645 |
|   DP [MFLOP/s] (SSE assumed) STAT  |     nil    |  929.5234 | 2607473000000 | 1.955512e+12 |
|   DP [MFLOP/s] (AVX assumed) STAT  |     nil    |  986.5527 | 5214947000000 | 4.236959e+12 |
| DP [MFLOP/s] (AVX512 assumed) STAT |  1100.6114 | 1100.6114 |     1100.6114 |      68.7882 |
|        Packed [MUOPS/s] STAT       |     nil    |   28.5147 | 1303737000000 | 1.140729e+12 |
|        Scalar [MUOPS/s] STAT       | 19742.1927 |  872.4941 |     1273.4493 |    1233.8870 |
+------------------------------------+------------+-----------+---------------+--------------+

srun -n 1 likwid-perfctr -m -g FLOPS_DP -C N:0-63 ./benchmark-basic-omp -N 2048
--------------------------------------------------------------------------------
CPU name:	Intel(R) Xeon Phi(TM) CPU 7250 @ 1.40GHz
CPU type:	Intel Xeon Phi (Knights Landing) (Co)Processor
CPU clock:	1.40 GHz
--------------------------------------------------------------------------------
Description:	Basic implementation, OpenMP-enabled, three-loop dgemm.

Hello world, I'm thread 0 out of 64 total threads. 
Hello world, I'm thread 2 out of 64 total threads. 
Hello world, I'm thread 3 out of 64 total threads. 
Hello world, I'm thread 4 out of 64 total threads. 
Hello world, I'm thread 17 out of 64 total threads. 
Hello world, I'm thread 16 out of 64 total threads. 
Hello world, I'm thread 25 out of 64 total threads. 
Hello world, I'm thread 24 out of 64 total threads. 
Hello world, I'm thread 55 out of 64 total threads. 
Hello world, I'm thread 8 out of 64 total threads. 
Hello world, I'm thread 7 out of 64 total threads. 
Hello world, I'm thread 6 out of 64 total threads. 
Hello world, I'm thread 38 out of 64 total threads. 
Hello world, I'm thread 23 out of 64 total threads. 
Hello world, I'm thread 50 out of 64 total threads. 
Hello world, I'm thread 1 out of 64 total threads. 
Hello world, I'm thread 9 out of 64 total threads. 
Hello world, I'm thread 34 out of 64 total threads. 
Hello world, I'm thread 43 out of 64 total threads. 
Hello world, I'm thread 42 out of 64 total threads. 
Hello world, I'm thread 46 out of 64 total threads. 
Hello world, I'm thread 10 out of 64 total threads. 
Hello world, I'm thread 11 out of 64 total threads. 
Hello world, I'm thread 15 out of 64 total threads. 
Hello world, I'm thread 47 out of 64 total threads. 
Hello world, I'm thread 22 out of 64 total threads. 
Hello world, I'm thread 29 out of 64 total threads. 
Hello world, I'm thread 28 out of 64 total threads. 
Hello world, I'm thread 52 out of 64 total threads. 
Hello world, I'm thread 14 out of 64 total threads. 
Hello world, I'm thread 53 out of 64 total threads. 
Hello world, I'm thread 18 out of 64 total threads. 
Hello world, I'm thread 19 out of 64 total threads. 
Hello world, I'm thread 36 out of 64 total threads. 
Hello world, I'm thread 37 out of 64 total threads. 
Hello world, I'm thread 54 out of 64 total threads. 
Hello world, I'm thread 5 out of 64 total threads. 
Hello world, I'm thread 39 out of 64 total threads. 
Hello world, I'm thread 44 out of 64 total threads. 
Hello world, I'm thread 33 out of 64 total threads. 
Hello world, I'm thread 32 out of 64 total threads. 
Hello world, I'm thread 58 out of 64 total threads. 
Hello world, I'm thread 59 out of 64 total threads. 
Hello world, I'm thread 45 out of 64 total threads. 
Hello world, I'm thread 26 out of 64 total threads. 
Hello world, I'm thread 27 out of 64 total threads. 
Hello world, I'm thread 60 out of 64 total threads. 
Hello world, I'm thread 61 out of 64 total threads. 
Hello world, I'm thread 13 out of 64 total threads. 
Hello world, I'm thread 12 out of 64 total threads. 
Hello world, I'm thread 35 out of 64 total threads. 
Hello world, I'm thread 63 out of 64 total threads. 
Hello world, I'm thread 62 out of 64 total threads. 
Hello world, I'm thread 49 out of 64 total threads. 
Hello world, I'm thread 48 out of 64 total threads. 
Hello world, I'm thread 51 out of 64 total threads. 
Hello world, I'm thread 31 out of 64 total threads. 
Hello world, I'm thread 30 out of 64 total threads. 
Hello world, I'm thread 20 out of 64 total threads. 
Hello world, I'm thread 21 out of 64 total threads. 
Hello world, I'm thread 57 out of 64 total threads. 
Hello world, I'm thread 56 out of 64 total threads. 
Hello world, I'm thread 40 out of 64 total threads. 
Hello world, I'm thread 41 out of 64 total threads. 
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
WARN: Perf_event uses multiplexing. Raw event results are scaled to an estimated value.
Working on problem size N=2048 
 Elapsed time is : 4.3166 (sec) 
--------------------------------------------------------------------------------
Region MMULMarker, Group 1: FLOPS_DP
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|    Region Info    | HWThread 0 | HWThread 1 | HWThread 2 | HWThread 3 | HWThread 4 | HWThread 5 | HWThread 6 | HWThread 7 | HWThread 8 | HWThread 9 | HWThread 10 | HWThread 11 | HWThread 12 | HWThread 13 | HWThread 14 | HWThread 15 | HWThread 16 | HWThread 17 | HWThread 18 | HWThread 19 | HWThread 20 | HWThread 21 | HWThread 22 | HWThread 23 | HWThread 24 | HWThread 25 | HWThread 26 | HWThread 27 | HWThread 28 | HWThread 29 | HWThread 30 | HWThread 31 | HWThread 32 | HWThread 33 | HWThread 34 | HWThread 35 | HWThread 36 | HWThread 37 | HWThread 38 | HWThread 39 | HWThread 40 | HWThread 41 | HWThread 42 | HWThread 43 | HWThread 44 | HWThread 45 | HWThread 46 | HWThread 47 | HWThread 48 | HWThread 49 | HWThread 50 | HWThread 51 | HWThread 52 | HWThread 53 | HWThread 54 | HWThread 55 | HWThread 56 | HWThread 57 | HWThread 58 | HWThread 59 | HWThread 60 | HWThread 61 | HWThread 62 | HWThread 63 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
| RDTSC Runtime [s] |   3.900000 |   3.890671 |   3.906836 |   3.892874 |   3.889726 |   3.905969 |   3.903232 |   3.903562 |   3.891100 |   3.892023 |    3.907230 |    3.890206 |    3.901756 |    3.902094 |    3.899476 |    3.897816 |    3.888243 |    3.904952 |    3.908090 |    3.906493 |    3.901429 |    3.901086 |    3.907461 |    3.907761 |    3.909376 |    3.914795 |    3.909059 |    3.908455 |    3.909789 |    3.911792 |    3.903941 |    3.904621 |    3.911493 |    3.899157 |    3.898652 |    3.910697 |    3.910971 |    3.905490 |    3.904285 |    3.888743 |    3.898345 |    3.897570 |    3.896744 |    3.895929 |    3.894613 |    3.895005 |    3.902783 |    3.902454 |    3.900710 |    3.893328 |    3.894206 |    3.893810 |    3.896341 |    3.895498 |    3.910493 |    3.900397 |    3.891627 |    3.892540 |    3.906147 |    3.896996 |    3.908854 |    3.910175 |    3.889132 |    3.905170 |
|     call count    |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |          1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |           1 |
+-------------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+

+--------------------------+---------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|           Event          | Counter |  HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |  HWThread 44 |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 |  HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+--------------------------+---------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|     INSTR_RETIRED_ANY    |  FIXC0  | 43777320000 |  61622300000 |  56754800000 |  64446480000 |  57377900000 |  58560530000 |  58316150000 |  58179190000 |  60350330000 |  59769680000 |  58165490000 |  57400460000 |  61976250000 |  61919820000 |  58153700000 |  53728710000 |  59588790000 |  58020640000 |  59104460000 |  59536680000 |  61495520000 |  61475360000 |  61019730000 |  60991510000 |  62697110000 |  62294830000 |  61727450000 |  62639770000 |  61127930000 |  61082560000 |  60833120000 |  59634760000 |  59902200000 |  61769540000 |  60751220000 |  61128810000 |  62491990000 |  60173640000 |  59293460000 |  55432780000 |  58833170000 |  61998760000 |  62149210000 |  62233860000 |  62246180000 |  62611360000 |  61717780000 |  61347980000 |  62094550000 |  59990430000 |  60345710000 |  62741180000 |  60641790000 |  55783880000 |  58767720000 |  60770120000 |  58358820000 |  58320520000 |  60127910000 |  62526050000 |  62566750000 |  62944610000 |  59929090000 |  61716990000 |
|   CPU_CLK_UNHALTED_CORE  |  FIXC1  | 96208510000 | 368645900000 | 371055400000 | 370969900000 | 372085800000 | 364358600000 | 367211800000 | 367242000000 | 370226100000 | 364819800000 | 363818200000 | 365276600000 | 364461100000 | 364662900000 | 365781600000 | 367167700000 | 371384200000 | 371301000000 | 363389600000 | 363834000000 | 364450500000 | 364447400000 | 363733800000 | 363612600000 | 370368300000 | 366458200000 | 365524700000 | 365878200000 | 364269400000 | 364454800000 | 365806300000 | 365974500000 | 366383300000 | 365023400000 | 365124100000 | 362526100000 | 362391000000 | 363673400000 | 363736700000 | 366067100000 | 365980900000 | 365015400000 | 364907000000 | 364949700000 | 365149500000 | 364883300000 | 364132200000 | 364249800000 | 364270200000 | 365043800000 | 365946300000 | 364987000000 | 365392000000 | 367092200000 | 366511000000 | 371098200000 | 365091900000 | 365048300000 | 363682600000 | 364932400000 | 365675700000 | 369511100000 | 367641200000 | 369853800000 |
|   CPU_CLK_UNHALTED_REF   |  FIXC2  | 89957760000 | 346375900000 | 350737500000 | 349330800000 | 350497200000 | 345596800000 | 347593500000 | 347687000000 | 348810600000 | 344728400000 | 345181200000 | 345131200000 | 345091900000 | 345308400000 | 346175900000 | 347619000000 | 349786100000 | 351011200000 | 344979400000 | 345025300000 | 345124900000 | 345131000000 | 345126100000 | 345107700000 | 350217100000 | 349552800000 | 346071500000 | 346187300000 | 345646800000 | 345857100000 | 346008100000 | 346383100000 | 344951000000 | 345275600000 | 345118000000 | 344810900000 | 344793100000 | 344985400000 | 345150100000 | 346239600000 | 346342500000 | 345205400000 | 345087600000 | 345034000000 | 345087700000 | 344895600000 | 344977100000 | 345099400000 | 344925200000 | 345039000000 | 345942100000 | 344939700000 | 345563200000 | 347348400000 | 347063400000 | 350331200000 | 345036600000 | 345069300000 | 345021500000 | 345099100000 | 347144300000 | 348534100000 | 346937200000 | 349535300000 |
| UOPS_RETIRED_SCALAR_SIMD |   PMC0  |  2753307000 |  18629040000 |  19188990000 |  19841200000 |  18845050000 |  19455330000 |  19574860000 |  19501460000 |  19837010000 |  19784580000 |  19602130000 |  19352570000 |  19809750000 |  19820230000 |  18960390000 |  17830030000 |  19260290000 |  18903770000 |  19803450000 |  19841200000 |  19679730000 |  19683910000 |  19698600000 |  19734250000 |  19889440000 |  19813940000 |  19725860000 |  19841210000 |  19751030000 |  19755220000 |  19388220000 |  19105100000 |  19188990000 |  19625190000 |  19686010000 |  19772000000 |  19797160000 |  19828610000 |  19606320000 |  18564040000 |  18792620000 |  19629390000 |  19667140000 |  19667140000 |  19614710000 |  19753120000 |  19807650000 |  19727960000 |  19843300000 |  19801350000 |  19100910000 |  19748920000 |  19233020000 |  17916010000 |  18882800000 |  19149140000 |  19503560000 |  19514040000 |  19853780000 |  19778290000 |  19562280000 |  19633580000 |  19637770000 |  19883140000 |
| UOPS_RETIRED_PACKED_SIMD |   PMC1  |   780039900 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 | 1.844674e+19 |
+--------------------------+---------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+-------------------------------+---------+----------------+-------------+--------------+--------------+
|             Event             | Counter |       Sum      |     Min     |      Max     |      Avg     |
+-------------------------------+---------+----------------+-------------+--------------+--------------+
|     INSTR_RETIRED_ANY STAT    |  FIXC0  |  3845477390000 | 43777320000 |  64446480000 | 6.008558e+10 |
|   CPU_CLK_UNHALTED_CORE STAT  |  FIXC1  | 23154850010000 | 96208510000 | 372085800000 | 3.617945e+11 |
|   CPU_CLK_UNHALTED_REF STAT   |  FIXC2  | 21909621160000 | 89957760000 | 351011200000 | 342337830625 |
| UOPS_RETIRED_SCALAR_SIMD STAT |   PMC0  |  1230431087000 |  2753307000 |  19889440000 | 1.922549e+10 |
| UOPS_RETIRED_PACKED_SIMD STAT |   PMC1  |   1.162145e+21 |   780039900 | 1.844674e+19 | 1.815851e+19 |
+-------------------------------+---------+----------------+-------------+--------------+--------------+

+-------------------------------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+----------------+--------------+--------------+--------------+--------------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|             Metric            | HWThread 0 |  HWThread 1  |  HWThread 2  |  HWThread 3  |  HWThread 4  |  HWThread 5  |  HWThread 6  |  HWThread 7  |  HWThread 8  |  HWThread 9  |  HWThread 10 |  HWThread 11 |  HWThread 12 |  HWThread 13 |  HWThread 14 |  HWThread 15 |  HWThread 16 |  HWThread 17 |  HWThread 18 |  HWThread 19 |  HWThread 20 |  HWThread 21 |  HWThread 22 |  HWThread 23 |  HWThread 24 |  HWThread 25 |  HWThread 26 |  HWThread 27 |  HWThread 28 |  HWThread 29 |  HWThread 30 |  HWThread 31 |  HWThread 32 |  HWThread 33 |  HWThread 34 |  HWThread 35 |  HWThread 36 |  HWThread 37 |  HWThread 38 |  HWThread 39 |  HWThread 40 |  HWThread 41 |  HWThread 42 |  HWThread 43 |   HWThread 44  |  HWThread 45 |  HWThread 46 |  HWThread 47 |  HWThread 48 | HWThread 49 |  HWThread 50 |  HWThread 51 |  HWThread 52 |  HWThread 53 |  HWThread 54 |  HWThread 55 |  HWThread 56 |  HWThread 57 |  HWThread 58 |  HWThread 59 |  HWThread 60 |  HWThread 61 |  HWThread 62 |  HWThread 63 |
+-------------------------------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+----------------+--------------+--------------+--------------+--------------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+
|      Runtime (RDTSC) [s]      |     3.9000 |       3.8907 |       3.9068 |       3.8929 |       3.8897 |       3.9060 |       3.9032 |       3.9036 |       3.8911 |       3.8920 |       3.9072 |       3.8902 |       3.9018 |       3.9021 |       3.8995 |       3.8978 |       3.8882 |       3.9050 |       3.9081 |       3.9065 |       3.9014 |       3.9011 |       3.9075 |       3.9078 |       3.9094 |       3.9148 |       3.9091 |       3.9085 |       3.9098 |       3.9118 |       3.9039 |       3.9046 |       3.9115 |       3.8992 |       3.8987 |       3.9107 |       3.9110 |       3.9055 |       3.9043 |       3.8887 |       3.8983 |       3.8976 |       3.8967 |       3.8959 |         3.8946 |       3.8950 |       3.9028 |       3.9025 |       3.9007 |      3.8933 |       3.8942 |       3.8938 |       3.8963 |       3.8955 |       3.9105 |       3.9004 |       3.8916 |       3.8925 |       3.9061 |       3.8970 |       3.9089 |       3.9102 |       3.8891 |       3.9052 |
|      Runtime unhalted [s]     |    68.7205 |     263.3190 |     265.0401 |     264.9790 |     265.7761 |     260.2566 |     262.2946 |     262.3162 |     264.4477 |     260.5860 |     259.8706 |     260.9123 |     260.3298 |     260.4740 |     261.2730 |     262.2631 |     265.2749 |     265.2155 |     259.5645 |     259.8819 |     260.3223 |     260.3200 |     259.8103 |     259.7238 |     264.5493 |     261.7563 |     261.0895 |     261.3420 |     260.1929 |     260.3253 |     261.2907 |     261.4108 |     261.7028 |     260.7315 |     260.8034 |     258.9477 |     258.8512 |     259.7672 |     259.8124 |     261.4770 |     261.4154 |     260.7258 |     260.6483 |     260.6788 |       260.8215 |     260.6314 |     260.0949 |     260.1789 |     260.1935 |    260.7460 |     261.3907 |     260.7055 |     260.9948 |     262.2092 |     261.7940 |     265.0706 |     260.7804 |     260.7493 |     259.7738 |     260.6665 |     261.1974 |     263.9370 |     262.6013 |     264.1818 |
|          Clock [MHz]          |  1497.2768 |    1490.0093 |    1481.0980 |    1486.7195 |    1486.2292 |    1476.0007 |    1479.0138 |    1478.7377 |    1485.9514 |    1481.5919 |    1475.5860 |    1481.7157 |    1478.5760 |    1478.4672 |    1479.2864 |    1478.7277 |    1486.4425 |    1480.9227 |    1474.7098 |    1476.3169 |    1478.3917 |    1478.3529 |    1475.4792 |    1475.0662 |    1480.5521 |    1467.7054 |    1478.6934 |    1479.6284 |    1475.4259 |    1475.2792 |    1480.1038 |    1479.1812 |    1486.9813 |    1480.0693 |    1481.1537 |    1471.9245 |    1471.4519 |    1475.8359 |    1475.3884 |    1480.1687 |    1479.3805 |    1480.3379 |    1480.4034 |    1480.8067 |      1481.3868 |    1481.1314 |    1477.7333 |    1477.6867 |    1478.5158 |   1481.1670 |    1480.9527 |    1481.3629 |    1480.3309 |    1479.5754 |    1478.4459 |    1482.9868 |    1481.3725 |    1481.0552 |    1475.7188 |    1480.4572 |    1474.7327 |    1484.2582 |    1483.5444 |    1481.3794 |
|              CPI              |     2.1977 |       5.9823 |       6.5379 |       5.7562 |       6.4848 |       6.2219 |       6.2969 |       6.3123 |       6.1346 |       6.1038 |       6.2549 |       6.3637 |       5.8807 |       5.8893 |       6.2899 |       6.8337 |       6.2325 |       6.3995 |       6.1483 |       6.1111 |       5.9265 |       5.9283 |       5.9609 |       5.9617 |       5.9073 |       5.8826 |       5.9216 |       5.8410 |       5.9591 |       5.9666 |       6.0133 |       6.1369 |       6.1164 |       5.9094 |       6.0102 |       5.9305 |       5.7990 |       6.0437 |       6.1345 |       6.6038 |       6.2207 |       5.8875 |       5.8715 |       5.8642 |         5.8662 |       5.8277 |       5.9000 |       5.9374 |       5.8664 |      6.0850 |       6.0642 |       5.8173 |       6.0254 |       6.5806 |       6.2366 |       6.1066 |       6.2560 |       6.2593 |       6.0485 |       5.8365 |       5.8446 |       5.8704 |       6.1346 |       5.9927 |
|   DP [MFLOP/s] (SSE assumed)  |  1105.9966 | 9.482549e+12 | 9.443314e+12 | 9.477183e+12 | 9.484853e+12 | 9.445410e+12 | 9.452034e+12 | 9.451235e+12 | 9.481504e+12 | 9.479255e+12 | 9.442362e+12 | 9.483683e+12 | 9.455609e+12 | 9.454790e+12 | 9.461138e+12 | 9.465167e+12 | 9.488471e+12 | 9.447870e+12 | 9.440284e+12 | 9.444143e+12 | 9.456402e+12 | 9.457233e+12 | 9.441804e+12 | 9.441079e+12 |      nil     | 9.424115e+12 |      nil     | 9.439403e+12 | 9.436182e+12 | 9.431350e+12 | 9.450317e+12 | 9.448671e+12 | 9.432071e+12 |      nil     | 9.463138e+12 | 9.433991e+12 | 9.433330e+12 | 9.446569e+12 | 9.449484e+12 | 9.487251e+12 | 9.463883e+12 | 9.465765e+12 | 9.467771e+12 | 9.469752e+12 |   9.472951e+12 | 9.471998e+12 | 9.453121e+12 | 9.453918e+12 | 9.458145e+12 |     nil     | 9.473942e+12 | 9.474905e+12 | 9.468750e+12 | 9.470799e+12 | 9.434483e+12 | 9.458904e+12 | 9.480220e+12 | 9.477996e+12 | 9.444980e+12 | 9.467159e+12 | 9.438439e+12 | 9.435250e+12 | 9.486302e+12 | 9.447343e+12 |
|   DP [MFLOP/s] (AVX assumed)  |  1506.0171 |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |       nil      |      nil     |      nil     |      nil     |      nil     |     nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |
| DP [MFLOP/s] (AVX512 assumed) |  2306.0580 |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     | 37891805943136 |      nil     |      nil     |      nil     |      nil     |     nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |      nil     |
|        Packed [MUOPS/s]       |   200.0102 | 4.741275e+12 | 4.721657e+12 |      nil     |      nil     | 4.722705e+12 | 4.726017e+12 | 4.725617e+12 |      nil     | 4.739628e+12 | 4.721181e+12 | 4.741841e+12 | 4.727805e+12 |      nil     | 4.730569e+12 | 4.732584e+12 |      nil     | 4.723935e+12 |      nil     | 4.722072e+12 | 4.728201e+12 | 4.728617e+12 | 4.720902e+12 | 4.720539e+12 | 4.718589e+12 | 4.712058e+12 | 4.718972e+12 |      nil     | 4.718091e+12 |      nil     |      nil     | 4.724336e+12 | 4.716036e+12 | 4.730956e+12 | 4.731569e+12 | 4.716995e+12 | 4.716665e+12 | 4.723284e+12 | 4.724742e+12 | 4.743625e+12 |      nil     | 4.732882e+12 | 4.733886e+12 |      nil     |   4.736476e+12 | 4.735999e+12 | 4.726561e+12 | 4.726959e+12 | 4.729072e+12 |     nil     | 4.736971e+12 | 4.737453e+12 | 4.734375e+12 | 4.735400e+12 | 4.717242e+12 | 4.729452e+12 |      nil     | 4.738998e+12 | 4.722490e+12 | 4.733579e+12 | 4.719219e+12 |      nil     |      nil     | 4.723671e+12 |
|        Scalar [MUOPS/s]       |   705.9762 |    4788.1304 |    4911.6446 |    5096.7999 |    4844.8271 |    4980.9228 |    5015.0388 |    4995.8115 |    5098.0468 |    5083.3667 |    5016.8866 |    4974.6903 |    5077.1371 |    5079.3830 |    4862.2918 |    4574.3642 |    4953.4687 |    4840.9737 |    5067.2963 |    5079.0312 |    5044.2364 |    5045.7514 |    5041.2787 |    5050.0146 |    5087.6252 |    5061.2970 |    5046.1914 |    5076.4842 |    5051.6869 |    5050.1714 |    4966.3199 |    4892.9461 |    4905.7968 |    5033.1879 |    5049.4402 |    5055.8762 |    5061.9552 |    5077.1120 |    5021.7441 |    4773.7894 |    4820.6662 |    5036.3149 |    5047.0701 |    5048.1259 |      5036.3695 |    5071.3979 |    5075.2630 |    5055.2704 |    5087.0995 |   5085.9702 |    4904.9562 |    5071.8756 |    4936.1747 |    4599.1578 |    4828.7518 |    4909.5361 |    5011.6725 |    5013.1893 |    5082.7017 |    5075.2657 |    5004.6075 |    5021.1512 |    5049.3966 |    5091.4915 |
+-------------------------------+------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+----------------+--------------+--------------+--------------+--------------+-------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+--------------+

+------------------------------------+-----------------+-----------+----------------+--------------+
|               Metric               |       Sum       |    Min    |       Max      |      Avg     |
+------------------------------------+-----------------+-----------+----------------+--------------+
|      Runtime (RDTSC) [s] STAT      |        249.6704 |    3.8882 |         3.9148 |       3.9011 |
|      Runtime unhalted [s] STAT     |      16539.2086 |   68.7205 |       265.7761 |     258.4251 |
|          Clock [MHz] STAT          |      94704.9348 | 1467.7054 |      1497.2768 |    1479.7646 |
|              CPI STAT              |        384.7852 |    2.1977 |         6.8337 |       6.0123 |
|   DP [MFLOP/s] (SSE assumed) STAT  | 557990020001106 | 1105.9966 |  9488471000000 | 8.718594e+12 |
|   DP [MFLOP/s] (AVX assumed) STAT  |       1506.0171 | 1506.0171 |      1506.0171 |      23.5315 |
| DP [MFLOP/s] (AVX512 assumed) STAT |       nil       | 2306.0580 | 37891805943136 | 5.920595e+11 |
|        Packed [MUOPS/s] STAT       | 226921748000200 |  200.0102 |  4743625000000 | 3.545652e+12 |
|        Scalar [MUOPS/s] STAT       |     315402.4685 |  705.9762 |      5098.0468 |    4928.1636 |
+------------------------------------+-----------------+-----------+----------------+--------------+

```