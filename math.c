#include <stdio.h>
#include <stdlib.h>

/* Name: Sum
 * Description: Takes two numbers and returns their sum
 * Arguments: a - any integer
 *            b - any integer
 * Returns: a + b
 */
int Sum(int a, int b)
{
	return a + b;
}


int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	return (double)a / (double)b;
}

int Exp(int a, int b)
{
	int count;
	int result = 1;
	for(count = 0; count < b; count++)
		result *= a;
	return result;
}

int *Fib(int x)
{
	if (x < 1)
		return NULL;

	int *fibList = (int *)malloc(sizeof(int) * (x + 1));
	fibList[0] = 0;
	fibList[1] = 1;

	if (x == 1)
		return fibList;

	int count;
	for(count = 1; count < x; count++)
		fibList[count + 1] = fibList[count] + fibList[count - 1];

	return fibList;
}

/* Name: Factor
 * Description: Finds either the first or all prime factors of a given number
 * Arguments: a - Any positive integer
 *            prime - A flag to determine whether or not to find
 *                    one or multiple factors. This is used to rule
 *                    out prime number candidates faster.
 * Returns: Some form of list of prime factors of the given number.
 */
int *Factor(int a, int prime)
{
	int count;
	for(count = 2; count < a; count++)
		if (a % count == 0) /* found a factor use it */
		{
			/* if prime flag is set this is as far as we need to go */
			if (prime)
				return (int *)malloc((int));

			/* check this factor to see if its prime */
			if (isPrime(count))
			{
				// add to the list
			}
		}

	/* getting here with prime flag set means the number is prime */
	if (prime)
		return NULL;

//	return what ever the list is that we end up using;
}

int isPrime(int a)
{
	int *primeFactorList = Factor(count, 1);

	/* There were no factors of this number so it is prime */
	if (primeFactorList == NULL)
		return 1;

	/* Atleast one factor was found so it is not prime (freeing list) */
	free(primeFactorList);
	return 0;
}

int main(int argci, char *argv[])
{
	int *a = Fib(7);
	int x;
	for(x = 1; x < 8; x++)
		printf("%d\n", a[x]);

	free(a);

	return 0;
}
