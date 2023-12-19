#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int factorize(long char *buffer)
{
	long long num;
	long long i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%llu=%llu*%llu\n",num,num/i,i);
			break;
		}
	}

return (0);
}
