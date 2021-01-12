#include <stdio.h>
#include <pthread.h>

int not ;
int mat1[10][10], mat2[10][10], res[10][10];
int m, n;
void matrix_read()
{
    int i, j;

    printf('enter the size of matrix : ');
    scanf("%d %d", &m, &n);

    printf("enter matrix 1 : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter matrix 2 : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
}



void *multiplication(void *arg)
{
    long int num = (long int)arg;
    int i, j, k;

    // matrix_multiplication

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < n; k++)
            {   
                res[i][j] += mat1[j][k]*mat2[k][j];
            }
        }
    }
}

int main()
{
    long int i, j;
    pthread_t tid[10];

    matrix_read();

    printf('enter the number of thread : ');
    scanf("%d", &not );

    //creating thread
    for (i = 0; i < not ; i++)
    {
        pthread_create(&tid[i], NULL, multiplication, (void *)i);
    }
    for (j = 0; j < not ; j++)
    {
        pthread_join(tid[j], NULL);
    }
}