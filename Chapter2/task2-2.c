#include <stdio.h>

int main(void) {


    int number;
    int result;
    printf("Enter an integer:");
    scanf("%d", &number);

    result = number * number;
    printf("The square of the number you entered is %d", result);
    return 0;
}