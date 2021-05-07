#include <stdio.h>
#include <math.h>

int main(){
    int j,k, num[10];
    double sum, mean, diff, std = 0.0;
    int numSize = 10;
    sum = 0.0;
    for(int j = 0; j< numSize; j++){
        scanf("%d", &num[j]);
    }
    sum = 0.0;
    for(int j = 0; j< numSize; j++){
        sum += num[j];
    }
    mean = sum / numSize;

    for(int j = 0; j < numSize; j++){
        diff = num[j] - mean;
        std = std + pow(diff, 2);
    }
    std = sqrt(std / numSize);

    printf("%f %f",mean, std);

    return 0;
}