/*write a program to accept a number and print the number in character, decimal, octal and hex
formats.*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("num in character=%c\n",num);
	printf("________________________________\n");
    printf("num in Decimal=%d\n",num);
	printf("________________________________\n");
    printf("num in octal=%o\n",num);
	printf("________________________________\n");
    printf("num in hexadecimal=%x\n",num);
    


	return 0;
}

