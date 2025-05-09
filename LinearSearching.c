#include<stdio.h>
int  i;
int linear_search(int arr[], int n, int key) {
    for(i=0; i<n; i++) {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = linear_search(arr, n, key);
    if(result==-1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}