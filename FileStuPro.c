#include<stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s[60];
    int i;
    FILE *fptr;
    fptr = fopen("student.txt", "r");
    printf("The contents of the file are: \n");
    while(fread(&s[i], sizeof(s[i]), 1, fptr)) {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
    fclose(fptr);
    return 0;
}