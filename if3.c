#include <stdio.h>
#include<string.h>

int main()
{
    char sChoice[20];  
    char item1[10]="Tea";
    printf("what do you want to take:\n1.Tea\n2.Coffee\n3.Water\n4.CoolDrink\n");
    scanf("%s",sChoice);
    if(strcmp(sChoice,item1)==0)
    printf("Your tea is ready");
    if(strcmp(sChoice,'Coffee')==0)
    printf("Your coffee is ready");
    if(strcmp(sChoice,'Water')==0)
    printf("Your Water is ready");
    if(strcmp(sChoice,'CoolDrink')==0)
    printf("Your CoolDrink is ready");
    return 0;
}