#include<stdio.h>
int main()
{
    int iContestants;
    printf("Please select the contestant whose winning price you want know :\n1.Amardeep\n2.Priyanka\n3.Prashanth\n");
    scanf("%d",&iContestants);
    if(iContestants==1)
    printf("Your contestant won price is 25lakhs");
    else if(iContestants==2)
    printf("Your contestant  won price is 15lakhs");
    else if(iContestants==3)
    printf("Your contestant won price is 10lakhs");
    return 0;
}