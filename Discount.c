#include <stdio.h>
int main()
{
    float fPrice;
    float fDiscount;
    float fTotal;
    printf("please enter Price:\n");
    scanf("%f",&fPrice);
    printf("please enter Discount:\n");
    scanf("%f",&fDiscount);
    fTotal = fPrice*(1-(fDiscount/100));
    printf("Total price to be paid %.2f",fTotal);
    return 0;
}
