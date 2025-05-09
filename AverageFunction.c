#include<stdio.h>
float average(float, float, float);
int main() {
    int a,b,c;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    printf("\nAverage of %d, %d and %d is: %.2f", a, b, c, average(a,b,c));
    return 0;
}
float average(float x, float y, float z) {
    float w;
    w=(x+y+z)/3;
    return w;
}