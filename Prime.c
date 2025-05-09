#include<stdio.h>
int main() {
    int a,b,i,j,c=0;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("\nPrime numbers between %d and %d are: ", a, b);
    for(i=a; i<=b; i++) {
        for(j=2; j<=i/2; j++) {
            if(i%j==0) {
                c=1;
                break;
            }
        }
        if(c==0) {
            printf("%d\n", i);
        }
        c=0;
    }
    return 0;
}