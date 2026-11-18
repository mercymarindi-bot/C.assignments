#include <stdio.h>

int main(void)
{
    int age = 20;
    float height_m = 1.75f;
    double balance = 1523.50;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height_m);
    printf("Balance: %.2f\n", balance);
    printf("Grade: %c\n", grade);

    return 0;
}

