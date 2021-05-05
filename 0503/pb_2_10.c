#include <stdio.h>

int num1;
void newfun();
int main(){
    int num2;
    num1 = 10;
    num2 = 20;
    newfun();
    printf(" %d %d", num1, num2);
}
void newfun(){
    int num2 = 30;
    num1 = 40;
}