#include <stdio.h>

int main(){
    int x = 40, y = 20, sol1, sol2, sol3;
    int *xptr, *yptr, *wptr;
    xptr = &x;
    yptr = &y;
    sol1 = **&xptr;
    sol2 = 4 * (*xptr / *yptr) + 22;
    sol3 = * (wptr = &y);
    printf("%15s %15s %15s\n","Address","Name","Value");
    printf("%15p %15s %15d\n",&x,"x",x);
    printf("%15p %15s %15d\n",&y,"y",y);
    printf("%15p %15s %15d\n",&sol1,"sol1",sol1);
    printf("%15p %15s %15d\n",&sol2,"sol2",sol2);
    printf("%15p %15s %15d\n",&sol3,"sol3",sol3);
    printf("%15p %15s %15p\n",&xptr,"xptr",xptr);
    printf("%15p %15s %15p\n",&yptr,"yptr",yptr);
    printf("%15p %15s %15p\n",&wptr,"wptr",wptr);
    return 0;
}