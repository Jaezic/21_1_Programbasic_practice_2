#include <stdio.h>

int main(){
    char *ptr, string[20] = "programming";
    ptr = string;
    ptr = ptr +3;
    *ptr = 'k';
    printf("%s",ptr);
    return 0;
}