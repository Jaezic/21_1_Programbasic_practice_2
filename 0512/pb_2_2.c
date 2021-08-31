#include <stdio.h>

void main(){
    int a[5] = {4,7,2,9,1};
    int temp, count =0;
    int SIZE = 5;
    for(int k=0; k<10; ++k) printf("%4d", a[k]);
    for(int i =1; i<SIZE; i++){
        for(int j=0; j<SIZE-1; ++j){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
            count++;
            printf("\n\ni : %d j : %d\n", i, j);
            for(int k=0; k<10; ++k) printf("%4d", a[k]);
        }
    }
    printf("count : %d",count);
}