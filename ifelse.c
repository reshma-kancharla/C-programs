#include <stdio.h>
int main()
{
    float fPrice;
    float fDiscount;
    float fTotal;
    printf("please enter Price:\n");
    scanf("%f",&fPrice);
    if(fPrice>=1000){
    printf("please enter Discount:\n");
    scanf("%f",&fDiscount);
    fTotal = fPrice*(1-(fDiscount/100));
    printf("Total price to be paid %.2f",fTotal);
    }
    else{
        printf("total price is %.2f",fPrice);
    }
    return 0;
    
}
