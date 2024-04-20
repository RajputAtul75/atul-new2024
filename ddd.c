#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll = 90;
    s1.cgpa = 7.4;
    strcpy(s1.name, "atul singh");
printf("student name = %s", s1.name);
printf("student roll = %d", s1.roll);
printf("student cgpa = %f", s1.cgpa);
return 0;
}