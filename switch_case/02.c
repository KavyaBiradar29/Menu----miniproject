#include<stdio.h>
int main()
{
    char dir;
    printf("Enter the character: ");
    scanf("%c",&dir);

    switch(dir)
    {
        case 'N':
        printf("North direction\n");
        break;

        case 'E':
        printf("East direction\n");
        break;

        case 'W':
        printf("West direction\n");
        break;

        case 'S':
        printf("South direction\n");
        break;

        default:
        printf("Invalid input");
        break;



    }
    
}