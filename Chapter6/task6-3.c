#include <stdio.h>


int main (int argc, char *argv[]) {

    int num1,sum = 0;
    float avg;

    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");

    int i = 0;
    while (1) {
        
	    printf("Enter score (4-10):");
	    scanf("%d",&num1);
        if(num1 < 0){
            break;
        } else {
            sum+=num1;
            
        }
        i++;
    }

    avg = sum/(float)i;

    printf("You entered %d scores.\n",i);
    printf("Average score: %.2f\n",avg);  
    
	return 0;
}