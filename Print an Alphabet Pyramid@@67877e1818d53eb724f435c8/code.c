#include<stdio.h>

int main(){
    int a, i;
    scanf("%d", &a);
    for(i=0; i<a; i++){
        for(char j=0; j<=i; j++){
            printf("%c ",'A' + j);
        }
    printf("\n");
    }
    return 0;
}