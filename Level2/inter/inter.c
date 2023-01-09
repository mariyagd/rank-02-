#include <unistd.h>

char	*ft_strchr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	size_t	i;

	i = 0;
	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] != '\0')
		{
			if (ft_strchr(av[2], av[1][i]) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	return (0);
}




