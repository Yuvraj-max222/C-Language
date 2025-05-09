#include<stdio.h>
#include<string.h>
int main() {
    char name[50], status[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18) {
        printf("%s is an adult.\n", name);
    } else {
        printf("%s is a minor.\n", name);
    }
    return 0;
}