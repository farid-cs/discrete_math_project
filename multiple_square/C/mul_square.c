#include <stdio.h>

/* Multiple square */
static double mul_square(double a, long n);

int main(void)
{
	double a;
	long   n;

	printf("Real number a: ");
	scanf("%lf", &a);
	printf("Positive integer n: ");
	scanf("%ld", &n);

	double result = mul_square(a, n);
	printf("Result: %lf\n", result);

	return 0;
}


/*
	To solve the problem we just need to square a real number 'a'
	positive number 'n' times.
*/

double mul_square(double a, long n)
{
	if (n == 0)
		return a;

	double prev = mul_square(a, n - 1);
	return prev * prev;
}
