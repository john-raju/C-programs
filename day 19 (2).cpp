#include <stdio.h>

int main() {
    int n, i, sum_even, sum_odd;
    sum_even = 0;
    sum_odd = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    printf("The difference between the sum of even numbers and odd numbers from 1 to %d is %d.\n", n, sum_even - sum_odd);

}
