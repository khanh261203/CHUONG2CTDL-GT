#include <stdio.h>

int T(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * T(n-1);
    }
}

int main() {
    int n = 5;
    int result = T(n);
    printf("%d! = %d\n", n, result);
    return 0;
}

