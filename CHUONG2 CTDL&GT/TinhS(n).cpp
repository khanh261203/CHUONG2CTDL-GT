#include <stdio.h>

int S(int n) {
    if (n == 1) { 
        return 1;
    }
    int s = S(n - 1);
    return s + n * n;
}

int main() {
    int n = 5;
    printf("S(%d) = %d", n, S(n));
    return 0;
}

