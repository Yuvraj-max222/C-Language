#include<stdio.h>
int main() {
    int a,i;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nFactors of %d are: ", a);
    for(i=1; i<=a; i++) {
        if(a%i==0) {
            printf("%d\n", i);
        }
    }
    return 0;
}