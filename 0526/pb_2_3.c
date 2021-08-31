#include <stdio.h>
#define SIZE 4
void totpay(float[SIZE], float[SIZE], float[SIZE]);

int main() {
    float base[SIZE], overtime[SIZE], total[SIZE];
    int n;
    totpay(base, overtime, total);
    for(n=1; n<=SIZE; n++)
        printf("totla play for worker %d = %f \n", n , total[n]);
    return 0;
}
void totpay(float b[], float o[], float t[]){
    // totapy(float *b, float *o, float *t) 또한 가능하다.
    int k;
    for(k=1; k<=SIZE; k++)
        t[k] = b[k] + o[k];
}