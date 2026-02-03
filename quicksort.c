//salam
#include <stdio.h>
#include <unistd.h>

int *quicksort(int *array, int size);
void display(int *array, int size);

int main (void) {
    int array[] = {5, 3, 5, 1, 23, 55, 39, 6, 89, 10, 22, 7};
    int size = sizeof(array)/sizeof(array[0]);
    display(array, size);
    quicksort(array, size);
    display(array, size);
    return 0;
}

int *quicksort(int *array, int size) {
    if (size == 1) return 0;

    // int pivot = array[size/2];
    int pivot = array[size-1];
    int *p;
    int *left;
    int *right;
    left = array;
    right = &array[size-2];
    p = &array[size/2];
    printf("the pivot is %d\n", pivot);

    printf("left: %d right: %d\n", *left, *right);
    // while pointers dont intersect or dont touch the pivot, proceed
    // printf("left pointer: %p\n", left);
    // printf("pivot pointer: %p\n", p);
    // printf("right pointer: %p\n", right);

    // while ((left < p-1 || right > p-1) && !(left == right)) { // while left and right pointers are not pointing at the pivot
    while (left < &array[size] || right > &array[0]) {
        sleep(1);
        while (*left < pivot) { //was *left <= pivot
            left++;
            printf("left: %d right: %d\n", *left, *right);
            // printf("left is now: %d\n", *left);
        }

        while (*right > pivot) {
            right--;
            // printf("right is now: %d\n", *right);
            printf("left: %d right: %d\n", *left, *right);
        }

        int temp = *left;
        *left = *right;
        *right = temp;
        puts("inner loop ends");
        printf("left: %d right: %d\n", *left, *right);
        display(array, size);
    }
    quicksort(array, (size/2));
    // quicksort(&array[size/2], (size/2));
    return 0;   //change
}


void display(int *array, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d,", array[i]);
    }
    puts("\n");
}



