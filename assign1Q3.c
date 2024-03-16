/*Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value?  */

#include<stdio.h>
int main(void)
{
char ch;
int num;
printf("Enter a Character:");
scanf("%c",&ch);
printf("Ascii value in decimal format =%d\n",ch);
printf("______________________________________________\n");
printf("Ascii value in hexadecimal format =%x\n",ch);
printf("______________________________________________\n");
printf("Ascii value in octal format =%o\n",ch);
printf("______________________________________________\n");
printf("Enter an ASCII value:");
scanf("%d",&num);
printf("character for user entered ASCII value is= %c\n",num);
printf("______________________________________________\n");
return 0;
}
