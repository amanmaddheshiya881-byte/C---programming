
#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0;
    }

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime == 1) {
        printf("Prime Number");
    } else {
        printf("Not a Prime Number");
    }

    return 0;
}
