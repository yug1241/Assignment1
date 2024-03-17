/*Q.4 Write a program to print following pattern.
a. Using multiple printf statements
b. Using single printf statement
*
**
***
****
*****
*/

#include <stdio.h>
int main()
{
    int row =5;
    for (int i=row;i>=1;i--)//for row
    {
        for(int j=i;j<=5;j++)//for column
        {
            printf("_*_");
        }
        printf("\n");
    }
    return 0;
}






