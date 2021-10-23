// C program to find the length of string
#include <stdio.h>
#include <string.h>

int main()
{
	char Str[1000];
	int i,count=0;

	printf("Enter the String: ");
	scanf("%s", Str);

	for (i = 0; Str[i] != '\0'; ++i)
    {
        count++;
    }

	printf("Length of Str is %d", count);

    
	return 0;
}
