#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = ~(1 << b);
    a = a & c;
    printf("%d",a);
    return 0;
}