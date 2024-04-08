#include <stdio.h>

int main() {
    int amount;
    
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes500 = amount / 500;
    amount %= 500;

    int notes200 = amount / 200;
    amount %= 200;

    int notes100 = amount / 100;
    amount %= 100;

    int notes50 = amount / 50;
    amount %= 50;

    int notes20 = amount / 20;
    amount %= 20;

    int notes10 = amount / 10;

    printf("Number of notes:\n");
    printf("500: %d\n", notes500);
    printf("200: %d\n", notes200);
    printf("100: %d\n", notes100);
    printf("50: %d\n", notes50);
    printf("20: %d\n", notes20);
    printf("10: %d\n", notes10);

    return 0;
}
