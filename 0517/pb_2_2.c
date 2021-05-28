#include <stdio.h>

int main(){
    int *ptr1, *ptr2;
    int small, large;
    small = 10;
    large = 10000;
    ptr1 = &small;
    ptr2 = &large;
    small = *ptr2; // 10000
    large = *ptr1; // 10
    *ptr2 = 100;
    printf("%d %d",small, large);
    return 0;
}