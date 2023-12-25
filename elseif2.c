#include<stdio.h>
#include<string.h>
int main()
{
    char sChoice[20];
    char sItem1[10]="Tea";
    char sItem2[10]="Coffee";
    char sItem3[10]="Water";
    char sItem4[10]="CoolDrink";
    printf("what do you want to take:\n1.Tea\n2.Coffee\n3.Water\n4.CoolDrink\n");
    scanf("%s",sChoice);
    if(strcmp(sChoice,sItem1)==0)
    printf("Your tea is ready\n");
    else if(strcmp(sChoice,sItem2)==0)
    printf("Your coffee is ready\n");
    else if(strcmp(sChoice,sItem3)==0)
    printf("Your Water is ready\n");
    else if(strcmp(sChoice,sItem4)==0)
    printf("Your CoolDrink is ready\n");
    return 0;
}

    
    
    