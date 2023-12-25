#include <stdio.h>

int main()
{
    int iRuns[6];
    for(int i=0;i<6;i++){
    printf("Score for ball %d\n",i++);
    scanf("%d",&iRuns[i]);
    }
    return 0;
}
