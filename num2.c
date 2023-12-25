
#include <stdio.h>

int main()
{
    char name[6];
    int number;
    printf("What is your name?\n");
    scanf("%s",name);
    printf("My name is %s\n",name);
    printf("what is your phone number?\n");
    scanf("%d",&number);
    printf("My phone number is %d",number);
    return 0;
}

