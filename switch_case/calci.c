#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("Enter the expression: ");
    scanf("%d%c%d",&n1,&op,&n2);

    if(op=='/' && n2==0)
    {
        printf("we cnnot divide a number by zero\n");
        return 1;
    }

    switch(op)
    {
        case '+':
        printf("Addition is %d\n",n1+n2);
        break;

        case '-':
        printf("Substraction is %d\n",n1-n2);
        break;


        case '*':
        printf("Product is %d\n",n1*n2);
        break;

        case '/':
        printf("Division is %g\n",(float)n1/n2);
        break;

        default:
        printf("Invalid operation!");



    }
    
}