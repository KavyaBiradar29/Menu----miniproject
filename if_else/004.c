#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d",&marks);

    if(marks<0 || marks>100 )
    {
        printf("Ivalid input\n");
        return 0;
    }
    if(marks>=85 && marks<=100)
    {
        printf("Grade is A\n");
    }
    else if("marks>=75 && marks<=84")
    {
        printf("Grade is B\n");
    }
    else if (marks>=60 && marks<=75)
    {
        printf("Grade is C\n");
    }
    else if(marks>=45 && marks<=59)
    {
    printf("Grade is D\n");
    }
    else
    {
        printf("Failed");
    }

}