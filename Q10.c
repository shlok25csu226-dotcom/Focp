/*Implement a program to find who and how many students scored “99” in the marks array, 
emphasising data scanning and frequency counting.*/

#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Input marks of all students
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");

    // Scan array and find all who scored 99
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("→ Student %d scored 99.\n", i + 1);
            count++;
        }
    }

    // Display frequency count
    if (count > 0)
        printf("\nTotal number of students who scored 99: %d\n", count);
    else
        printf("\nNo student scored 99.\n");

    return 0;
}

