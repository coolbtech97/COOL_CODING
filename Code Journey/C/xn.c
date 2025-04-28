#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll, marks;
    char name[21];
};

// Function to swap two student structures
void swap(struct student* p, struct student* q) {
    struct student temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int i = 0, n;

    // Input the number of students
    printf("Enter the number of students: ");
    while (1) {
        scanf("%d", &n);
        if (n > 0 && n < 100) {  // Validate input
            break;
        }
        printf("Enter a number between 1 and 99: ");
    }

    struct student a[n];  // Declare an array of `struct student`

    // Input details for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        getchar(); // Clear the buffer
        fgets(a[i].name, 21, stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0'; // Remove trailing newline

        printf("Roll number: ");
        scanf("%d", &a[i].roll);

        printf("Marks: ");
        scanf("%d", &a[i].marks);
    }

    // Sort students by roll number using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].roll > a[j + 1].roll) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }

    // Display the sorted student details
    printf("\nSorted list of students by roll number:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %d\n", a[i].roll, a[i].name, a[i].marks);
    }

    return 0;
}
