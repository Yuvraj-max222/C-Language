//WACP to print Fibonacci series without using recursion by using for loop.
#include<stdio.h>
int main() {
    int n, i, a = 0, b = 1, c;
    printf("Enter the value of n: ");
    
    scanf("%d", &n);
    printf("The Fibonacci series is: ");
    for(i=1;i<=n;i++) {
        printf("%d", a);
        if(i < n) {
            printf(", ");
        }
        else {
            printf(".\n");
        }
        
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}