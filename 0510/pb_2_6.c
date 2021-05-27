#define MAXNUM 5
#include <stdio.h>
void mile2km(float [MAXNUM]);
void print2Array(float [], int);
void main(){
    float miles[MAXNUM] = {3.1, 4.1, 2.1, 5.4, 6.1};
    mile2km(miles);
    print2Array(miles, MAXNUM);
}
void mile2km(float local_array[]){
    int i;
    for(i=0; i<MAXNUM; i++)
        local_array[i] *= 1.6093;
}
void print2Array(float input[], int len){
    for(int i=0; i<len; i++)
        printf("%f ", input[i]);
}