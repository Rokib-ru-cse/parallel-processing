
// OpenMP program to print Hello World 
// using C language 
  
// OpenMP header 
#include <omp.h> 
  
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
  
    // Beginning of parallel region 
    #pragma omp parallel 
    { 
  
        printf("Hello World... from thread = %d\n",
               omp_get_thread_num()); 
    } 
    // Ending of parallel region 
    return 0;
}

// specifies number of thread = export OMP_NUM_THREADS=5
// compife openmp program = gcc -fopenmmp filename