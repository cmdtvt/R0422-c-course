
#include <stdio.h>

int main (int argc, char *argv[]) {
    
    FILE *opening;
    char filename[100];
    char first[15];
    char last[20];

    printf("The program saves your first and last name into a file.\n");
    printf("Enter your first name:");
    gets(first);
    printf("Enter your last name:");
    gets(last);
    printf("File where you want to save your name:");
    gets(filename);

    opening = fopen(filename, "w+");
    if(opening) {
        fputs(first,opening);
        fputs(last,opening);
        printf("\n\nSuccessfully saved the data!");
    } else {
        printf("\n\nERROR");    
    }

    fclose(opening);


	return 0;
}


