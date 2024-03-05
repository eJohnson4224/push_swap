int	ft_atoli(const char *str)
{
	int	i;
	int	neg;
    long    max_int;
    long    min_int;
	long	out;

	i = 0;
	neg = 1;
    max_int = 2147483647;
    min_int = -2147483648;
	out = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (10 * out) + (str[i] - '0');
		i++;
	}
    if (out > max_int || out < min_int)
        return (0);

	return (out * neg);
}