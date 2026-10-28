#include<stdio.h>
int main()
{
    int limit,i,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(i=1;i<=limit;i++)
    {
        sum=sum+i;

    }

    printf("Sum of %d natural numbers %d\n",limit,sum);

    printf("average is %g\n",(float)sum/limit);

    return 0;

}