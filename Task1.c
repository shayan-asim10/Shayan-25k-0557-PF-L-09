#include <stdio.h>

int main(){
    int code, bit[7],i;
    printf("\nEnter the access code: ");
    scanf("%d", &code);
    for(i=6; i>=0; i--){
        bit[i] = code%2;
        code= code/2;
    }
    for(int j=0; j<7; j++){
        printf("%d", bit[j]);
    }
}