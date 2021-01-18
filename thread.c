#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //In the C and C++ programming languages, unistd. h is the name of the header file that provides access to the POSIX operating system API. It is defined by the POSIX. ... E.g. In Cygwin, a header file can be found in /usr/include that sub-includes a file of the same name in /usr/include/sys
#include <pthread.h> //It allows us to create multiple threads for concurrent process flow. ... We must include the pthread. h header file at the beginning of the script to use all the functions of the pthreads library. To execute the c file, we have to use the -pthread or -lpthread in the command line while compiling the file.

void *func(void *var)
{
    sleep(2); //DESCRIPTION. The sleep() function shall cause the calling thread to be suspended from execution until either the number of realtime seconds specified by the argument seconds has elapsed or a signal is delivered to the calling thread and its action is to invoke a signal-catching function or to terminate the process.
    printf("we are using thread\n");
    return NULL;
}

int main()
{

    pthread_t t_id;
    printf("before using threading\n");

    pthread_create(&t_id, NULL, func, NULL);

    pthread_join(t_id,NULL);

    printf("after thread\n");

    return 0;
}
