#include <stdio.h>

int main(){
    int num;
    double dnum;

    num = atoi("30000");
    num = num / 1000;

    dnum = atof("333.99");
    dnum = dnum / 3.0;
    printf(" %d %f",num, dnum);
    return 0;
}