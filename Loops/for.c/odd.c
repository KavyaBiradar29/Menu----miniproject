#include<stdio.h>
int main()
{
    int limit,i;
    printf("Enter the number: ");
    scanf("%d",&limit);
    if(limit%2==0)
    limit--;
    for(i=limit;i>=1;i=i-2)
    {
        printf("%d ",i);
    }
}