#include <stdio.h>

int main (int argc, char *argv[]) {

    int first,num;

    printf("Enter an integer:");
    scanf("%d", &first);


    if(first % 2 == 0) {
        printf("Number %d is even.",first);
    } else {
        printf("Number %d is odd.",first);
    }

    return 0;
}