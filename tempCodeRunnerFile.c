#include <stdio.h>
#include <time.h>
#include <malloc.h>
#define MAX 100000

void init(int *, int);
int search(int *, int, int);
int binsearch(int *, int, int, int);

int main()
{
    /* Calculate the time taken by fun() */
    int n = MAX, item = 20, idx;
    int a[n], i, j, x;
    /* int *a = (int *) malloc (n*sizeof(int)); */
    clock_t t;
    init(a, n);
    t = clock();
    /*    idx = search(a,n,item); */
    idx = binsearch(a, 0, n - 1, item);

    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds
    if (idx != -1)
        printf("\nItem found at index %d", idx);
    else
        printf("\nItem not found ");
    printf("\nSearch took %f seconds to execute \n", time_taken);
    return 0;
}

void init(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 100;
}

int search(int *a, int n, int item)
{

    int i;
    for (i = 0; i < n; i++)
        if (a[i] == item)
            return i;
    return -1;
}

int binsearch(int *a, int lo, int hi, int item)
{
    int mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (a[mid] == item)
            return mid;
        if (a[mid] < item)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}
