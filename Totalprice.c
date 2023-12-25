#include <stdio.h>

int main()
{
    int iPrice;
    int iDiscount;
    float fTotal;
    printf("please enter Price");
    scanf("%d",&iPrice);
    printf("please enter Discount");
    scanf("%d",&iDiscount);
    fTotal = iPrice*(1-iDiscount/100);
    printf("Total price to be paid %f",fTotal);
    
    return 0;
}
