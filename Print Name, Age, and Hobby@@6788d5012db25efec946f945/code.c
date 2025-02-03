#include <stdio.h>

int main() {
    char a[100];
    int b;
    char d[100];
    scanf("%s", a);
    scanf("%d", &b);
    scanf("%s", d);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s", d);
    return 0;
}