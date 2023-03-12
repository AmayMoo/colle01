#ifndef LIBFT_H
# define LIBFT_H

int		check_valide(int *tab, int index, int nb);
void	afficher_tab(int *tab);
int		begin_case(int carrer);
int		carrer_par_index(int index);
int		check_colonne(int *tab, int colonne, int nb);
int		check_ligne(int *tab, int ligne, int nb);
int		check_carrer(int *tab, int carrer, int nb);

#endif
