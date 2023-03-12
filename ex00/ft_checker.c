#include "libft.h"

int	begin_case(int carrer)
{
	if (carrer <= 2)
	{
		return (carrer * 3);
	}
	else if (carrer > 2 && carrer <= 5)
	{
		return ((carrer - 3) * 3 + 27);
	}
	else if (carrer > 5 && carrer <= 8)
	{
		return ((carrer - 3) * 3 + 54);
	}
	return (0);
}

int	carrer_par_index(int index)
{
	int	ligne;
	int	colonne;

	ligne = index / 9;
	colonne = index % 9;
	if (ligne < 3)
	{
		return (colonne / 3);
	}
	else if (ligne > 5)
	{
		return (colonne / 3 + 6);
	}
	else
	{
		return (colonne / 3 + 3);
	}
}

int	check_colonne(int *tab, int colonne, int nb)
{
	int	a;
	int	index;

	a = 0;
	index = colonne;
	while (a < 9)
	{
		if (tab[index] == nb + '0')
		{
			return (0);
		}
		index += 9;
		a++;
	}
	return (1);
}

int	check_ligne(int *tab, int ligne, int nb)
{
	int	a;
	int	index;

	a = 0;
	index = ligne * 9;
	while (a < 9)
	{
		if (tab[index] == nb + '0')
		{
			return (0);
		}
		index++;
		a++;
	}
	return (1);
}

int	check_carrer(int *tab, int carrer, int nb)
{
	int	a;
	int	debut;

	a = 1;
	debut = begin_case(carrer);
	while (a <= 9)
	{
		if (tab[debut] == nb + '0')
		{
			return (0);
		}
		if (a % 3 == 0)
		{
			debut += 7;
		}
		else
		{
			debut++;
		}
		a++;
	}
	return (1);
}
