/* 
Description 
Name:
Date and Day:
sample i/p:
sample o/p:   */

#include <stdio.h>
int main ()
{
    
       char ch;
       int num;
       float fnum;
       double dnum;

       printf("Enter the character : ");
       scanf("%c", &ch);
       printf("Enter the number : ");
       scanf("%d", &num);
       printf("Enter the value : ");
       scanf("%g", &fnum);
       printf("Enter the value : ");
       scanf("%lg", &dnum);


       printf("%d %c %g %lg\n", num, ch, fnum, dnum);

       return 0;


}