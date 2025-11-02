#include <stdio.h>
#include <stdlib.h>


void bright(int pixel[8][8], int brightened[8][8], int i, int j);
void display(int pixel[8][8], int brightened[8][8]);

int main(){
    int pixel[8][8] = {0}, i, j;
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            pixel[i][j] = rand()%256;
        }
    }
    int brightened[8][8];
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            bright(pixel, brightened, i, j);
        }
    }

    display(pixel, brightened);
    return 0;
}


void bright(int pixel[8][8], int brightened[8][8], int i, int j){
    if((pixel[i][j] + 20) < 255){
                brightened[i][j] = pixel[i][j] + 20;
            }
            else{
                brightened[i][j] = pixel[i][j];
            }
}

void display(int pixel[8][8], int brightened[8][8]){
    int i, j;
    printf("\nNormal:\n");
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            printf("%d  ", pixel[i][j]);
        }
        printf("\n");
    }
    printf("\n\nBrightened:\n");
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            printf("%d  ", brightened[i][j]);
        }
        printf("\n");
    }
}