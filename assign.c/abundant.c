#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Eter the number: ");
    scanf("%d",&n);

    i=1;

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum>n)
    {
        printf("The number is abundant\n");
    }
    else{
        printf("The number is not abundant\n");
    }


}