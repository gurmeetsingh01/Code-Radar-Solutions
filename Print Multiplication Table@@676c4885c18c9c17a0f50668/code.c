#include<stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    for(int i=1; i<=10; i++){
    b=a*i;
    printf("%d x %d = %d\n", a, i, b);
    }
    //printf("\n");
    return 0;
}