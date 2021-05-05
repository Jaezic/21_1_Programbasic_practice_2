#include <stdio.h>

int find_max(int, int, int);

int main(){
    int newmax;
    newmax = find_max(30, 40, 15);
    printf("%d",newmax);
    return 0;
}

int newmax(int num1, int num2, int num3){
    int max;
    max = num1;
    if(num2> max)
        max = num2;
    if(num3>max)
        max = num3;
    return max;
}