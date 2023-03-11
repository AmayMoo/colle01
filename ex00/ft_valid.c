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
