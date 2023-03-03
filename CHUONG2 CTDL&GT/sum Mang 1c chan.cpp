#include <stdio.h>

int sum_even(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        int sum = sum_even(arr, n-1);
        if (arr[n-1] % 2 == 0) {
            return sum + arr[n-1];
        } else {
            return sum;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sum_even(arr, n);
    printf("Tong cac so chan la: %d\n", result);
    return 0;
}

