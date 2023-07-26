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
