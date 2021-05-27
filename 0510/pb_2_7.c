#include <math.h>
#include <stdio.h>
void abs_arr(double[], int);

void main(){
    double arr[3] = {38.4, -101.7, -2.1};
    abs_arr(arr, 3);
    for(int i=0; i<3; i++)
        printf("%f ",arr[i]);
    
}

void abs_arr(double arr[], int len){
    for(int i=0; i<len; i++)
        arr[i] = fabs(arr[i]);
}