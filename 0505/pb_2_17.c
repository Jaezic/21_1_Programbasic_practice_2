#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i =1; i<=20; i++){
        printf("%d \t", 1+ (rand() % 6));
        if(i%5 == 0){
            puts("");
        }
    }
}