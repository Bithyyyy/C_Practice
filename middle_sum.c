// 20. Print numbers where first digit × last digit = sum of middle digits
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int num = i;
        int original = num;

        int last = num % 10;

        // Find first digit
        int first = num;
        while(first >= 10) {
            first /= 10;
        }

        // Sum of middle digits
        int middleSum = 0;
        int temp = num / 10; // remove last digit
        while(temp >= 10) {  // remove first digit
            middleSum += temp % 10;
            temp /= 10;
        }

        if(first * last == middleSum) {
            printf("%d ", original);
        }
    }

    return 0;
}
