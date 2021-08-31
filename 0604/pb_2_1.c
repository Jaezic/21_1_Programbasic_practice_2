#include <stdio.h>
void reverse(char *a);

int main(){
    char a[20];
    printf("Enter the strings : \n");
    gets(a);
    reverse(a);
    return 0;
}
void reverse(char *a){
    char c[20];
    char *m = a;
    char *n = c;
    while (*m!= '\0'){
        m++;
        printf("1. string = %p\n", m);
    }
    m--;
    printf("2. string = %p\n", m);
    while(m >= &a[0]){
        *n++ = *m--;
        printf("3. string = %s\n", c);
    }
    *n = '\0';
    printf("string = %s", c);
}