#include <stdio.h>
int Fibo(int number);

int main(){
    int i, count;
    scanf("%d", &count);
    for(i =0; i<count; i++)
        printf("%d ",Fibo(i));
    return 0;
}
int Fibo(int number){
    if(number == 0)
        return 0;
    else if(number == 1)
        return 1;
    else
        return (Fibo(number-2) + Fibo(number -1));
}