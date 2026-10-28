#include<stdio.h>
int main()
{
    int num;
    int res=0;
    printf("Enter the num: ");
    scanf("%d",&num);
    int temp=num;
     while(num>0)
     {
        res=num%10+res*10;
        num=num/10;
     }

     printf("reversed number is %d\n",res);
     if(res==temp)
     {
        printf("Palindrome");
     }
     else{
        printf("Not palindrome\n");
     }
}