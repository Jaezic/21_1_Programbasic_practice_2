#include <stdio.h>
#include <string.h>

int main(){
    char str[81];
    strcpy(str, "these ");
    strcat(str, "strings ");
    strcat(str, "are ");
    strcat(str, "concatenate");
    puts(str);
    printf("\nstr has %d character\n", strlen(str));
    return 0;
}