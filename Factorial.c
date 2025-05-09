#include<stdio.h>
int main() {
    int n,i,f;
    f=i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n) {
        f=f*i;
        i++;
    }
    printf("\nFactorial of %d is: %d", n, f);
    return 0;
}