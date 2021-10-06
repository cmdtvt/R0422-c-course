#include <stdio.h>

int main (int argc, char *argv[]) {

    int number;
    float dnumber;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a decimal number: ");
    scanf("%f", &dnumber);
    printf("\n");

    printf("You entered the integer: %d \n",number);
    printf("You entered the decimal number, rounded to two decimal places: %.2f \n",dnumber);

    return 0;
}
