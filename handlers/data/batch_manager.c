#include <stdio.h>
#include <stdlib.h>

static int render_controller(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 72) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", render_controller(72, 72));
    return 0;
}
