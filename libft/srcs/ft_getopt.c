#include <stddef.h>
#include "ft_getopt.h"

//borrar
#include <stdio.h>

char	*ft_optarg = NULL;
int		ft_optind = 1;
int		ft_opterr = 1;
int		ft_optopt = '?';

//optarg: si la option necesita un argumento
//optind: index donde estamos en av
//opterr: no lo se
//optopt: si error, no existe

int ft_getopt(int argc, char * const argv[], const char *optstring)
{
	static char	*nextchar;

	printf("-----------------------argv[%d]: [%s]\n", ft_optind, argv[ft_optind]);
	printf("-----------------------flags:[%s]\n", optstring);

	ft_strchr(optstring,'a');


	return (-1);
}
