#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10
#define NAME_LENGTH 50


struct Student {
    char name[NAME_LENGTH];
    float subject1;
    float subject2;
    float subject3;
    char grade;
};


char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    struct Student students[NUM_STUDENTS];
    int i;

    
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks for Subject 1: ");
        scanf("%f", &students[i].subject1);
        printf("Marks for Subject 2: ");
        scanf("%f", &students[i].subject2);
        printf("Marks for Subject 3: ");
        scanf("%f", &students[i].subject3);

        
        float average = (students[i].subject1 + students[i].subject2 + students[i].subject3) / 3.0;
        students[i].grade = calculateGrade(average);
    }

    printf("\nStudent Database:\n");
    printf("-------------------------------------------------\n");
    printf("Name\t\tSubject1\tSubject2\tSubject3\tGrade\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%c\n", students[i].name, students[i].subject1, students[i].subject2, students[i].subject3, students[i].grade);
    }

    return 0;
}
