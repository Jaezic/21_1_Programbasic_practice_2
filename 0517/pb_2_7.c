#include <stdio.h>
int main(){
    //포인터 또한 초기화를 하지 않으면 이상한 주솟값이 할당된다.
    int *pnum, *pnum2 = NULL, *pnum3 = NULL, num;
    pnum3 = &num;
    printf("%p %p %p", pnum, pnum2, pnum3);

    return 0;
}