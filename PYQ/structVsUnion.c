#include <stdio.h>
struct studStruct
{
    char sName[20];
    int sRoll;
    float sGPA;
};

union studUnion
{
    char sName[20];
    int sRoll;
    float sGPA;
};

int main()
{
    struct studStruct studentStruct;
    union studUnion studentUnion;
    strcpy(studentStruct.sName, "Karthikeya");
    studentStruct.sRoll = 29;
    studentStruct.sGPA = 8.2;
    strcpy(studentUnion.sName, "Karthikeya");
    studentUnion.sRoll = 29;
    studentUnion.sGPA = 8.2;
    printf("Struct information: \n");
    printf("Name: %s\n", studentStruct.sName);
    printf("Roll: %d\n", studentStruct.sRoll);
    printf("GPA: %.2f\n", studentStruct.sGPA);
    printf("Union information: \n");
    printf("Name: %s\n", studentUnion.sName);
    printf("Roll: %d\n", studentUnion.sRoll);
    printf("GPA: %.2f\n", studentUnion.sGPA);
    return 0;
}