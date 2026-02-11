#include <stdio.h>


int binary_search(int *array, int low, int high, int el) {
    if (low > high) return -1;

    int mid = low + (high - low) / 2;

    if (array[mid] == el) return mid;
    if (array[mid] > el) {
        return binary_search(array, low, mid - 1, el);
    } else {
        return binary_search(array, mid + 1, high, el);
    }
}

int main(void) {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 41, 49};
    int size = (int) sizeof(array)/sizeof(array[0]);
    // int index = binary_search(array, size, 10);
    // printf("The index of %d is %d\n", 10, index);
    printf("The index of %d is %d\n", 10, binary_search(array, 0, size-1, 41));
    return 0;
}
