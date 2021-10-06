#include <stdio.h>

int main (int argc, char *argv[]) {

    int first,second;

    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);


    printf("%d+%d=%d \n",first,second,(first+second));
    printf("%d-%d=%d \n",first,second,(first-second));
    printf("%d*%d=%d \n",first,second,(first*second));

    return 0;
}

