#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a==1){
        printf("Not Prime");
    }else if(a>1){
        if(a%a == 0){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }else{
        printf("Not Prime");
    }
}