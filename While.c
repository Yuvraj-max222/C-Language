#include<stdio.h>
int main() {
    int n,m,r,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    m=n;
    while(n>0) {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(m==s) {
        printf("\n%d is a palindrome number.", m);
    } else {
        printf("\n%d is not a palindrome number.", m);
    }
    return 0;
}