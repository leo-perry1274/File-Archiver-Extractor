#include <stdio.h>
#include <stdlib.h>

static int resolve_context(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 77) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", resolve_context(77, 77));
    return 0;
}
