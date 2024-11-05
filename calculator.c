#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int mod2(int a, b)  {
	return a % b;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Sum: %d\n", add(x, y));
    printf("Product: %d\n", multiply(x, y));
	if (b != 0)	
		printf("Division: %d\n", divide(x, y));
	else
		printf("Division cannot be performed because b = 0\n");
	
    return 0;
}
