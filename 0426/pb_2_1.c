#include <stdio.h>

void tempConvert (char ,int);

int main(){
    char ForC = 'F';
    int tmp = 106;
    tempConvert(ForC, tmp);
    return 0;
}

void tempConvert(char FC, int temp){
    float newTemp;
    if(FC == 'F')
        newTemp = (temp - 32) * 5.0 / 9;
    else
        newTemp = temp * 9.0 / 5 + 32;
    printf("new Temperature = %f", newTemp);
}