#include <stdio.h>

int main() {
    double x, term, sum;
    int i, sign;

    scanf("%lf", &x);

    sum = 0.0;
    term = x;     // first term x^1 / 1!
    sign = 1;     // + for first term

    for(i = 1; i <= 9; i += 2) {   // 1,3,5,7,9 ... powers
        sum += sign * term;

        // prepare next term
        term = term * x * x / ((i + 1) * (i + 2));

        sign = -sign;   // alternate + -
    }

    printf("%.3lf\n", sum);

    return 0;
}
