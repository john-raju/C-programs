#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int specialCount = 0, lowercaseCount = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            lowercaseCount++;
        } else if (!isalpha(str[i]) && !isspace(str[i])) {
            specialCount++;
        }
    }

    printf("Number of lowercase letters: %d\n", lowercaseCount);
    printf("Number of special characters: %d\n", specialCount);

    return 0;
}

