/*Write a program to print following pattern
*****
****
***
**
*    */


  #include <stdio.h>
  int main()
  {
      int row =5;
      for (int i=row;i>=1;i--)
       {
          for(int j=i;j>=1;j--)
          {
              printf("_*_");
          }
          printf("\n");
      }
      return 0;
 }

