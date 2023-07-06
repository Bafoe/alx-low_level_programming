/**
 * calculate_sqrt - Helper function to recursively calculate the square root.
 * @n: The original number for which to find the square root.
 * @guess: The current guess value.
 *
 * Return: The square root of n if found, -1 otherwise.
 */
int calculate_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - Helper function to recursively calculate the square root.
 * @n: The original number for which to find the square root.
 * @guess: The current guess value.
 *
 * Return: The square root of n if found, -1 otherwise.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (calculate_sqrt(n, guess + 1));
}

