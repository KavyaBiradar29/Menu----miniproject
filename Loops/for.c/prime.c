#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Inavlid!");
    }
    int flag=1;
    
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        flag=0;
        break;
    
    }
    if(flag==1)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("NOt a prime number\n");
    }
}



