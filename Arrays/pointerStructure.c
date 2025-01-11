#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[40];
    int roll;
    float cgpa;
};
int main()
{
    struct student s;
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the roll of the student: ");
    scanf("%d", &s.roll);
    printf("Enter the cgpa of the student: ");
    scanf("%f", &s.cgpa);
    printf("The details of the student are: \n");
    struct student *ptr = &s;
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("CGPA: %.2f\n", ptr->cgpa);
    return 0;
}