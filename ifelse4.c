#include <stdio.h>

int main()
{
    int iSubjects;
    printf("Please select your favourite subjects:\n1.Java\n2.Dsa\n3.Cosm\n4.Coa\n5.Edc\n");
    scanf("%d",&iSubjects);
    if(iSubjects==1)
    {
    printf("Your favourite subject is Java\n");
    }
    if(iSubjects==2)
    {
    printf("Your favourite subject is Dsa\n");
    }
    if(iSubjects==3)
    {
    printf("Your favourite subject is Cosm\n");
    }
    if(iSubjects==4)
    {
    printf("Your favourite subject is Coa\n");
    }
    if(iSubjects==5)
    {
    printf("Your favourite subject is Edc\n");
    }
    
    return 0;
}

