#include <stdio.h>

void printArray(int [], int);

int main(){
    int arr1[3] = {1,2,3};
    int arr2[5] = {1,2,3,4,5};

    printArray(arr1,3);
    printArray(arr2,5);
    return 0;
}

void printArray(int arr[], int N){
    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
}