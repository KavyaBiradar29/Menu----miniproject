#include<stdio.h>
int main()
{
    int i,j,lines;
    printf("Enter the lines:");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)//lines
    {
        for(j=lines;j<=1;j--)//characters
        {
        printf("%d",j);
        }

    }
    printf("\n");
}