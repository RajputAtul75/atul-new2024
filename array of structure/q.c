#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ece[100];
    ece[0].roll = 76;
    ece[0].cgpa = 7.4;
    strcpy(ece[0].name, "Atul");
    printf("student name = %s\n", ece[0].name);
    printf("student roll = %d\n", ece[0].name);
    printf("student cgpa =%f\n", ece[0].cgpa);
    return 0;
}


















