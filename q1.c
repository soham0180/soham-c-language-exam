// create a c program to check if a character enterterd by a user is a vowel or consonant using swich statement
#include <stdio.h>

int main()
 {
    char ch;

    
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  

    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        switch (ch) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("'%c' is a vowel.\n", ch);
                break;
            default:
                printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
