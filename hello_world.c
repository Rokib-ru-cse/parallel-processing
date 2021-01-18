#include <stdio.h>
#include <omp.h> // including openmp header




int main()
{


    //  # specify the block to be executed on parallel
    #pragma opm parallel{

        // print "hello world" from each thread 
        printf("hello world");
    }

    return 0;
}

//run openmp code = (gcc -fopenmp filename)