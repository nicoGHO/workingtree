#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Sum: %d\n", add(x, y));
    printf("Difference: %d\n", subtract(x, y));
    printf("Product: %d\n", multiply(x, y));
	printf("Division: %d\n", divide(x, y));

    return 0;
}
