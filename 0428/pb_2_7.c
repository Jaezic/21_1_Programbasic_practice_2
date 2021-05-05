#include <stdio.h>

int Fibo(int);
int main(){
    int N;
    printf("type an integer : ");
    scanf("%d", &N);
    printf("%d\n",Fibo(N));
    return 0;
}
int Fibo(int num){
    int n, first = 0, second = 1, next, k;

    for(k = 0; k< num; k++){
        if(k<= 1)
            next = k;
        else{
            next = first + second;
            first = second;
            second = next;
        }
    } 
    return next;
}