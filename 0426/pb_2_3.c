#include <stdio.h>

void comp_num(int , int);

int main(){
    int num1, num2;
    printf("Type a number : ");
    scanf("%d",&num1);
    printf("Type a number : ");
    scanf("%d",&num2);
    
    comp_num(num1, num2);

    return 0;
}

void comp_num(int num1, int num2){
    if(num1 == num2)
        printf("%d", num1);
    else if(num1 > num2)
        printf("%d %d", num2, num1);
    else
        printf("%d %d",num1, num2);
}