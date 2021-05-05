#include <stdio.h>

int n1,n2;
void exchange();
int main(){
    scanf("%d %d", &n1,&n2);
    printf("%d %d\n",n1,n2);
    exchange();
    printf("%d %d",n1,n2);
    return 0;
}

void exchange(){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

}