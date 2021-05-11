#include <stdio.h>

int main(){
    int input;
    do{
        printf("Enter a number between 1 and 9999 : ");
        scanf("%d",&input);
    } while( !(input >= 1 && input <= 9999));
    printf("The sum of the digits of the number %d is %d\n",input,input/1000 +(input%1000)/100 +(input%100)/10 + input%10);
    printf("202135577 정민규\n");
    return 0;
}