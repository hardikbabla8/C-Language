/* 
Write a program that asks for a username and password (hardcode both), and
prints “Login Successful” if both match, otherwise “Access Denied”. Use an 
if-else statement. 
*/

/* 
Credentials : 
    username is 'H' 
    password is 1234
*/

#include <stdio.h>

int main() {
    char username;
    int password;

    printf("Enter username: ");
    scanf("%c", &username);

    printf("Enter password: ");
    scanf("%d", &password);

    if (username == "H" && password == 1234) {
        printf("Login Successful");
    } else {
        printf("Access Denied");
    }

    return 0;
}