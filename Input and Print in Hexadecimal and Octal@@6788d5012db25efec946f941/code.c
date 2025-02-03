#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("Hexadecimal: %1qazx\n", a);
    printf("\nOctal: %#o\n", a);
    return 0;
}