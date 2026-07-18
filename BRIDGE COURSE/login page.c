login page


#include <stdio.h>
#include <string.h>

int main()
{
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0)
    {
        if (strcmp(password, "1234") == 0)
        {
            printf("Login Successful");
        }
        else
        {
            printf("Invalid Password");
        }
    }
    else
    {
        printf("Invalid Username");
    }

    return 0;
}