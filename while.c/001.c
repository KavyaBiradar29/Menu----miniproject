#include<stdio.h>
int main()
{
    int i=100;
    do
    {
        printf("Hello->%d\n",i);
        i++;
    }

    while(i<5);
    printf("outside of loops->%d\n",i);

    return 0;
}