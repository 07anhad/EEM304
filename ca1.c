#include<stdio.h>
int main()
{
    int i= 10;
    int k = 6;
    while(k%5){
        i = 0;
        for(;i<2;i++)
        {
            k = k+1;

        }
    }
    printf("%d",k);
}