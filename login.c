#include<stdio.h>
#include<stdlib.h>

int main()
{
    char username[20], password[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if(strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
    {
        printf("Login successful\n");
    }
    else
    {
        printf("Login failed\n");
    }
    return 0;
}