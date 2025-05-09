#include<stdio.h>
int main() {
    int a,b,c,r;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
    scanf("%d", &c);
    switch(c) {
        case 1:
            r=a+b;
            printf("Sum of %d and %d: %d\n", a, b, r);
            break;
        case 2:
            r=a-b;
            printf("Difference of %d and %d: %d\n", a, b, r);
            break;
        case 3:
            r=a*b;
            printf("Product of %d and %d: %d\n", a, b, r);
            break;
        case 4:
            r=a/b;
            printf("Quotient of %d and %d: %d\n", a, b, r);
            break;
        case 5:
            r=a%b;
            printf("Remainder of %d and %d: %d\n", a, b, r);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}