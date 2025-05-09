#include<stdio.h>
#include<math.h>
int main() {
    double principal = 2300;
    double rate = 7.0;
    double time = 4.0;
    double amount = principal * pow((1 + rate / 100), time);
    double CI = amount - principal;
    printf("Compound Interest: %.2f\n", CI);
    return 0;
}