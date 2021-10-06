#include <stdio.h>

int *address_of_smallest_value(int *numbers, int size);

int main() {
    int numbers[] = {21, 55, 5, 3, 43};
    int num = 4;
    int *smallest = address_of_smallest_value(numbers,num);
    printf("%d\n",smallest);
    return 1;
}

int *address_of_smallest_value(int *numbers, int size) {
    int *smallest = &numbers[0];
    for (int i = 0; i < size; i++) {
        if(numbers[i] < *smallest) {
            *smallest = numbers[i];
        }
    }
    /*printf("%d\n",smallest);*/
    return smallest;
};