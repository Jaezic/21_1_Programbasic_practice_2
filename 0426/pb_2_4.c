#include <stdio.h>

void Fibonacci(int);

int main(){
    int input;
    printf("Type a number : ");
    scanf("%d",&input);
    Fibonacci(input);
    return 0;
}

void Fibonacci(int input){
    int seq = 0, seq_2 =1, temp = 0, output;
    for(int i =1; i<=input; i++){
        if(i == 1)
            output = seq;  
        else{
            temp = seq_2;
            seq_2 = seq_2 + seq;
            output = seq_2;
            seq = temp;
        }
        printf("%d ", output);
    }
}