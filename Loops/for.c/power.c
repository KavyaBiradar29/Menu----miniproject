#include<stdio.h>
int main()
{
    int limit,i,res=1;
    printf("Enter a valuee: ");
    scanf("%d",&limit);


    for(i=1;i<=limit;i++)
    {
        res=res*2;
        printf("%d ",res);
       
    }
}