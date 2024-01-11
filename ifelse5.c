#include<stdio.h>
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
    return 0;
}

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
    printf("invalid email\n");
    else if(printf("Login successful\n"));
    }
    else
    {
    printf("Incorrect Password\n");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char sCompany[20]="Lenovo";
    char sEmail[78];
    char sPassword[20];
    printf("%s\n",sCompany);
    printf("Enter your Email:\n");
    scanf("%s",sEmail);
    printf("Enter your Password:\n");
    scanf("%s",sPassword);
    if(sEmail=="learninghub@gmail.com")
    {
    printf("Enter the password\n");
     if(sPassword =="L3ar2"){
      printf("Login succesful\n");
     }
     else{
         printf("incorrect password");
     }
    }
    else{
         printf("invalid Email\n ");
    }

    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char sCompany[20]="Lenovo";
    char sEmail[78];
    char sPassword[20];
    printf("%s\n",sCompany);
    printf("Enter your Email:\n");
    scanf("%s",sEmail);
    printf("Enter your Password:\n");
    scanf("%s",sPassword);
    if(sEmail=="learninghub@gmail.com")
    {
    printf("Enter the password\n");
     if(sPassword =="L3ar2"){
      printf("Login succesful\n");
     }
     else{
         printf("incorrect password");
     }
    }
    else{
         printf("invalid Email\n ");
    }

    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char sCompany[20]="Lenovo";
    char sEmail[78];
    char sPassword[20];
    printf("%s\n",sCompany);
    printf("Enter your Email:\n");
    scanf("%s",sEmail);
    printf("Enter your Password:\n");
    scanf("%s",sPassword);
    if(sEmail=="learninghub@gmail.com")
    {
    printf("Enter the password\n");
     if(sPassword =="L3ar2"){
      printf("Login succesful\n");
     }
     else{
         printf("incorrect password");
     }
    }
    else{
         printf("invalid Email\n ");
    }

    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char sCompany[20]="Lenovo";
    char sEmail[78];
    char sPassword[20];
    printf("%s\n",sCompany);
    printf("Enter your Email:\n");
    scanf("%s",sEmail);
    printf("Enter your Password:\n");
    scanf("%s",sPassword);
    if(sEmail=="learninghub@gmail.com")
    {
    printf("Enter the password\n");
     if(sPassword =="L3ar2"){
      printf("Login succesful\n");
     }
     else{
         printf("incorrect password");
     }
    }
    else{
         printf("invalid Email\n ");
    }

    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char sCompany[20]="Lenovo";
    char sEmail[78];
    char sPassword[20];
    printf("%s\n",sCompany);
    printf("Enter your Email:\n");
    scanf("%s",sEmail);
    printf("Enter your Password:\n");
    scanf("%s",sPassword);
    if(sEmail=="learninghub@gmail.com")
    {
    printf("Enter the password\n");
     if(sPassword =="L3ar2"){
      printf("Login succesful\n");
     }
     else{
         printf("incorrect password");
     }
    }
    else{
         printf("invalid Email\n ");
    }

    return 0;
}

int main()
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));
 
    return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
    char Email[30]="learninghub@gmail.com";
    char password[20]="L3ar2";
    char choiceemail[30];
    char choicepassword[20];
    printf("Enter email:");
    scanf("%s",choiceemail);
    if(strcmp(Email,choiceemail)==0){
        printf("Enter password:");
        scanf("%s",choicepassword);
        if(strcmp(password,choicepassword)==0){
            printf("login succesful");
        }
        else{
            printf("incorrect password");
        }
    }
    else{
      printf("invlaid Email");
    }

}







