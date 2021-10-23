#include <stdio.h>
void primeSeive(int n)
{
    int prime[100] = {0}, i, j;
    for (i = 2; i <= n; i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i;i<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }

    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            printf("%d",i);

        }
        printf("\n");

    }

}

int main()
{
    int n;
    scanf("%d",&n);
    primeSeive(n);
    return 0;
}