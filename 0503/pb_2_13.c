#include <stdio.h>

int maximum(int x, int y, int z);

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("result = %d\n", maximum(num1, num2, num3));
    return 0;
}

int maximum(int x, int y, int z){
    int max = x;
    if(y>max) max = y;
    if(z>max) max = z;
    return max;
}