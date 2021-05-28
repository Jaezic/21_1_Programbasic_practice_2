#include <stdio.h>

int main(){
    int x = 10, y = 20, z[100] = {15,};
    int *iptr;

    iptr = &x; 
    y = *iptr; // y에 x값
    *iptr = 100; // x에 100
    iptr = &z[0]; // iptr에 z배열 넣기
    printf("%15s %15s %15s\n","Address","Name","Value");
    printf("%15p %15s %15d\n",&x,"x",x);
    printf("%15p %15s %15d\n",&y,"y",y);
    printf("%15p %15s %15d\n",&z,"z",z[0]);
    printf("%15p %15s %15d\n",&iptr,"iptr",iptr[0]);
    return 0;
}