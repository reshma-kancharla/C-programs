#include <stdio.h>

int main()
{
    int iItemPrice = 0;
    float iGST = 0.18;
    int iTotalPrice =0;
    printf("Enter the price:");
    scanf("%d",&iItemPrice);
    if(iItemPrice>500){
    iTotalPrice = iItemPrice*(1+iGST);
    printf("the price is %d",iTotalPrice);
    }
    return 0;   
}
    

