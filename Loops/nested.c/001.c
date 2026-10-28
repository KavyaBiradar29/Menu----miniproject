#include<stdio.h>
int main()
{
   

    int lines,i,j;
    printf("Enter number of lines: ");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }



    
}