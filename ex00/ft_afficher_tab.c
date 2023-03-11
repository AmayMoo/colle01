void	afficher_tab(int *tab)
{
	int	i;

	i = 0;
	while (i < 81)
	{
		write(1, &tab[i], 1);
		if (i % 9 == 8)
		{
			write(1, "\n", 1);
		}
		i++;
	}
}
