#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    int size,lines,i,j;
    printf("Enter number of lines: ");
    scanf("%d%d",&size,&lines);

    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=size;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }



    
}