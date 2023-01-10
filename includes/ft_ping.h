#ifndef FT_PING_H
# define FT_PING_H

#include <stdio.h>
#include <unistd.h>

#include "ft_error.h"
#include "ft_getopt.h"


extern char *optarg;
extern int optind, opterr, optopt;

typedef struct		s_options
{
	int         flag_h;
	int			flag_v;
    int			flag_V;
//	struct s_flags	*next;
}					t_options;

void	init(t_options *options);
#endif
