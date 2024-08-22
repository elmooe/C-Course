#include <stdio.h>

float calculateAverage(int arr[], int size);

int main(void) {
    const int MAX_STUDENTS = 30;

    int grades[MAX_STUDENTS] = {0};
    int numOfStudents = 0;

    printf("Enter number of students to be graded: ");
    scanf("%d", &numOfStudents);

    if (numOfStudents > MAX_STUDENTS) {
        printf("The number of students cannot be greater than %d\n", MAX_STUDENTS);
        return 1;
    }

    for (int i = 0; i < numOfStudents; i++) {
        int grade;
        do {
            printf("Enter grade for student #%d: ", 4500 + i);
            scanf("%d", &grade);
            if (grade < 0 || grade > 5) {
                printf("Invalid grade, must be between 0 and 5\n");
            }
        } while (grade < 0 || grade > 5);
        grades[i] = grade;
    }

    float average = calculateAverage(grades, numOfStudents);
    printf("Average is %.1f\n", average);

    return 0;
}


float calculateAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float) sum / size;
}