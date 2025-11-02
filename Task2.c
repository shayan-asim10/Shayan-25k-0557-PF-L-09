#include <stdio.h>

void swapArrays(int *a, int *b, int size);

int main(){
    int size, a, b;
    int lahore[] = {11,22,33,44,55}, karachi[] = {66,77,88,99,100};
    printf("\nValues before swapping: ");
    printf("\nLahore\n");
    for(int i=0; i<5; i++){
        printf("%d ", lahore[i]);
    }
    printf("\nKarachi\n");
    for(int i=0; i<5; i++){
        printf("%d ", karachi[i]);
    }
    for(int i=0; i<5; i++){
        swapArrays(karachi, lahore, 5);
    }
    printf("\nAfter swapping: ");
    printf("\nKarachi\n");
     for(int i=0; i<5; i++){
        printf("%d ", karachi[i]);
    }
    printf("\nLahore\n");
    for(int i=0; i<5; i++){
        printf("%d ", lahore[i]);
    }
}

void swapArrays(int *a,int *b, int size){
    int temp;
    for(int i=0; i<size; i++){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}