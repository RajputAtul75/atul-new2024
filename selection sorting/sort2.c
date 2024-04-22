#include<stdio.h>
int mian(){
    int n = 5;
    int a[] = {4,5,1,3,6};
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array:");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    return 0;
}