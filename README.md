# Build In C++ data types BenchMark

use ```.cpp``` files to complie yourself  
use ```.exe``` files to run precompiled files  

# Difference between ```honest``` and ```percent```
In "honest" testing for all data types we have two operations:
```
l *= a[i];
l /= 100;
```
While in "percent" testing tests for ```float``` and ```double``` differ:
all numbers divide by 100 in initializing, and then multiplied, so we have only 1 operation in testing time - ```l *= a[i]```

# Compiler
All ```.exe``` files compiled with gnu compiler
```
C:\Windows\System32>g++ --version  
g++ (GCC) 12.2.0  
Copyright (C) 2022 Free Software Foundation, Inc.
```
If you want to get optimal test results, you should complile files yourself.
