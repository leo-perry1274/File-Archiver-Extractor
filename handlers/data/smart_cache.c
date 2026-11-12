#include <stdio.h>
#include <stdlib.h>

static int parse_monitor(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 53) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", parse_monitor(53, 53));
    return 0;
}
