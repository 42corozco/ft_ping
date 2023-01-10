char * ft_strchr (const char *str, int chr)
{
	while (*str)
	{
		if (*str == chr)
			return (char *) str;
		str++;
	}
	return 0;
}
