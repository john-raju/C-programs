#include <stdio.h>

int main() {
    int n, k, i, even_sum = 0, odd_sum = 0;
    printf("Enter a number to check divisibility: ");
    scanf("%d", &n);
    printf("Enter a number to check divisibility by: ");
    scanf("%d", &k);
    printf("Numbers from 1 to %d which are divisible by %d:\n", n, k);
    for (i = 1; i <= n; i++) {
        if (i % k == 0) {
            printf("%d ", i);
            if (i % 2 == 0) {
                even_sum += i;
            } else {
                odd_sum += i;
            }
        }
    }
    printf("\nSum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
}
