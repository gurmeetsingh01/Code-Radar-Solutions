#include <stdio.h>

int main(){
    int q;
    scanf("%d", &q);
    if(q%3 == 0){
        printf("Divisible by 3");
    } else if(q%5 == 0){
        printf("Divisible by 5");
    } else if((q%3 == 0) && (q%5 == 0)){
        printf("Divisible by Both");
    } else{
        printf("Not Divisible");
    }
    return 0;
}