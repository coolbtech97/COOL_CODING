#include <stdio.h>
#include <stdlib.h>

struct date {
    int d, m, y;
};

struct date inputdate();
void showdate(struct date);

int main() {
    struct date a[4];
    int i;

    system("cls");
    printf("Enter the D.O.B. of 4 students");

    for (i = 0; i < 4; i++) {
        a[i] = inputdate();
    }

    printf("\nDisplaying Dates of Birth:\n");

    for (i = 0; i < 4; i++) { // Removed the redundant i++ and condition check
        showdate(a[i]);
    }

    printf("\n");
    return 0;
}

struct date inputdate() {
    struct date m1;
    printf("\nEnter the date (dd mm yyyy): ");
    scanf("%d%d%d", &m1.d, &m1.m, &m1.y);
    return m1;
}

void showdate(struct date x) {
    printf("%02d-%02d-%04d\n", x.d, x.m, x.y); // Display date in a clean format
}