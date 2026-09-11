#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file!");
    } else {
        fclose(fptr);
    }
    return 0;
}