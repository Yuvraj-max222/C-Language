#include<stdio.h>
int factorial(int n) {
    int result=1;
    int i;
    for(i=1; i<=n; i++) {
        result = result * i;
    }
    return result;
}
int isPrime(int n) {
    int i;
    for(i=2; i<=n/2; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int choice, number;
    printf("Enter 1 to find factorial of a number\n");
    printf("Enter 2 to check if a number is prime\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &number);
            printf("Factorial of %d is %d\n", number, factorial(number));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &number);
            if(isPrime(number)) {
                printf("%d is a prime number\n", number);
            } else {
                printf("%d is not a prime number\n", number);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}