//wap to find whether a input char is vowel or consonant or other character using switch statement.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf(" %c", &ch);

    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a Vowel.\n", ch);
                break;
            default:
                printf("%c is a Consonant.\n", ch);
        }

    } else {
    
        printf("%c is an Other Character.\n", ch);
    }

    return 0;
}
