#include<stdio.h>
int main() {
    int a,b,i;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("\nEven numbers between %d and %d are: ", a, b);
    for(i=a; i<=b; i++) {
        if(i % 2 == 0) {
            printf("\nEven number is %d\n", i);
        }
    }
    return 0;
}