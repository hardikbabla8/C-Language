/* 
Create a structure Book with members title, author, and price. Write a program to input
details for 3 books and display them. 
*/

/*
" %[^\n]" tells scanf to skip leftover whitespace and then read all characters, including spaces, until you press Enter.
*/

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};


int main(){
    int i;
    struct Book books[3];

    printf("===== Enter Book Details =====\n\n");

    for (i = 0; i < 3; i++) {
        printf("Book %d :\n", (i + 1));

        printf("Title: ");
        scanf(" %[^\n]", books[i].title);

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);

        printf("\n");
    }

    printf("===== Book Details =====\n");

    for (int i = 0; i < 3; i++) {
        printf("\nBook %d\n", i + 1);
        printf("----------------------------------------\n");
        printf("Title  : %s\n", books[i].title);
        printf("Author : %s\n", books[i].author);
        printf("Price  : %.2f\n", books[i].price);
    }
    
    printf("\n----------------------------------------");

    return 0;
}