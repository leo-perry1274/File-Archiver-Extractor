#include <stdio.h>
#include <stdlib.h>

static int compute_registry(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 21) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", compute_registry(21, 21));
    return 0;
}
