#include<stdio.h>
#define ROWS 10
#define COLS 10
int main() {
    int row, col, product[ROWS][COLS];
    int i, j;
    printf("Multiplication Table: \n");
    printf("    ");
    for(i=1; i<=COLS; i++) {
        printf("%4d", i);
    }
    printf("\n");
    for(i=0; i<=COLS; i++) {
        printf("----");
    }
    printf("\n");
    for(row=1; row<=ROWS; row++) {
        printf("%2d |", row);
        for(col=1; col<=COLS; col++) {
            product[row-1][col-1] = row*col;
            printf("%4d", product[row-1][col-1]);
        }
        printf("\n");
    }
    return 0;
}