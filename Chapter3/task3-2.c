#include <stdio.h>

int main (int argc, char *argv[]) {

    float euro;
    float factor = 5.94573;
    float markka;

    printf("Enter an amount in FIM: ");
    scanf("%f", &markka);


    euro = markka / factor;

    printf("FIM converted to euro: %.2f \n",euro);

    return 0;
}