#include<stdio.h>
#include<ctype.h>

int main(){
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(char j='A'; j<='Z'; j++){
            printf("%c", j);
        }
    printf("\n");
    }
    return 0;
}