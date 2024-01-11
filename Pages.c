#include <stdio.h>

int main()
{
    int iLetters;
    int iWords;
    int iLines;
    int iPages;
    char sUserAns[20];
    printf("No of letters in a line:\n");
    scanf("%d",&iLetters);
    printf("Average letters in a word:\n");
    scanf("%d",&iWords);
    printf("No of lines in a page:\n");
    scanf("%d",&iLines);
    printf("No of pages you have read:");
    scanf("%d",iPages);
    printf("Have you read the page where you stopped?\n");
    scanf("%s",sUserAns);
    if(sUserAns=="Yes")
    {
    printf("Your speed is WPS");    
    }
    else{
    printf("");    
    }
    printf("No of lines in a last page:");
    scanf("%d",)
    printf("No of lines you have read in the last page?");
    return 0;
}

