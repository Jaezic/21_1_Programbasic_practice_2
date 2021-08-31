#include <stdio.h>
#define SIZE 50
void reverse(char []);

int main(){
    char s1[SIZE];
    scanf("%s", s1);
    reverse(s1);
    printf("%s",s1);
    return 0;
}

void reverse(char s1[]){
    int size=0;
    while(s1[size] != '\0'){
        size++;
    }
    printf("size : %d\n",size);
    int temp;
    for(int i = 0; i<size/2; i++){
        temp = s1[i];
        s1[i] = s1[size-i-1];
        s1[size-i-1] = temp;
        printf("%d : %s\n",i,s1);
    }
}