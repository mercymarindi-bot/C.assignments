#include <stdio.h>

int main(void)
{
    double quantity = 12.0;
    double unit_price = 45.50;
    double total;

    total = quantity * unit_price;

    printf("Quantity: %.2f\n", quantity);
    printf("Unit price: %.2f\n", unit_price);
    printf("Total: %.2f\n", total);

    return 0;
}
