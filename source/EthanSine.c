#include <stdio.h>
#include <math.h>
int main(void) {
	printf("Please enter a number between 0.0 and 1.0: ");
	double x;
	scanf("%lf", &x);
	printf("sin(%lf) = %lf\n", x, sin(x));
	return 0;
}