#include <stdio.h>

unsigned long long factorial(int n) {
if (n < 0) {
return 0;
} else if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}
int main() {
int num;
printf("enter non-negative int: ");
scanf("%d", &num);
printf("factorial is %llu\n", factorial(num));

return 0;
}
