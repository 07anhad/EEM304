#include <stdio.h>
long long int factrec(int N)
{
    return N==0?1:N*factrec(N-1);
}
int main()
{
    int N;
    scanf("%d", &N);
    printf("%lld", factrec(N));

    return 0;
}
