#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if(isalpha(a)){
        if (isupper(a)){
            if((a == 'A') || (a== 'E') || (a == 'I') || (a == 'O') || (a == 'U')){
                printf("Vowel");
            } else{
                printf("Consonant");
            }
        } else{
            if((a == 'a') || (a== 'e') || (a == 'i') || (a == 'o') || (a == 'u')){
                printf("Vowel");
            } else{
                printf("Consonant");
            }
        }
    } else{
        printf("Digit");
    }
    return 0;
}