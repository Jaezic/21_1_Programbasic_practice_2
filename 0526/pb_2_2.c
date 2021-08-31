#include <stdio.h>
#define MAXNUM 100
void findMax(int []);

int main(){
    int numList[MAXNUM];
    findMax(numList);
    return 0;
}
void findMax(int local_array[]){
    // findMax(int *local_array) 또한 가능.
    // array의 이름은 본질적으로 주소이기 때문에 가능하다.
    int i, max = local_array[0];
    for(i=1; i<MAXNUM; i++)
        if(max < local_array[i])
            max = local_array[i];
    printf("max : %d",max);
}