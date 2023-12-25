#include <stdio.h>

int main()
{
    char name[6];
    int roll_no;
    char branch[4];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("What is your roll_no?\n");
    scanf("%d",&roll_no);
    printf("What is your branch?\n");
    scanf("%s",branch);
    printf("My name is %s\nMy roll_no is %d\nMy name is %s\n",name,roll_no,branch);
    return 0;
}
