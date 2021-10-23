#include<stdio.h>
#include<math.h>
int main()
{
    int num,count =2,flag=1,inum;
    printf("Enter a number\n");
    scanf("%d",&num);

    inum = sqrt(num);

    while(count<=inum)
    {
        if(num%count == 0)
        {
            flag = 0;
            break;

        }
        count++;
    }

    if(flag)
    {
        printf("%d is not a prime number\n",num);

    }

    else
    {
        printf("%d is a prime number\n",num);
    }

    return 0;

}