#include <stdio.h>

int add_num(int)

int main(){
    int num;
    printf("Type an count : ");
    scanf("%d",&num);
    printf("%d",add_num(num));
    return 0;
}
int add_num(int num){
    int i, n, total= 0;
    for(i=1; i<num; i++){
        printf("\n Type an integer: ");
        scanf("%d", &n);
        if(n<3000)
            total = total+n;
        if(total > 200000)
            break;
    }
    return total;
}