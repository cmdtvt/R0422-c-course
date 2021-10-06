
#include <stdio.h>

int main (int argc, char *argv[]) {
    
    FILE *reading;
    FILE *writing;
    char filename[100] = "phonedir.txt";
    char first[15];
    char last[20];
    int amount = 0;

    /*printf("The program saves your first and last name into a file.\n");*/
    /*
    printf("Enter first name:");
    gets(first);
    printf("Enter last name:");
    gets(last);
    printf("Enter telephone number:");
    */
    char line[500];
    reading = fopen(filename, "r");
    if(reading) {
        fscanf(reading, "%d", &amount);
        printf("File has %d data.",amount);

        while (fgets(line, sizeof(line), reading)) {
            printf("%s", line);    


            writing = fopen(filename, "r");
            if(reading) {
                fscanf(reading, "%d", &amount);
                printf("File has %d data.",amount);

                while (fgets(line, sizeof(line), reading)) {
                    printf("%s", line);    
                }
            } else {
                printf("\n\nERROR");    
            }

            fclose(reading);





        }
    } else {
        printf("\n\nERROR");    
    }

    fclose(reading);





	return 0;
}


