#include <stdio.h>

int largest(int num1,int num2,int num3) { 
    int largest = num1;
    if(num1 < num2) {
        largest = num2;
    } else if(num2 < num3) {
        largest = num3;
    }
    return largest;
}

int smallest(int num1,int num2,int num3) { 
    int smallest = num1;
    if(num2 < num1) {
        smallest = num2;
    }
    
    if(num3 < num2 && num3 < num1) {
        smallest = num3;
    }
    return smallest;
}



int main (int argc, char *argv[]) {
	
    int num1,num2,num3,small,big;

    printf("Enter the 1. number:");
    scanf("%d",&num1);
    printf("Enter the 2. number:");
    scanf("%d",&num2);
    printf("Enter the 3. number:");
    scanf("%d",&num3);

    big = largest(num1,num2,num3);
    small = smallest(num1,num2,num3);

    printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.",big,small);
        
    
    

	return 0;
}