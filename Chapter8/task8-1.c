#include <stdio.h>

int main (int argc, char *argv[]) {
	
    int days=30,day=0;
    float hours = 0;
    
    printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n");
    printf("How many days:");
    scanf("%d",&days);
    float arr[days];

    while(1){
        if(day >= days) {
            break;
        }
        printf("Enter the working hours for day %d:",day+1);
        scanf("%f",&hours);
        arr[day] = hours;
        day++;
    }


    /*Calculate sum*/
    double sum = 0;
    int i = 0;
    for (int i = 0; i < days; i++) {
       sum = sum + arr[i];
    }

    /*Calculate average*/

    size_t n = sizeof(arr)/sizeof(arr[0]);
    double avg = sum/n;

    


    printf("Total hours worked: %.1f \n",sum);
    printf("Average length of day: %.1f\n",avg);
    printf("Hours entered:");
    for (int i = 0; i < days; i++) {
        printf(" %.1f",arr[i]);
    }  

	return 0;
}