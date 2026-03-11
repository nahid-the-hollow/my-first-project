#include <stdio.h>

int main() {
    char name[50];
    float math, english, science, average;
    char grade;

    printf("Student Grade Calculator\n");

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter Math marks: ");
    scanf("%f", &math);

    printf("Enter English marks: ");
    scanf("%f", &english);

    printf("Enter Science marks: ");
    scanf("%f", &science);

    average = (math + english + science) / 3;

    printf("Average Marks: %.2f\n", average);

    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}
