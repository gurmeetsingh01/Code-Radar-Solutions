#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d", &a);
    
    if (a <= 1) {
        printf("Not Prime");
    } else {
        for (int i = 1; i <= a; i++) {
            if (a % i == 0) {
                b++; 
            }
        }
        
        if (b == 2) {
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }
    
    return 0;
}