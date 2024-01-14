#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    int marks[3];
    float average;
};

void computeAverage(struct Student *student) {
    student->average = (float)(student->marks[0] + student->marks[1] + student->marks[2]) / 3;
}

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student students[N];
    for (int i = 0; i < N; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Marks (m1 m2 m3): ");
        scanf("%d %d %d", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);

        computeAverage(&students[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (students[j].average > students[j + 1].average) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }

  
    printf("\nNames of students in ascending order of average marks:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", students[i].name);
    }

    return 0;
}
