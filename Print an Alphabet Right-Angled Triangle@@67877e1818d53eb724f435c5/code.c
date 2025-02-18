#include<stdio.h>
#include<ctype.h>

int main(){
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(int j=0; j!='\0'; j++){
            printf("%c ", j);
        }
    printf("\n");
    }
    return 0;
}