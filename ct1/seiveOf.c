#include <stdio.h> 
#include <math.h> 
#define n 10000
int main()
{
int i,j,a[n]; for(i=0;i<n;i++) a[i]=1; for(i=2;i<sqrt(n);i++) for(j=2*i;j<n;j+=i) a[j]=0; for(i=2;i<n;i++) if(a[i]==1) printf("%d ,",i);
}