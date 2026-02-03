//salam
#include <stdio.h>
#include <stdint.h>

// int *bubble_sort(int array[], int size);
// void display(int array[], int size);


int *bubble_sort(int *array, int size) {
    for(int i = 0; i < size-1; i++) {
        for ( int j = i+1; j < size; j++){
            if (array[j] < array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    return array;
}

void display(int *array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d,", array[i]);
    }
    puts("\n");
}


int main(void) {
    int array[] = {1, 7, 5, 3, 6, 7, 2,1 ,10, 3, 1, 2};
    int size = sizeof(array)/sizeof(array[0]);
    display(array, size);
    bubble_sort(array, size);
    puts("\n");
    display(array, size);
    return 0;
}
