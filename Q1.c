#include <stdio.h>
void main(){
    int n, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) 
    for (k = 1; k <= n - i; k++) {
        printf(" ");
        for (j = 1; j <= i; j++)
        printf("*");
        printf("\n");
    }
 for (i = 2; i <= n; i++) {
        for (k = 1; k <= n - i; k++)
        printf(" ");
        for (j = 1; j <= i; j++)
        printf("*");
        printf("\n");
    }
}