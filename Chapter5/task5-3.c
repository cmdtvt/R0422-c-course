#include <stdio.h>
#define MAX_LIMIT 50


int main (int argc, char *argv[]) {

    int selection,num1,num2;
    int result;

    printf("1: subtraction\n2: addition\n3: multiplication\n");


	printf("Select function:\n");
	scanf("%d",&selection);

	printf("Enter the first number:\n");
	scanf("%d",&num1);

	printf("Enter the second number:\n");
	scanf("%d",&num2);



    switch (selection) {
    case 2:
        result = num1 + num2;
        printf("%d+%d=%d",num1,num2,result);
        break;
    
    case 1:
        result = num1 - num2;
        printf("%d-%d=%d",num1,num2,result);
        break;

    case 3:
        result = num1 * num2;
        printf("%d*%d=%d",num1,num2,result);
        break;

    default:
        break;
    }



	return 0;
}