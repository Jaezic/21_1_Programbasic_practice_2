#include <stdio.h>
int maximum(int [], int N);
int maximum(int values[], int N){
    int max_value, i;
    
    max_value = values[0];
    for(i=0; i<N; ++i)
        if(values[i] > max_value)
            max_value = values[i];

    return max_value;
}
int main(){
    int values[5], i, max;
    printf("Enter 5 numbers\n");
    for(i=0; i <5; ++i)
        scanf("%d", &values[i]);

    max = maximum(values, 5);
    printf("\nMaximum values is %d\n",max);
}