#include "ft_ping.h"

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		fprintf(stderr, "%s", usageError);
		return (1);
	}

	write (2, notKnownError[0], ft_strlen(notKnownError[0]));
	write (2, av[1], ft_strlen(av[1]));
	write (2, notKnownError[1], ft_strlen(notKnownError[1]));
	return (0);
}
