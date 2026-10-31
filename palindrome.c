
#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp >= 0 && temp == rev) {
        printf("Palindrome Number");
    } else {
        printf("Not a Palindrome Number");
    }

    return 0;
}
