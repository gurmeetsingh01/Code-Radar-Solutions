#include<stdio.h>

void decimalToBinary(int n){
    unsigned int mask = 1 << 31;
    int flag = 0;
    while (mask > 0){
        if (n & mask){
            flag = 1;
        }
        if (flag){
            printf("%d", (n & mask) ? 1 : 0);
        }
        mask >>= 1;
    }
    if (!flag) {
        printf("0");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}