#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n >= 0 && n <= 9)
		putchar(n + 48);
	else if (n < 0)
	{
		putchar('-');
		putnbr(n * -1);
	}
	else
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}

}


int main(void)
{
	int i = 1;
	
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz", 8);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else if ((i % 3) == 0)
			write(1, "fizz", 4);
		else
			putnbr(i);
		putchar('\n');
		i++;
	}

	return (0);
}
