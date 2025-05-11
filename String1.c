#include<stdio.h>
#include<stdlib.h>
int main() {
    char str[100];
    printf("\n\nAccept a string from keyboard.\n");
    printf("----------------------------------\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("\nThe string you entered is: %s\n", str);
    return 0;
}