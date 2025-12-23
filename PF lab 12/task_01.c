#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[30];
    float marks;
};
struct Student s1;
struct Student s2;
struct Student s3;

int main() {
    printf("Enter the name of the student 1: ");
    scanf("%[^\n]s", s3.name);
    printf("Enter the id of the student 1: ");
    scanf("%d", &s3.id);
    printf("Enter the marks of the student 1: ");
    scanf("%f", &s3.marks);

    puts("");
    
    printf("The name of the student 1 is: %s\n", s3.name);
    printf("Student ID: %d\n", s3.id);
    printf("Student Marks: %.2f\n", s3.marks);

    puts("");

    s1.id = 81;
    s1.marks = 100;
    strcpy(s1.name, "Muhammad Tahir Hussain");

    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks);

    puts("");

    s2.id = 86;
    s2.marks = 100;
    strcpy(s2.name, "Muhammad Anas Alam");

    printf("Student ID: %d\n", s2.id);
    printf("Student Name: %s\n", s2.name);
    printf("Student Marks: %.2f\n", s2.marks);

    return 0;
}
