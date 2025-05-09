//WACP to print the first n integer numbers divisible by 7 by using for loop and if statement.
#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d integer numbers divisible by 7 are: ", n);
    for(i=1; i<=n; i++) {
        if(i%7==0) {
            printf("%d ", i);
        }
    }
    return 0;
}