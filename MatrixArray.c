#include<stdio.h>
int main() {
    int m[3][3], i, j, s=0;
    printf("Enter the elements of the matrix: ");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nMatrix is: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            s=s+m[i][j];
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of the elements of the matrix is: %d", s);
    return 0;
}