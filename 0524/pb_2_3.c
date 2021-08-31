#include <stdio.h>

int main(){
    int n1 = 41, n2 = 18;
    float f1, f2;
    void newVal(int, int, float *, float *);
    newVal(n1, n2, &f1, &f2);
    printf("sum = %f, remain = %f",f1,f2);

    return 0;
}
void newVal(int val1, int val2, float *sum, float *remain){
    *sum = val1 + val2;
    *remain  = val1 % val2;
}