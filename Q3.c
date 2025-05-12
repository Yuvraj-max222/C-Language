//WACP using a recursive function to print the Fibonacci series.
#include<stdio.h>
#include<conio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    getch();
    return 0;
}