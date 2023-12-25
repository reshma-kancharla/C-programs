#include <stdio.h>
int main()
{
    int iNum[100];
    int iLen;
    printf("Enter the size of array:\n");
    scanf("%d",&iLen);
    for(int i=0;i<iLen;i++){
       printf("Enter element  %d:",i);
       scanf("%d",&iNum[i]);
       printf("Number[%d]=%d\n",i,iNum[i]);
    }
    printf("Thank you");
}