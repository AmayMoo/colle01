#include <unistd.h>
#include "stdlib.h"

int		check_valide(int *tab, int index, int nb);
void	afficher_tab(int *tab);

void	solve_sudoku(int *tab, int index)
{
	int	nb;

	if (index == 81)
	{
		afficher_tab(tab);
		exit (0);
	}
	if (tab[index] != '.')
	{
		solve_sudoku(tab, index + 1);
	}
	else
	{
		nb = 1;
		while (nb <= 9)
		{
			if (check_valide(tab, index, nb))
			{
				tab[index] = nb + '0';
				solve_sudoku(tab, index + 1);
				tab[index] = '.';
			}
			nb++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	if (argc != 10)
	{
		write(1, "Erreur\n", 7);
		return (1);
	}
	tab = malloc(81 * sizeof(int));
	i = 0;
	while (i < 81)
	{
		if (argv[(i / 9) + 1][i % 9] >= '1' && argv[(i / 9) + 1][i % 9] <= '9')
		{
			tab[i] = argv[(i / 9) + 1][i % 9];
		}
		else if (argv[(i / 9) + 1][i % 9] == '.')
		{
			tab[i] = '.';
		}
		else
		{
			write(1, "Erreur\n", 7);
			free(tab);
			return (1);
		}
		i++;
	}
	solve_sudoku(tab, 0);
	free(tab);
	return (0);
}
