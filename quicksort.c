//salam
#include <stdio.h>
#include <unistd.h>

void quicksort(int *array, int low, int high);
void display(int *array, int size);

int main(void) {
    int array[] = {5, 3, 5, 1, 23, 55, 39, 6, 89, 10, 22, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original: ");
    display(array, size);

    quicksort(array, 0, size - 1);

    printf("Sorted:   ");
    display(array, size);
    return 0;
}

void quicksort(int *array, int low, int high) {
    if (low < high) {
        int pivot = array[low + (high - low) / 2]; // Choose middle element
        int i = low - 1;
        int j = high + 1;
        while (1) {
           do {i++;} while (array[i] < pivot); // while loop gets stuck...
           do {j--;} while (array[j] > pivot);
            if (i >= j) break;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
        quicksort(array, low, j);
        quicksort(array, j+1, high);
    }
}


void display(int *array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d,", array[i]);
    }
    puts("\n");
}



