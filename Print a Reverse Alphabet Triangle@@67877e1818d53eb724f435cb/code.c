#include<stdio.h>

int main(){
    int a, i, j;
    scanf("%d", &a);
    for(i=0; i<a; i++){
        for(j=a; j>0; j--){
            printf("%c ",'A');
        }
        printf("\n");
    }
}