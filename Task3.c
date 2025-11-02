#include <stdio.h>
#include <string.h>

int main(){
    int isAnagram = 1;
    int i=0, j=0;
    char value1[15];
    char value2[15];
    
    printf("\nEnter a word: ");
    scanf("%s", &value1);
    int size1 = strlen(value1);
    printf("\nEnter a word: ");
    scanf("%s", &value2);
    int size2 = strlen(value2);
    
    if(size1 != size2){
        printf("\nNot an Anagram!");
        return 0;
    }
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            printf("\n%c %c %d", value1[i], value2[j], isAnagram);
            if(value1[i] != value2[j]){
                isAnagram = 0;
            }
            else{
                isAnagram = 1;
                break;
            }
            if(j==(size2-1) && isAnagram == 0){
                printf("\nIt is not an Anagram");
                return 0;
            }
        }
    }
    if(isAnagram){
        printf("\nIt is an anagram!");
    }
    else{
        printf("\nIt is not an anagram!");
    }
    return 0;
}