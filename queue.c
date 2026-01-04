#include <stdio.h>

int main() {
    int queue[] = {4, 2, 7, 1, 9};
    int front = 0, rear = 4;
    int x = 7;

    for (int i = front; i < rear; i++) {
        if (queue[i] == x) {
            printf("QUEUE: Element after %d is %d\n", x, queue[i + 1]);
            return 0;
        }
    }

    printf("QUEUE: No next element found\n");
    return 0;
}
