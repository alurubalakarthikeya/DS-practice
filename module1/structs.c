// structures are user defined data types with multiple data types under a single name and they allocate memory for all the memebers in the structure.
// structures are used to store information about multiple entities of the same type.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[40];
    int roll;
    float cgpa;
};
int main()
{
    struct student s[10];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student-%d: ", i);
        scanf("%s", s[i].name);
        printf("Enter the roll number of the student-%d: ", i);
        scanf("%d", &s[i].roll);
        printf("Enter the cgpa of the student-%d: ", i);
        scanf("%f", &s[i].cgpa);
        printf("\n");
    }
    printf("The details of the students are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("CGPA: %.2f\n", s[i].cgpa);
        printf("\n");
    }
}