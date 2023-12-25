#include <stdio.h>

int main()
{
    char sChoice;  
    printf("what do you want to take:\n1.Tea\n2.Coffee\n3.Water\n4.CoolDrink\n");
    scanf("%s",sChoice);
    if(sChoice=='Tea')
    printf("Your tea is ready");
    if(sChoice=='Coffee')
    printf("Your coffee is ready");
    if(sChoice=='Water')
    printf("Your Water is ready");
    if(sChoice=='CoolDrink')
    printf("Your CoolDrink is ready");

    return 0;
}
