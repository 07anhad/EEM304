#include <stdio.h>
int primetest(int NUM)
{
    int i, c = 0;
    for (i = 1; i <= NUM; i++)
    {
        if (NUM % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int x = primetest(n);
    if (x == 1)
    {
        printf("PRIME");
    }
    else if (x == 0)
    {
        printf("COMPOSITE");
    }
}