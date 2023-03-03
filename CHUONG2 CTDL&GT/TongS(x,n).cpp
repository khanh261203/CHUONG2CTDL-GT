#include <stdio.h>

double S(double x, int n) {
    if (n == 0) { 
        return 0;
    }
    double s = S(x, n - 1);
    return s + pow(x, n) / giaithua(n);
}

int giaithua(int n){
    int gt = 1;
    for(int i=1; i<=n; i++){
        gt *= i;
    }
    return gt;
}

int main() {
    double x = 2;
    int n = 5;
    printf("S(%.2f, %d) = %.2f", x, n, S(x, n));
    return 0;
}

