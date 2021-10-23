#include <stdio.h>
#include <math.h>

struct complex
{
    int real, img;
};

int main()
{
    struct complex a, b, c;

    //Addition

    printf("Enter a and b where a + ib is the first complex number.");
    printf("\na = ");
    scanf("%d", &a.real);
    printf("b = ");
    scanf("%d", &a.img);
    printf("Enter c and d where c + id is the second complex number.");
    printf("\nc = ");
    scanf("%d", &b.real);
    printf("d = ");
    scanf("%d", &b.img);

    c.real = a.real + b.real;
    c.img = a.real + b.img;

    if (c.img >= 0)
    {
        printf("%d + %di", c.real, c.img);
    }

    else
    {

        printf("%d  %di", c.real, c.img);
    }

    return 0;
}
