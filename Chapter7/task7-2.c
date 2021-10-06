#include <stdio.h>

void add(int num1,int num2) {
    int result = num1 + num2;
    printf("%d + %d = %d",num1,num2,result);
};

void k(int num1,int num2) {
    int result = num1 * num2;
    printf("%d * %d = %d",num1,num2,result);
};

void sub(int num1,int num2) {
    int result = num1 - num2;
    printf("%d - %d = %d",num1,num2,result);
};



int main (int argc, char *argv[]) {
	
    int calc,num1,num2,result;

    while(1) {
        printf("1: sum of two numbers \n2: difference of two numbers \n3: product of two numbers\n<0: terminate the program");
        printf("Select calculation: ");
        scanf("%d",&calc);
        if(calc < 0) {
            printf("Terminating the program...");
            break;
        }
        printf("Enter the first number:");
        scanf("%d",&num1);
        printf("Enter the second number:");
        scanf("%d",&num2);

        if(calc == 1) {
            add(num1,num2);
        } else if(calc == 2) {
            sub(num1,num2);
        } else if(calc == 3) {
            k(num1,num2);
        }
        
    }
    

	return 0;
}