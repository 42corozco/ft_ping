#ifndef FT_GETOPT_H
# define FT_GETOPT_H

#include <stdlib.h>

extern char *ft_optarg;
extern int ft_optind, ft_opterr, ft_optopt;

int     ft_getopt(int argc, char * const argv[], const char *optstring);

#endif
