/*
 * E89 Pedagogical & Technical Lab
 * project:     len
 * created on:  2022-12-19 - 16:48 +0100
 * 1st author:  dylan.le - dylan.le
 * description: printf
 */

#include "pop.h"
int nb_len(int nb)
{
    int compteur;

    compteur = 0;
    while(nb >= 1 ) {
        nb = nb / 10;
        compteur = compteur + 1;
    }
    return (compteur);
}
