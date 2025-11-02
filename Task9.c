#include <stdio.h>

int calc(int price[10][2], int i);

int main(){
    char name[20], item[10][20] = {0};
    int choice = 1, i, price[10][2], bill = 0;
    printf("\nEnter your name: ");
    if(fgets(name, sizeof(name), stdin) == NULL){
        printf("Invalid Username! Try again!");
        return 0;
    }
    for(i=0; i<10; i++){
        printf("\nEnter the name of the item: ");
        scanf("%s", &item[i]);
        printf("\nEnter price per unit: ");
        scanf("%d", &price[i][0]);
        printf("\nEnter the quantity: ");
        scanf("%d", &price[i][1]);
        printf("\nDo you want to add more items?(1=Yes, 0=No)\n");
        scanf("%d", &choice);
        bill = calc(price, i);
        if(!choice){
            break;
        }
    }
    printf("\nHello valued Customer, %s!\nYour total bill:", name);
    printf("\nItem\tPrice Per unit\tQuantity\tTotal");
    for(i=0; i<10; i++){
        if(item[i][0] == '\0' || price[i][0] == '\0' || price[i][1] == '\0'){
            break;
        }
        printf("\n%s\t%d Rs\t\t%d\t\t%d Rs", item[i], price[i][0], price[i][1], price[i][0]*price[i][1]);
    }
    printf("\nTotal: %d", bill);
    return 0;
}

int calc(int price[10][2], int i){
    static int bill = 0;
    bill += price[i][0]*price[i][1];
    return bill;
}