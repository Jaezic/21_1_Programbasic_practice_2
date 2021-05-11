#include <stdio.h>
int factorial(int number);

int main(){
    int i, count;
    scanf("%d", &count);
    printf("%d! = %d\n", count, factorial(i));
    return 0;
}
int factorial(int number){
    if(number <= 1) return 1;
    else return (number * factorial(number-1));
}
