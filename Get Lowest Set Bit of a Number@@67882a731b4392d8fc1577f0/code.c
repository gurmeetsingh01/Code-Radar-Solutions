#include <stdio.h>

int main() {
    int a, b=0;
    scanf("%d", &a);
    while ((a & 1) == 0) {
    a >>= 1;
    b++;
    }
    printf("%d", b);
    return 0;
}