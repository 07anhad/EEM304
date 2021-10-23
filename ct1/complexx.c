#include <stdlib.h>
#include<stdio.h>
int main()
{
int i,j,m,n,k,d,c=0,s1,p,g;
char *a,*b,*s;
printf("Assumption: Second no. has greater n. of digits"); printf("\nEnter no. of digits in A\n");
scanf("%d",&m);
a=(char*)calloc(m+1,sizeof(char));
printf("Enter A\n");
scanf("%s",a);
printf("Enter no. of digits in B\n");
scanf("%d",&n);
b=(char*)calloc(n+1,sizeof(char));
printf("Enter B\n");
scanf("%s",b);
g=n+1;
s=(char*)calloc(g+1,sizeof(char));
p=g;
for(i=1;i<=m;i++)
{
s1=a[m-i]+b[n-i]+c-96;
s[p--]=(char)(s1%10+48);
c=s1/10;
}
for(i=m+1;i<=n;i++)
{
s1=b[n-i]+c-48;
s[p--]=(char)(s1%10+48);
c=s1/10;
}
s[p]=c+48;
for(i=0;i<=g;i++)
printf("%c",s[i]);
free(a);free(b);free(s);
}
