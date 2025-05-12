// WACP using a recursive function to print the gcd of two numbers.
#include<stdio.h>
#include<conio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int a, b;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d", a, b, gcd(a, b));
    getch();
    return 0;
}