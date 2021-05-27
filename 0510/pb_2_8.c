#include <stdio.h>
int word_count(char []);
int main(){
    char str[30];
    scanf("%s", str);
    printf("%d", word_count(str));
    return 0;
}
int word_count(char arr[]){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}