#include <stdio.h>
int funSmall(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return x;
    }
    else if (y < z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int funBig(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, num, ans;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &num);
    if (num == 0)
    {
       printf("%d",funSmall(a, b, c));

        
    }
    else if (num == 1)
    {
        printf("%d",funBig(a, b, c));
        
    }
    return 0;
}