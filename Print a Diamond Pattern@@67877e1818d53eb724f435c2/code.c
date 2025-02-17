#include<stdio.h>

int main(){
    int a, b, i, j, c, m, n;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(b=1; b<=a-i; b++){
            printf(" ");
        }
        for(j=1; j<=(2*a-1); j++){
            printf("*");
        }
    printf("\n");
    }
    for(m=i+1; m<=a+(a-1); m++){
        for(c=a+1; c; c++){
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}