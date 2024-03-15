/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/

#include<stdio.h>
int main(void)
{
    
    //for unsigned data type
    
   /* unsigned int num1,num2;
    
    printf("Enter Number1:");
    scanf("%u",&num1);
    printf("Enter Number2 :");
    scanf("%u",&num2);
    printf("sum=%u\n",num1+num2);
    printf("differece=%u\n",num1-num2);
    printf("product=%u\n",num1*num2); */




//for signed datatype

     int num1,num2;
    printf("Enter Number1:");
    scanf("%d",&num1);
    printf("Enter Number2 :");
    scanf("%d",&num2);
    printf("sum=%u\n",num1+num2);
    printf("differece=%d\n",num1-num2);
    printf("product=%d\n",num1*num2); 
    
    

    return 0;
    
}
