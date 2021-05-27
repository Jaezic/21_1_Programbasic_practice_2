#include <stdio.h>

void main(){
    int a[10] = {8,1,4,2,5,2,6,3,6,10};
    int temp;
    int SIZE = 10;
    for(int i =0; i<SIZE; i++){
        for(int j=0; j<SIZE-1; ++j){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
        printf("%d", a[i]);
    }
}