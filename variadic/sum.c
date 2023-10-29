/*
Write a function that returns the sum of all its parameters.
prototype: int sum_them_all(const unsigned int n, ...)
if n == 0, return 0
*/

#include <stdio.h>
#include <stdarg.h>

int	sum_them_all(const unsigned int n, ...)
{
	unsigned int	i = 0;
	int				sum = 0;

	va_list	listpa;
	va_start(listpa, n);

	while (i < n)
	{
		sum += va_arg(listpa, int);
		i++;
	}
	va_end(listpa);
	return (sum);
}



int	main(void)
{
	int	sum1, sum2, sum3;
	sum1 = sum_them_all(3,   2,3,1);
	sum2 = sum_them_all(4,   20,10,20, 40,50);
	sum3 = sum_them_all(6,   200,100,300,100,100,200);


	printf("Soma1 = %i\n", sum1);
	printf("Soma2 = %i\n", sum2);
	printf("Soma3 = %i\n", sum3);
}