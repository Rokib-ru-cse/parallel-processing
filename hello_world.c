
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

/*
What is the meaning of * (&ptr) and *(*c) in C?
(&) -> address of operator( which gives address of opeartor)

(*) -> dereference operator which gives value particularly stored in memory location

let’s assume ptr is an pointer to an integer x whose memory location is 100 which store any integer let’s take 10 now ptr also has their own memory location which is 200

So address of ptr (&ptr) which is 200 after dereferencing *(&ptr) -> ×(200) -> 100

Now comes to the *(*c) it is nothing but a pointer to a pointer variable which hold the address of any other pointer let say c holding the address of ptr(above case) then after dereferences c (*c) it gives value at ptr which is the address of x now again dereference *(*c) which gives the gives value at x which is 10.

*/