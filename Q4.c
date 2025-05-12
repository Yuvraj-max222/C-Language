// WACP using a recursive function to find the factorial of a number.
#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, fact(n));
    getch();
    return 0;
}