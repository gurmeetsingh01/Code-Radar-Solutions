#include<stdio.h>

int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=1; i<=N;i++){
        for(j=0; j<=N;j=j+2){
        printf("*\n");
        }
    }
    printf("\n");
    return 0;
}