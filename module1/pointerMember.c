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
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    printf("Enter student name: ");
    scanf("%s", ptr->name);
    ptr->roll = 1;
    ptr->cgpa = 9.5;
    printf("Student details: \n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("CGPA: %.2f\n", ptr->cgpa);
    free(ptr);
    return 0;
}