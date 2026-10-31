
#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reverse Array:\n");

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
