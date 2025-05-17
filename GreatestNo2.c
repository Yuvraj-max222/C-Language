#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b) {
        printf("%d is the greatest number\n", a);
    } else if(b>a) {
        printf("%d is the greatest number\n", b);
    }
    else if(a != b) {
        printf("Comparing %d and %d for greatest number\n", a, b);
    }
    else {
        printf("Both numbers are equal\n");
    }
    return 0;
}