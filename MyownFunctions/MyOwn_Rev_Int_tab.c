void	ft_sort_in_tab (int *tab, int size)	
{
	int	i;
	int	temp[];
	while (i < size-1)
	{
			if (tab[i] > tab[i+1])
			{
			temp[i] = tab[i];
			tab[I] = tab[I + 1];
			tab[I + 1] = temp[i];
			
			}
			else if(tab[i] < tab[i+1])
				continue;
			i++;
	}
}

