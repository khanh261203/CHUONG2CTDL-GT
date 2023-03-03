#include <stdio.h>

int count_positive_numbers(float arr[], int n)
{
   
    if (n == 0)
        return 0;


    if (arr[n - 1] > 0)
        return 1 + count_positive_numbers(arr, n - 1);

   
    return count_positive_numbers(arr, n - 1);
}

int main()
{
    float arr[] = {2.5, -1.0, 3.2, 4.0, -2.1, 5.7, -0.9, 1.8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = count_positive_numbers(arr, n);
    printf("Tong so thuc trong mang la: %d\n", count);

    return 0;
}

