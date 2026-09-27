/* 
Create a structure Date with members day, month, and
year to check if two given dates are the same or not.
*/

#include <stdio.h>

struct Date {
    int day, month, year;
};

int main(){
    struct Date date1, date2;

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if ((date1.day == date2.day) && (date1.month == date2.month) && (date1.year == date2.year)){
        printf("Both dates are same");
    } else {
        printf("Both dates are different");
    }

    return 0;
}