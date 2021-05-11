#include <stdio.h>

int main(){
    int side[2];
    printf("Enter sides: ");
    scanf("%d %d", &side[0], &side[1]);
    int sides[side[0]][side[1]];
    for(int i = 0; i< side[0]; i++){
        for(int j = 0; j < side[1]; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("202135577 정민규\n");
    return 0;
}