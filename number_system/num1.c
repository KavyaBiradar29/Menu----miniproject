#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1<n2)
    {
        if(n1<n3)
        {
            printf("n1 is smaller\n");
        }
        else{
            printf("n3 is smaller\n");
        }
    }
    else
    {
        if(n2<n3)
        {
            printf("n2 is smaller\n");
        }
        else
        {
            printf("n3 is smaller\n");
        }
    }
    

    return 0;

   
}