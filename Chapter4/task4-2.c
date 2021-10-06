#include <stdio.h>

int main (int argc, char *argv[]) {

    int first,num;

    printf("Enter an integer:");
    scanf("%d", &first);


    if(first % 2 == 0) {
        num = 0;
    } else {
        num = 1;
    }

    printf("The number is %d",num);

    return 0;
}