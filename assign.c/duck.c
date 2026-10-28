#include<stdio.h>
int main()
{
    int limit,res=0;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&limit);

    while(limit>0)
    {
      res=limit%10;
      if(res==0)
      {
        sum=1;
        break;

      }
      limit=limit/10;  
    }
      if(sum==1)
      {
        
        printf("duck number\n");

      }
      else{
        printf("Not a duck number\n");
      
      
    }
    
}