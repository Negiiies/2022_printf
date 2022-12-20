/*
 * E89 Pedagogical & Technical Lab
 * project:     base16
 * created on:  2022-12-19 - 16:40 +0100
 * 1st author:  dylan.le - dylan.le
 * description: print
 */

#include  "pop.h"

const char *base16 = "0123456789abcdef";

int print_base16(int nb)
{
    char *k;
    int i;
    int p;

    i = 0;
    k = malloc(sizeof(char) * 32);
    while(nb != 0) {
        p = nb % 16;
        nb /= 16;
        k[i] = base16[p];
        i += 1;
    }
    write(1, k, stu_strlen(k));
    free(k);
    return(0);
}
