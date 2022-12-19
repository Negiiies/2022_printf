#include "pop.h"
int nb_len(int nb)
{
    int compteur = 0;
    while(nb >= 1 ){
        nb = nb / 10;
        compteur = compteur + 1;
    }
    return (compteur);
}
