#include<stdio.h>
#include<string.h>
int main() {
    char str[20];
    char reversedStr[20];
    int i, j;
    printf("Enter any word: ");
    scanf("%s", str);
    j = 0;
    for(i=strlen(str)-1; i>=0; i--) {
        reversedStr[j++] = str[i];
    }
    reversedStr[j] = '\0';
    if(strcmp(str, reversedStr) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}