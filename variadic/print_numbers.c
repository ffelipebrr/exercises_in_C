/*
write a function that prints numbers by a new line
prototype void print_numbers(const char *separator, const unsigned int n, ...)
where separator is the string to be printed between numbers
and n is the numbers of integers passed to the function
You re allowed to use printf
if separator is NULL, don't print it
print a new line at the end of your funtion
*/

#include <stdio.h>
#include <stdarg.h>

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	int		i = 0;
	va_list	listpar;
	va_start(listpar, n);
	while (i < n)
	{
		if (i == 0)
			printf("%d", va_arg(listpar, int));
		else
			printf("%s%d", separator, va_arg(listpar, int));
		i++;
	}
	
	va_end(listpar);
	printf("\n");
}

int	main(void)
{
	print_numbers(";",5,10,20,30,50,60);
	print_numbers("--",10,10,20,30,50,60,80,70,90,11,30);
}