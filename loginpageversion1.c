#include<stdio.h>
#include<string.h>
int main()
{
    char sCompany[20]="Lenovo";
    char sEmail[20];
    char sPassword[20];
    printf("%s\n",sCompany);
    printf("Enter your Email:\n");
    scanf("%s",sEmail);
    printf("Enter your Password:\n");
    scanf("%s",sPassword);
    if(strcmp(sEmail,"learninghub@gmail.com") == 0 && strcmp(sPassword,"L3ar2")==0)
    {
    printf("Login Successfull\n");
    }
    else
    {
    printf("Email or Wrong Password\n");
    }
    return 0;
}


