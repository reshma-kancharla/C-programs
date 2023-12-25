#include <stdio.h>

int main()
{
    char chatbot[50];
    char username[50];
    printf("Chatbot Hello! How can I help you?😊\n");
    scanf("%s",chatbot);
    printf("Hello!\nBefore we get started,I will ask you few details about you!\n");
    scanf("%s",username);
    printf("What is your name?\n");
    scanf("%s",username);
    printf("Ok,thank you puppy!\n Oh also,may I ask your email so we can contact you later?\n");
    scanf("%s",username);
    printf("Perfect!Someone in our team will be back to you.\n");
    scanf("%s",username);
    
    return 0;
}
