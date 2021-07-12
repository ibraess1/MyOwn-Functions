int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	b = 0;
	i = ft_strlen(dest);
	while (src[b] && b < nb)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
