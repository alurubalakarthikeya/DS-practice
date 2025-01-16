#include <stdio.h>
struct Stud
{
    char sName[20];
    char sBranch[20];
    float sPercent;
};
int main()
{
    struct Stud student;
    struct Stud *ptr = &student;
    printf("Enter student information: \n");
    printf("Enter the student name: ");
    scanf("%s", ptr->sName);
    printf("Enter the student branch: ");
    scanf("%s", ptr->sBranch);
    printf("Enter the student percent: ");
    scanf("%f", &ptr->sPercent);
    printf("Student information entered: \n");
    printf("Student name: %s\n", student.sName);
    printf("Student branch: %s\n", student.sBranch);
    printf("Student percent: %.2f\n", student.sPercent);
    return 0;
}