#include<stdio.h>
int main()
{
    int option,quantity,total,Grandtotal=0,deliverycharge;
    printf("<-------WELCOME TO EMERTXE CAFFEE-------->\n");
   
    do 
    {

    printf("1.Pizza=100\n2.Coffee=40\n3.Pasta=300\n4.Mocktail=400\n");
    printf("Enter your choices: ");
    scanf("%d",&option);
    //coupons for orders above 1000
    switch(option)
    {
        case 1:
        printf("Pizza is added to your cart\n");
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total=100*quantity;
        Grandtotal=Grandtotal+total;
        printf("Total is %d\n",total);
        break;

        case 2:
        printf("Coffe is added to your cart\n");
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total=40*quantity;
        Grandtotal=Grandtotal+total;
        printf("Total is %d\n",total);
        break;

        case 3:
        printf("Pasta is added to your cart\n");
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total=300*quantity;
        Grandtotal=Grandtotal+total;
        printf("Total is %d\n",total);
        break;

        case 4:
        printf("Moctail is added to your cart\n");
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total=400*quantity;
        Grandtotal=Grandtotal+total;
        printf("Total is %d\n",total);
        break;

        case 5:
        printf("Exit\n");
        break;

        default:
        printf("Sorry your choice is not available\n");

    }

    }while(option>=1 && option<5);
     printf("Grand total is %d\n",Grandtotal);  

    //20% off above 1000
     if(Grandtotal>1000)
     {
       Grandtotal=Grandtotal*80/100;
       printf("Coupon applied, Your Grand total is %d\n",Grandtotal);
     }

     //Add delivery charge if grandtotal is below 200
     if(Grandtotal<200)
     {
        deliverycharge=Grandtotal+30;
        printf("Deliverycharge is added\n");
        printf("Grand total is %d\n",deliverycharge);
     }
     else
     {
        printf("Grand total is %d\n",Grandtotal);
     }
     printf("THANK YOU,VISIT AGAIN\n");

     return 0;


}
