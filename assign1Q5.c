/* Q5.Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’. */


#include<stdio.h>

   int main()
   {
    char newline = '\n'; char carriageReturn = '\r'; char tab = '\t'; char alert = '\a'; char backspace = '\b';

   printf("ASCII value for newline         '\\n'=%d\n", newline);
   printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   
   printf("ASCII value for carriageReturn  '\r' =%d\n", carriageReturn);
   printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
  
   printf("ASCII value for tab             '\t' =%d\n", tab);
   printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
  
   printf("ASCII value for alert           '\a' =%d\n", alert);
   printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
  
   printf("ASCII value for backspace       '\b' =%d\n", backspace);
   printf("------------------------------------------------------------------------------------------------------------------------------------------------------\n");
  
  return 0;
  }

