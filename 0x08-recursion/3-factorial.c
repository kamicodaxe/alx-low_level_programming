
/**
 * factorial - Computes the factorial of a non-negative integer using recursion
 * @n: Non-negative integer for which factorial is to be calculated
 *
 * Return: Factorial of n if n is non-negative, -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
