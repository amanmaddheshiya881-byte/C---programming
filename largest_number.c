
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest Number = %d", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest Number = %d", b);
    }
    else {
        printf("Largest Number = %d", c);
    }

    return 0;
}
