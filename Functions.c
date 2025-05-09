#include<stdio.h>
int add(int, int, int);
int main() {
    int a,b,c,sum=0;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    sum=add(a,b,c);
    printf("\nSum of %d, %d and %d is: %d", a, b, c, sum);
    return 0;
}
int add(int x, int y, int z) {
    int w;
    w=x+y+z;
    return w;
}