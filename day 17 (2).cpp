#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int highest = arr[0];
    int second_highest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > highest) {
            second_highest = highest;
            highest = arr[i];
        } else if (arr[i] > second_highest && arr[i] != highest) {
            second_highest = arr[i];
        }
    }

    printf("The second highest number is %d\n", second_highest);

    return 0;
}

