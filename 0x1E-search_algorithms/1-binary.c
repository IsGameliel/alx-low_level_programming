#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    size_t low = 0, high = size - 1;
    while (low <= high) {
        size_t mid = (low + high) / 2;
        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        if (array[mid] == value) {
            return mid;
        } else if (array[mid] > value) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}
