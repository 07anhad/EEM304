#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100000
void bubblesort(int a[], int N, int choice);
void selectionsort(int a[], int N, int choice);
void insertionsort(int a[], int N, int choice);


int main()
{
    int num = 0, c = 0, i;
    int is[max];
    srand(time(NULL));

    double time_taken;
    scanf("%d", &num);
    scanf("%d", &c);
    for (i = 0; i < num; i++)
    {
        is[i] = rand() % 100;
    }
    
    clock_t t;
    t = clock();
    insertionsort(is, num, c);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("%f", time_taken); printf("\n");

    t = clock();
    selectionsort(is, num, c);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("%f", time_taken); printf("\n");


    t = clock();
    bubblesort( is, num, c);
    for(int i=0;i<num;i++)
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("%f", time_taken); printf("\n");


    return 0;

}
void insertionsort(int a[], int N, int choice)
{
    int i, x = 0, j;
    if (choice == 0)
    {
        for (i = 1; i < N; i++)
        {
            x = a[i];
            j = i - 1;
            while ( j >= 0 && a[j] > x)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = x;
        }
    }
    else
    {
        for (i = 1; i < N; i++)
        {
            x = a[i];
            j = i - 1;
            while ( j >= 0 && a[j] < x)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = x;
        }
    }

}
void selectionsort(int a[], int N, int choice)
{
    int i = 0, j = 0, t = 0;
    if (choice == 0)
    {
        for (i = 0; i < N - 1; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                if (a[i] > a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
    else
    {
        for (i = 0; i < N - 1; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                if (a[i] < a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }

}
void bubblesort(int a[], int N, int choice)
{
    int i = 0, j = 0, t = 0;
    if (choice == 0)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j <= N - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j <= N - i - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }

}

