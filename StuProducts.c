#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};  
int main() {
    struct student s[60];
    int i, n;
    FILE *fptr;
    
    fptr = fopen("student.txt", "w");
    if (fptr == NULL) {
    printf("Error opening file!\n");
    return 1;
}
printf("Enter the number of students: ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &s[i].roll);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &s[i].marks);
    fwrite(&s[i], sizeof(s[i]), 1, fptr);
}
fclose(fptr);
fptr = fopen("student.txt", "r");
if (fptr == NULL) {
    printf("Error opening file!\n");
    return 1;
}
for (i = 0; i < n; i++) {
    fread(&s[i], sizeof(s[i]), 1, fptr);
    printf("Name: %s\n", s[i].name);
    printf("Roll Number: %d\n", s[i].roll);
    printf("Marks: %.2f\n", s[i].marks);
}
    fclose(fptr);
    return 0;
}