
#include <stdio.h>

int gcd(int x, int y) {
if (x % y == 0) {
return y;
} else {
return gcd(y, x % y);
}
}
int main() {
int a, b;
printf("enter two positive int: ");
scanf("%d %d", &a, &b);
printf("GCD is %d\n", gcd(a, b));

return 0;
}
