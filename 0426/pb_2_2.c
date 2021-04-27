#include <stdio.h>

void odd_even(int);

int main(){
    int input;
    printf("Type number = ");
    scanf("%d",&input);

    odd_even(input);
    return 0;
}

void odd_even(int number){
    if(number % 2 == 0)
        printf("integer is even\n");
    else   
        printf("integer is even\n");
}