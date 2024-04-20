#include<stdio.h>
enum days {sunday,monday,tuesday,wednesday,thursday,friday,satuarday};
int main(){
    enum days today = satuarday;
    printf("today is day %d\n", today);
    return 0;
}