#include <stdio.h>

void minMax(int *array, int n, int *low, int *high) {
    *low = array[0];
    *high = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] < *low) {
            *low = array[i];
        }
        if (array[i] > *high) {
            *high = array[i];
        }
    }
};

int main(void) {
    int data[5] = {4, -2, 9, 0, 7};
    int lo, hi;
    minMax(data, sizeof(data)/sizeof(data[0]), &lo, &hi);
    printf("min = %d, max = %d\n", lo, hi);
    return 0;
}