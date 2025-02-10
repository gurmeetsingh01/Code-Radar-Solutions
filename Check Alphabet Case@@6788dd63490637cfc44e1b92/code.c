#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if(isalpha(a)){
        if (isupper(a)){
            printf("Uppercase");
        }else {
            printf("Lowercase");
        }
    }else{
        printf("0");
    }
    return 0;
}