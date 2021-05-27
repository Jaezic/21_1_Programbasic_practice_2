#include <stdio.h>
#define MAX 5
// 효과적인 버블정렬, 맨뒤에 있는 것은 어차피 제일 큰 데 왜 또 비교? 횟수를 줄여주자. 스왑 안 일어나면 멈추자.
int main(void){
    int a[MAX] = {4,7,2,9,1};
    int i, pass, hold, swap;
    for(int pass = 1; pass < MAX; pass++){
        swap=0;
        for(i = 0; i<MAX - pass; i++){
            if(a[i] > a[i+1]){
                swap = 1;
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
        printf("After Pass %d: ",pass);
        for(i=0; i <= MAX-pass; i++)    printf(" %d", a[i]);
        printf("\n");
        if(!swap)   break;
    }
    puts("\nData items in ascending order");
    for(i=0; i< MAX; i++)    printf("%4d", a[i]);
    puts("");
}