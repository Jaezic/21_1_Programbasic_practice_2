#include <stdio.h>
void exchange(int *, int *);
int main(){
    int n1, n2;
    printf("n1 n2 : ");
    scanf("%d %d", &n1, &n2);
    printf("Before) n1 = %d, n2 = %d\n", n1,n2);
    exchange(&n1, &n2);
    printf("after) n1 = %d, n2 = %d\n",n1, n2);
    return 0;
}
void exchange(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}