#include<stdio.h>
int main() {
    int i=3, j=3, row, col, a[3][3], sum=0;
    printf("Enter the elements of the matrix: ");
    for(row=0; row<i; row++) {
        for(col=0; col<j; col++) {
            scanf("%d", &a[row][col]);
        }
    }
    printf("\nThe matrix is: \n");
    for(row=0; row<i; row++) {
        for(col=0; col<j; col++) {
            if(row==col) {
                sum=sum+a[row][i-row-1];
            }
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
    printf("Sum of diagonal elements of the matrix is: %d", sum);
    return 0;
}