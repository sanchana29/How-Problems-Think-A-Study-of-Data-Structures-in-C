#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int x = 7;
    int n = 5;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x && i + 1 < n) {
            printf("ARRAY: Next element is %d\n", arr[i + 1]);
            return 0;
        }
    }

    printf("ARRAY: No next element found\n");
    return 0;
}
