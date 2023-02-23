#include <stdio.h>

int main() {
    int n1, n2, i, count = 0;

    printf("n1= ");
    scanf("%d", &n1);

    printf("n2= ");
    scanf("%d", &n2);

    printf("Odd numbers between %d and %d except every third odd number:\n", n1, n2);

    for (i = n1; i <= n2; i++) {
        if (i % 2 == 1) {
            count++;
            if (count % 3 != 0) {
                printf("%d\n", i);
            }
        }
    }

}
