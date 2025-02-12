#include<stdio.h>

void decimalToBinary(int n){
    int flag = 0;
    for(int i = 31; i>=0; i--){
        if ((n >> i) & 1) {
            flag = 1;
        }
        if (flag){
            printf("%d", (n >> 1) & 1);
        }
    }
    if (!flag) {
        printf("0";)
    }
}
int main(){
    int a;
    scanf("%d", &a);
    decimalToBinary(a);
    return 0;
}