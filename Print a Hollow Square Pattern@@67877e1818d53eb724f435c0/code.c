#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            if((i==1)||(i==a)){
                printf("*");
            }else{
                for(int k=1; k<=(i-2); k++){
                    printf(" ");
                }
            printf("*%d*\n", k);
            }
        }
        printf("\n");
    }
    return 0;
}