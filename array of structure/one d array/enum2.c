#include<stdio.h>
enum days{sunday = 1,monday,tuesday,wednesday,thursday,friday,satuarday};
void main(){
    enum days d;
    d = friday;
    switch(d){
        case 1;
        printf("today is sunday");
        break;
        case monday;
        printf("today is monday");
        break;
        case tuesday;
        printf("today is tuesday");
        break;
        case wednesday;
        printf("today is wednesday");
        break;
        case thursday;
        printf("today is thursday");
        break;
        case friday;
        printf("today is friday");
        break;
        case satuarday;
        printf("today is satuarday");
        break;
    }
}