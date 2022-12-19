#include "pop.h"

int stu_dprintf(int fd, const char *pattern, ...);
int main(void)
{
    //char *str;
    int i;
    //char p;

    //p = 'o';
    //str = "lol fdkfs";
    i = stu_dprintf(1,"bonjour je veux %p g de coque, merci\n", 15623);
    printf("%d\n", i);
}
