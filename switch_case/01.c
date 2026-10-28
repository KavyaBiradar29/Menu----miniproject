#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch(num)
    {
        case 10:
        printf("num is 10\n");
        break;

        case 20:
        printf("num is 20\n");
        break;

        case 30:
        printf("num is 30\n");
        break;

        default:
        printf("Invalid input\n");
    

    }
}