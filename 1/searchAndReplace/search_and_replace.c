#include <unistd.h>

int check_argument(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 4)
	{
		if (check_argument(argv[1], argv[2][0]) == 0)
		{
			putstr(argv[1]);
		}
		else if (check_argument(argv[1], argv[2][0]) == 1
		&& ft_strlen(argv[2]) == 1)
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
				}
				write(1, &argv[1][i], 1);
				i++;
			}
		}

	}
	write(1, "\n", 1);
}
