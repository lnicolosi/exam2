#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] > 64 && argv[1][i] < 91)
			{
				j = 0;
				while (j < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] > 96 && argv[1][i] < 123)
			{
				j = 0;
				while (j < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}