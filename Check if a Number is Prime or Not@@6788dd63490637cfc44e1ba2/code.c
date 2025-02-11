#include <stdio.h>

int main(){
    int a,i, b=0;
    scanf("%d", &a);
    for(i = 1; i<=a; i++){
        for(a%i == 0)
        b += 1;
    }
    if ((a==1) || (a==0)){
        printf("Not Prime");
    }else if(b>2){
            printf("Not Prime");
        }
    }else{
        printf("Prime");
    }
    return 0;
}