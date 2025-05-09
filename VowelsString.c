#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int L, i, vc=0;
    char sn[1000];
    printf("Enter a string: ");
    gets(sn);
    L = strlen(sn);
    for(i=0; i<L; i++) {
        if(tolower(sn[i])=='a' || tolower(sn[i])=='e' || tolower(sn[i])=='i' || tolower(sn[i])=='o' || tolower(sn[i])=='u') {
            vc++;
        }
    }
    printf("The number of vowels in the string is: %d\n", vc);
    return 0;
}