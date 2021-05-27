#include <stdio.h>
//selection sort
//가장 작은 값의 인덱스를 계속해서 저장해나가, 시작점과 가장 작은 값을 인덱슬르 통해 서로 바꿔줌
int main(){
    int a[10] = {2,6,4,8,10,12,89,68,45,37};
    int hold;
    int i, current, start, k;
    printf("Data items in original order\n");
    for(i=0; i<10; ++i) printf("%4d", a[i]);
    for(start = 0; start < 10; start++){
        int smallest = start;
        for(current = start +1; current< 10; current++){
            if(a[current] < a[smallest]) smallest = current;
        }
        hold = a[start];
        a[start] = a[smallest];
        a[smallest] = hold;
    }
    printf("\nData items in ascending order\n");
    for(k=0; k<10; ++k) printf("%4d", a[k]);
    return 0;
}