#ifndef FT_GETOPT_H
# define FT_GETOPT_H

#include <stdlib.h>

extern char *ft_optarg;
extern int ft_optind, ft_opterr, ft_optopt;

char *  ft_strchr (const char *str, int chr);
size_t  ft_strlen(const char *s);

int     ft_getopt(int argc, char * const argv[], const char *optstring);

#endif
