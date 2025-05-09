// WACP to find whether a number is Armstrong or not by using while and if statement.
#include<stdio.h>
int main() {
    int n, originalNum, remainder, result = 0, digits = 0, power, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNum = n;
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }
    originalNum = n;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = 1;
        for (i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    if (result == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}