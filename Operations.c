#include<stdio.h>
int main() {
    int a=24, b=12, c, d, e, f, g;
    
    c=a+b;
    printf("Sum of %d and %d: %d\n", a, b, c);

    d=a-b;
    printf("Difference of %d and %d: %d\n", a, b, d);

    e=a*b;
    printf("Product of %d and %d: %d\n", a, b, e);

    f=a/b;
    printf("Quotient of %d and %d: %d\n", a, b, f);

    g=a%b;
    printf("Remainder of %d and %d: %d\n", a, b, g);

    return 0;
}