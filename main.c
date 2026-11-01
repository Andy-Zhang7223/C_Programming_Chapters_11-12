#include <stdio.h>

void reverseArray(int *arr, int n) {
    int y = 0;
    int z = 0;
    for (int i = 0; i <= n/2; i++) {
        y = arr[i];
        z = arr[n-i-1];
        arr[n-i-1] = y;
        arr[i] = z;
    }
};

int main(void) {
    int data[5] = {4, -2, 9, 0, 7};
    int x = sizeof(data) / sizeof(data[0]);
    reverseArray(data, x);
    for (int i = 0; i < x; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }
    return 0;
}