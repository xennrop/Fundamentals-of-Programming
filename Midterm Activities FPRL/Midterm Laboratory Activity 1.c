#include <stdio.h>

int main() {
    char choice;
    float vegetable = 54.5, fruits = 120, milk = 90, soap = 29.45, shampoo = 140;
    int vegQty, fruitQty, milkQty, soapQty, shampooQty;
    float total, payment, change;

    do {
        vegQty = fruitQty = milkQty = soapQty = shampooQty = 0;
        total = 0;

        printf("\nWhat do you want to purchase?\n");
        printf("Vegetable (P54.5/kl): ");
        scanf("%d", &vegQty);

        printf("Fruits (120-150/kl): ");
        scanf("%d", &fruitQty);
        fruits = 120;

        printf("Milk (P90/pack): ");
        scanf("%d", &milkQty);

        printf("Soap (P29.45/bar): ");
        scanf("%d", &soapQty);

        printf("Shampoo and Conditioner (P140/bottle): ");
        scanf("%d", &shampooQty);

        total = (vegQty * vegetable) + (fruitQty * fruits) + 
                (milkQty * milk) + (soapQty * soap) + 
                (shampooQty * shampoo);

        printf("\nTotal Purchase: P%.2f\n", total);

        printf("Enter your payment: ");
        scanf("%f", &payment);

        if(payment >= total) {
            change = payment - total;
            printf("Your change: P%.2f\n", change);
        } else {
            printf("Insufficient payment! You still owe P%.2f\n", total - payment);
        }

        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &choice);

    } while(choice == 'Y' || choice == 'y');

    printf("\nThank you for shopping!\n");
    return 0;
}
