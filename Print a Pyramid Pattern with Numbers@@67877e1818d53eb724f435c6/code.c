#include<stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(b=1; b<=(a-i); b++){
            printf(" ");
        }for(int j=1; j<=i; j++){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}