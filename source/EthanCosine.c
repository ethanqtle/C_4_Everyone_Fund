#include <stdio.h>
#include <math.h>
int main(void) {
	printf("Please enter a number between 0.0 and 1.0: ");
	double x;
	scanf("%lf", &x);
	printf("cos(%lf) = %lf\n", x, cos(x));
	return 0;
}