#include <stdio.h>
int sumArray(int arr[], int size) {
if (size == 0) {
return 0;
} else {
return arr[size - 1] + sumArray(arr, size - 1);
}
}
int main() {
int arr[] = {3, 5, 7, 2, 8};
int size = sizeof(arr) / sizeof(arr[0]);
int total = sumArray(arr, size);
printf("sum: %d\n", total);
return 0;
}
