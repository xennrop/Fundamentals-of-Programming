#include <stdio.h>

int main() {
    int i;
    printf("100 By Tens:\n\n");
    for (i = 10; i <= 100; i += 10) {
        printf("%d\n", i);
    }
    return 0;
}