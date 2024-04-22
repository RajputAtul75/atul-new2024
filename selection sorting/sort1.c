#include<stdio.h>
int main(){
    int n = 6;
    int a[] = {7,4,10,8,3,1};
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("sorted array:");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    return 0;
}