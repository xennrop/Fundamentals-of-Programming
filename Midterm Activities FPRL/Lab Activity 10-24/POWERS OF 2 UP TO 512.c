#include <stdio.h>

int main() {
    int i, value = 2;
    
    printf("POWERS OF 2 UP TO 512\n");
    
    for (i = 1; value <= 512; i++) {
        printf("2^%d = %d\n", i, value);
        value = value * 2;
    
    }
    return 0;
}