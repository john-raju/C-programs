#include <stdio.h>

int main() {
    int n, count, even;
    count = 1;
    even = 2;

    
    scanf("%d", &n);

    printf("The first %d even numbers are:\n", n);

    while (count <= n) {
        printf("%d ", even);
        even += 2;
        count++;
    }
}
