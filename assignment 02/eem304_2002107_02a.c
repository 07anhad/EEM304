#include <stdio.h>
void insertionsort(int a[], int N, int cho)
{
    int i, x = 0, j;
    if (cho == 0)
    {
        for (i = 1; i < N; i++)
        {
            x = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > x)
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
            while (j >= 0 && a[j] < x)
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = x;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }
}
int main()
{
    int num = 0, c = 0, arr[num], i;
    scanf("%d", &num);
    scanf("%d", &c);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionsort(arr, num, c);
    return 0;
}
