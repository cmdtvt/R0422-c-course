#include <stdio.h>
#define MAX_LIMIT 50


int main (int argc, char *argv[]) {

    int num1,result=1;
    
	printf("Enter an integer: ");
	scanf("%d",&num1);

    int  i;
    for (i = 1; i <= num1; i++) {
        result *= i;
    }

    printf("The factorial of %d is %d",num1,result);
    
	return 0;
}