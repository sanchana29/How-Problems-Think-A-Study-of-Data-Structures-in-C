#include <stdio.h>

#define MAX 5

int main() {
    int stack[MAX] = {4, 2, 7, 1, 9};
    int top = 4;   // last element index
    int x = 7;

    printf("Popping elements to reach %d:\n", x);

    while (top >= 0) {
        int popped = stack[top--];
        printf("Popped: %d\n", popped);

        if (popped == x) {
            if (top >= 0) {
                printf("STACK: Element after %d is %d (accessible only after popping)\n",
                       x, stack[top]);
            } else {
                printf("STACK: No element after %d\n", x);
            }
            return 0;
        }
    }

    printf("STACK: Element not found\n");
    return 0;
}
