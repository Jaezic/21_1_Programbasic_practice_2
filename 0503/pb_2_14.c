#include <math.h>
#include <stdio.h>

int main(){
    int j, k, num[10];
    double sum, mean, diff, std = 0.0;
    int numSize = 10;

    for(int j = 0; j < numSize; j++){
        scanf("%d", &num[j]);
        printf("%d", num[j]);
    }
    sum = 0.0;
    for(int j = 0; j < numSize; j++){
        sum += num[j];
    }
    mean = sum / numSize;

    for(int k = 0; k<numSize; k++){
        diff = num[k] - mean;
        std = std + pow(diff,2);
    }
    std = sqrt(std / numSize);
    return 0;
}