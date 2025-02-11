#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int i, b=0;
    for(i = 1; i<=a; i++){
        for(a%i == 0)
        b += 1;
    }
    if ((a==0) || (a==1)){
        printf("Not Prime");
    }else if(b>2){
            printf("Not Prime");
    }else{
        printf("Prime");
    }
    return 0;
}