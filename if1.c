#include <stdio.h>

int main()
{
    char cGrades;
    printf("Please enter your grades:\nA\nB\nC\nF\n");
    scanf("%c",&cGrades);
    if(cGrades=='A')
    {
    printf("Your are a topper");    
    }
    if(cGrades=='B')
    {
    printf("Your are a better student");
    }
    if(cGrades=='C')
    {
    printf("Your are a average student");
    }
    if(cGrades=='F')
    {
    printf("Your are Fail");
    }


    return 0;
}

 