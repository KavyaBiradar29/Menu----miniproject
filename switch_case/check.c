#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A'...'Z':
        printf("Uppercase alphabet\n");
        break;

        case 'a'...'z':
        printf("lowercase alphabet\n");
        break;

        case '0'...'9':
        printf("Digit\n");
        break;

        default:
        printf("it is a symbol\n");
    }


}