#include <stdio.h>

void printArray(int input[], int len);
void addArray(int input[], int len, int value);
void main(){
    int arr1[3] = {1,2,3};
    int arr2[5] = {1,2,3,4,5};
    printArray(arr1, 3);
    addArray(arr2, 5,3);
    printArray(arr2, 5);
}
void addArray(int input[], int len, int value){
    for(int i=0; i<len; i++)
        input[i] += value;    
}
void printArray(int input[], int len){
    for(int i=0; i<len; i++)
        printf("%d ", input[i]);
}