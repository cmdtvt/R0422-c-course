
#include <stdio.h>

int main (int argc, char *argv[]) {
    
    FILE *reading;
    FILE *writing;
    char filename[100] = "phonedir.txt";
    int ignore = 0;
    char line[500];
    reading = fopen(filename, "r");
    if(reading) {
        while (fgets(line, sizeof(line), reading)) {
            if (ignore != 0) {
                printf("%s", line);    
            }
            ignore ++;
        }
    } else {
        printf("\n\nERROR");    
    }

    fclose(reading);





	return 0;
}


