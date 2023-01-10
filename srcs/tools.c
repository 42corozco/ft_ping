#include "ft_ping.h"

const char *usageError = "ft_ping: usage error: Destination address required\n";
const char *notKnownError[2] = {"ft_ping: ", ": Name or service not known"};

void	print_usage(void)
{
	fprintf(stdout, "%s", "\nUsage\n  ft_ping[options] <destination>\n\n");
	fprintf(stdout, "%s", "Options:\n  <destination>\t\tdns name or ip address\n");
	fprintf(stdout, "%s", "  -h\t\t\tprint help and exit\n");
	fprintf(stdout, "%s", "  -v\t\t\tverbose output\n");
	fprintf(stdout, "%s", "  -V\t\t\tprint version and exit\n");
	fprintf(stdout, "%s", "# -q\t\t\tquiet output\n");
	fprintf(stdout, "%s", "# -n\t\t\tno dns name resolution\n");
	fprintf(stdout, "%s", "# -D\t\t\tprint timestamps\n");
	fprintf(stdout, "%s", "# -W <timeout>\t\ttime to wait for response\n");
	fprintf(stdout, "%s", "# -c <count>\t\tstop after <count> replies\n");
	fprintf(stdout, "%s", "# -i <interval>\t\tseconds between sending each packet\n");
	fprintf(stdout, "%s", "\nFor more details see ping(8).\n");
	exit(2);
}