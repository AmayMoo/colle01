#include "libft.h"

int	check_ligne(int *tab, int ligne, int nb);
int	check_colonne(int *tab, int colonne, int nb);
int	check_carrer(int *tab, int carrer, int nb);

int	check_valide(int *tab, int index, int nb)
{
	int	ligne;
	int	colonne;
	int	carrer;

	ligne = index / 9;
	colonne = index % 9;
	carrer = carrer_par_index(index);
	return (check_ligne(tab, ligne, nb)
		&& check_colonne(tab, colonne, nb)
		&& check_carrer(tab, carrer, nb));
}
