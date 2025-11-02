#include <stdio.h>

int main(){
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *p = str;
    while (*p != '\0' && *p != '\n') {
        p++;
    }

    int length = (int)(p - str);

    printf("Length of the string: %d\n", length);
    return 0;
}
