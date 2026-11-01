#include <ctype.h>
#include <stdio.h>
#include <string.h>

void removeSpaces(const char *input, char *output) {
    int i = 0, j = 0;
    while (input[i] != '\0') {
        if (input[i] != ' ' && input[i] != ',' && input[i] != '.' && input[i] != '-'
            && input[i] != '_' && input[i] != '?' && input[i] != '!') {
            output[j++] = input[i];
        }
        i++;
    }
    output[j] = '\0';
}

int palindromechecker() {
    bool isPalindrome = true;
    int top = 0;
    char phrase[100] = "";
    printf("Enter a phrase: ");
    fgets(phrase, sizeof(phrase), stdin);
    char phrase2[100] = "";
    removeSpaces(phrase, phrase2);
    top = strlen(phrase2) - 2;
    for (int i = 0; i < strlen(phrase); i++) {
        phrase2[i] = toupper(phrase2[i]);
    }
    for (int i = 0; top > 0; i++) {
        if (phrase2[i] != phrase2[top]) {
            printf("Not a Palindrome\n");
            isPalindrome = false;
            break;
        }
        top--;
    }
    if (isPalindrome) {
        printf("Palindrome\n");
    }
}

int main(void) {
    palindromechecker();
    return 0;
}