
#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char text[15];
    int vowels = 0;

    printf("The program calculates the number of vowels.\n");
    printf("Enter a word:");
    gets(text);

    for (int i = 0; i < 15; i++) {
        switch (text[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
                vowels++;
        }
    }

    printf("The word contains %d vowels.",vowels);

	return 0;
}


