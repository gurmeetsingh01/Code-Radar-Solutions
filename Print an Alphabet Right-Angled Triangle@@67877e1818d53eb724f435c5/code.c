#include<stdio.h>

int main(){
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(int j=0; j<=i; j++){
            printf("%c ", j);
        }
    printf("\n");
    }
    return 0;
}