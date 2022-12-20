/*
 * E89 Pedagogical & Technical Lab
 * project:     main
 * created on:  2022-12-19 - 16:38 +0100
 * 1st author:  dylan.le - dylan.le
 * description: printf
 */
#include "pop.h"

int stu_dprintf(int fd, const char *pattern, ...);
int main(void)
{
    char *str;
    int i;
    char a;

    a = 'p';
    str = "lol fdkfs";
    i = stu_dprintf(1,"bonjour %sje %d veux de %c %pcoque, merci\n",str, 15623,a,546 );
    printf("%d\n", i);
}
