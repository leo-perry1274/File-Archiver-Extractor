#include <stdio.h>
#include <stdlib.h>

static int compute_factory(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 41) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", compute_factory(41, 41));
    return 0;
}
