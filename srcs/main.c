#include "ft_ping.h"

int		parsing_options(int ac, char **av)
{
	int	c;

	c = 0;
	while ((c = getopt (ac, av, "hvVa:")) != -1)
	//while ((c = ft_getopt (ac, av, "vhV:ab")) != -1)
	{
		printf("[%c]\n", c);
		printf ("optarg-[%s], optind-[%d], opterr-[%d], optopt-[%d]\n", optarg, optind, opterr, optopt);
		switch (c) {
		case 'v':
			printf("v\nn");
			break;
		case 'h':
			print_usage();
			return -1;
		case 'V':
			printf("ft_ping from azereje\n");
			exit (0);
		default:
			return -1;
		}
	}
	printf ("optarg-[%s], optind-[%d], opterr-[%d], optopt-[%d]\n", optarg, optind, opterr, optopt);

	return (1);
}
void	init(t_options *options)
{
	options->flag_h = 0;
	options->flag_h = 0;
	options->flag_h = 0;
}

int	main(int ac, char **av)
{
	t_options options;
	if (ac == 1)
	{
		fprintf(stderr, "%s", usageError);
		return (1);
	}
	init(&options);
	parsing_options(ac, av);
	/*
	   write (2, notKnownError[0], ft_strlen(notKnownError[0]));
	   write (2, av[1], ft_strlen(av[1]));
	   write (2, notKnownError[1], ft_strlen(notKnownError[1]));
	*/
	return (0);
}
