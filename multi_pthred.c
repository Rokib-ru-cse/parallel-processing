#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //In the C and C++ programming languages, unistd. h is the name of the header file that provides access to the POSIX operating system API. It is defined by the POSIX. ... E.g. In Cygwin, a header file can be found in /usr/include that sub-includes a file of the same name in /usr/include/sys
#include <pthread.h> //It allows us to create multiple threads for concurrent process flow. ... We must include the pthread. h header file at the beginning of the script to use all the functions of the pthreads library. To execute the c file, we have to use the -pthread or -lpthread in the command line while compiling the file.

int a = 0;

void *func(void *var)
{
    int *id = (int *)var; //int * is a type — specifically it is pointer to int.(type)x is a type cast. It says to reinterpret or convert x to that type. With pointer types it always means reinterpret. i is of type char. So &i is of type char *. Casting it to int * makes it of type int * so that p can be assigned to it. When you subsequently write via p you'll be writing a whole int.
    static int b = 0;

    b = 7;
    a = 7;
    printf("the id of the thread is : %d\n", *id);
    printf("the valufe of static variable b is : %d\n", b);
    printf("the valufe of global variable a is : %d\n", a);
}

int main()
{

    pthread_t th_id;
    printf("before using threading\n");

    for (int i = 0; i < 4; i++)
    {
        pthread_create(&th_id, NULL, func, (void *)th_id);
    }

    pthread_exit(NULL);

    // pthread_join(th_id, NULL);

    printf("after thread\n");

    return 0;
}
