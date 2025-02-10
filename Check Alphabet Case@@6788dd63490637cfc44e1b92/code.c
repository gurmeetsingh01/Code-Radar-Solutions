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
        return 0;
    }
    return 0;
}