
#include <stdio.h>

int main (int argc, char *argv[]) {
	
    char *file_name= "numbers.s";
    int int1, int2, int3, int4, sum;
    FILE *opening = fopen(file_name, "r"); 
        /*fprintf(opening, "Joe");*/
        fscanf(opening, "%d %d %d %d ", &int1,&int2,&int3,&int4); 
    fclose(opening);
    sum = int1+int2+int3+int4;
    printf("Numbers found in the file numbers.s:\n%d, %d, %d and %d",int1,int2,int3,int4);
    printf("\nSum of the numbers: %d",sum);


	return 0;
}


