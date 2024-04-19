#include <stdio.h>

static double multiple_square(double a, long n);

int main(void)
{
	double a = 0.0;
	int    n = 0;

	printf("Real number a: ");
	scanf("%lf", &a);
	printf("Positive integer n: ");
	scanf("%d", &n);

	double result = multiple_square(a, n);
	printf("Result: %lf\n", result);

	return 0;
}


/*
	To solve the problem we just need to square a real number 'a'
	positive number 'n' times.
*/

double multiple_square(double a, long n)
{
	if (n == 0)
		return a;

	double prev = multiple_square(a, n - 1);
	return prev * prev;
}
