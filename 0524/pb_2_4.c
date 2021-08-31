#include <stdio.h>

void minmax(int, int, int *, int *);

int main(){
    int n1, n2;
    int min, max;
    printf("min, max : ");
    scanf("%d %d", &n1, &n2);
    minmax(n1,n2,&min,&max);
    printf("min : %d max : %d ",min, max);
    return 0;
}

void minmax(int n1, int n2, int *min, int *max){
    if(n1 <= n2){
        *min = n1;
        *max = n2;
    }else{
        *min = n2;
        *max = n1;
    }
}