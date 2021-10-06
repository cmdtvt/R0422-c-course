#include <stdio.h>

int main (int argc, char *argv[]) {

	char cort[10];
	char beverage;
	int daily;
	
	printf("Do you drink coffee or tea (c/t)?\n");
	scanf("%s",cort);


	printf("How many cups do you drink daily:\n");
	scanf("%d",&daily);

	if(strcmp(cort, "c") == 0) {
		if(daily > 0) {
			printf("You don't drink a lot of coffee, do you?");
		} else if(daily > 2) {
			printf("You drink a lot of coffee!");
		} else if(daily > 20) {
			printf("An error occurred in the program!");
		} else {
			printf("An error occurred in the program!");
		}

	} else if(strcmp(cort, "t") == 0) {
		if(daily > 0 && daily < 3) {
			printf("You don't drink a lot of tea, do you?");

		} else if(daily > 2 && daily < 21) {
			printf("You drink a lot of tea!");

		} else if(daily > 20) {
			printf("An error occurred in the program!");

		} else {
			printf("An error occurred in the program!");

		}
	} else {
		printf("An error occurred in the program!");
	}

	return 0;
}