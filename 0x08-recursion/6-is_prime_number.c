/**
 * is_prime_number - Checks if the input number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

