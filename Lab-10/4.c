#include <stdio.h>
#include <string.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int rollno;
    int marks[3]; // Array to store marks for three subjects
    float average; // Store the average marks
};

// Function to compute the average marks for a student
float computeAverage(struct Student student) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += student.marks[i];
    }
    return (float)total / 3;
}

// Function to perform selection sort based on average marks
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].average > students[j].average) {
                // Swap students[i] and students[j]
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        printf("Enter student %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter marks for three subjects (m1, m2, m3): ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &students[i].marks[j]);
        }
        students[i].average = computeAverage(students[i]); // Calculate the average for this student
    }

    // Sort the students based on their average marks
    sortStudents(students, n);

    // Display the names of students in ascending order of average marks
    printf("Students in ascending order of average marks:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll number: %d, Average Marks: %.2f\n", students[i].name, students[i].rollno, students[i].average);
    }

    return 0;
}
