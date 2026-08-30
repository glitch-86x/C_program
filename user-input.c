#include <stdio.h>
#include <string.h>

int main() {
    char item[40] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;

    printf("what item did you buy ; ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';   

    printf("what is the price for every one ");
    scanf("%f", &price);                

    printf("how many would you like ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("total: %f\n", total);

    return 0;
}
