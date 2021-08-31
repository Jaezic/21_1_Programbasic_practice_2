#include <stdio.h>
#define SIZE 50
void copystring(char [], char []);
int main(){
    char s1[SIZE];
    char *s2 = s1;
    copystring(s2, "Hello");
    printf("%s",s2);
    return 0;
}
void copystring(char s1[], char s2[]){
    //copystring(char *s1, char *s2) 또한 가능하다.
    for(int i=0; i<SIZE; i++)
        s1[i] = s2[i];
}