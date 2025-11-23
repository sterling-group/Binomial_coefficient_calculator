# Binomial_coefficient_calculator
Calculates no. of determinants possible for a given numbers K and N.
K! and N! can be numbers with an arbitrary length, limited only by the memory.

## For setup on ganymede2 
clone the repository

1. load **Boost** <br>
    run "module purge" <br>
    run "module load gnu12/12.4.0 mpich/3.4.3-ofi boost/1.81.0"
2. Find **Boost include path** <br>
   run "find $BOOST_ROOT -name "cpp_int.hpp" 2>/dev/null"
3. From terminal output, copy path upuntil "/include"
4. run **g++ -I/\<PASTE THE PATH HERE\> -o \<output file name\> binom_coeff.cpp**
5. run the program with **./\<output file name\>**

## Fortran version can be found under the file extension .f90
This version can be compiled directly with **gfortran** command and no additional libraries are needed
run **gfortran bi_coeff.f90 -o \<desired name for the executable\>**
