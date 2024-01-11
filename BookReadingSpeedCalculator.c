#include <stdio.h>
#include<string.h>

int main()
{
    int iLetters;
    int iWords;
    int iLines;
    int iPages;
    char sUserAns[20];
    int iMin=20;
    float wpm;
    int iLstpgLines;
    printf("No of letters in a line:\n");
    scanf("%d",&iLetters);
    printf("Average letters in a word:\n");
    scanf("%d",&iWords);
    printf("No of lines in a page:\n");
    scanf("%d",&iLines);
    printf("No of pages you have read:");
    scanf("%d",&iPages);
    printf("No of min you have read:\n");
    scanf("%d",&iMin);
    printf("Have you read the page where you stopped?\n");
    scanf("%s",sUserAns);
    if(strcmp(sUserAns,"Yes")==0)
    {
    wpm = ((iLetters/iWords)*(iLines*iPages))/iMin;
    }
    else{
    printf("No of lines you have read in last page");
    scanf("%d",&iLstpgLines);
    wpm = ((iLetters/iWords)*(iLines*iPages+iLstpgLines))/iMin;
    }
    printf("Your book reading speed in wpm is %f",wpm);
    return 0;
}

