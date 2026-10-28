#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value: ");
    scanf("%d",&n);
    
    if(n%2==0)
    n--;

    i=n;
    while(i>=1)
    {
        printf("%d ",i);
        i=i-2;
    }
}