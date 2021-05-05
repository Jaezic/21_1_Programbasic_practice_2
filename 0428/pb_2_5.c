#include <stdio.h>

float tempConvert(char, int);
int main(){
    char FC='f';
    int temp = 120;
    float newTemp;
    newTemp = tempConvert(FC, temp);
    printf("converted temperature = %f", newTemp);
    return 0;
}

float tempConvert(char FC, int temp){
    if(FC == 'F')
        return((temp -32) * 5.0 / 9);
    else   
        return(temp * 9.0 / 5 + 32);
}