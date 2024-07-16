#include <stdio.h>

int main() {
    int c = 0, i, j, n;
    scanf("%d", &n); // Read the value of n

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (j = 0; j <= i; j++) {
                c++;
                if (j < i) {
                    printf("%d$", c);
                } else {
                    printf("%d", c);
                }
            }
        } else {
            c += i;
            for (j = 0; j <= i; j++) {
                if (j < i) {
                    printf("%d$", c);
                } else {
                    printf("%d", c);
                }
                c--;
            }
            c = c + i + 1; // Reset c to correct value
        }
        printf("\n"); // Print newline after each row
    }

    return 0; // Return statement
}
