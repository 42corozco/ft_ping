#include "ft_ping.h"

int	parsing_options(int ac, char **av)
{
	int c;

	c = 0;
	printf("globale -> [%d]", globale);
	while ((c = getopt (ac, av, "vhV")) != -1)
	{
		printf("[%c]\n", c);
		switch (c) {
		case 'h':
			printf("v\n");
			break;
		case 'v':
			printf("v\n");
			break;
		case 'V':
			printf("ft_ping from azereje\n");
			break;
		default:
			return -1;
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		fprintf(stderr, "%s", usageError);
		return (1);
	}
	parsing_options(ac, av);
	/*
	   write (2, notKnownError[0], ft_strlen(notKnownError[0]));
	   write (2, av[1], ft_strlen(av[1]));
	   write (2, notKnownError[1], ft_strlen(notKnownError[1]));
	   */
	return (0);
}
