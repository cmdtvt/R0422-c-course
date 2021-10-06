#include <stdio.h>
#define MAX_LIMIT 50


int main (int argc, char *argv[]) {

    int amount;


	printf("Enter an integer: ");
	scanf("%d",&amount);


    int i;
    for(i = 1; i <= amount; i++)  {
       printf("%d\n",i);
    }
    



	return 0;
}