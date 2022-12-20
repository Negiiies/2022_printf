/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-12-19 - 16:38 +0100
 * 1st author:  dylan.le - dylan.le
 * description: print
 */
#include "print.h"
#include "pop.h"

static void init(struct print *info)
{
    info->n = 0;
    info->i = 0;
    info->y = 0;
}

int stu_dprintf(int fd, const char *pattern, ...)
{
    struct print info;

    init(&info);
    va_start(info.ap, pattern);
    while (pattern[info.i] != '\0') {
        if (pattern[info.i] == '%' && pattern[info.i + 1] =='s') {
            info.s = va_arg(info.ap, char*);
            write(fd, &info.s[info.y], stu_strlen(info.s));
            info.i += 2;
        } else if (pattern[info.i] == '%' && pattern[info.i + 1] == '%') {
            write(fd, "%", stu_strlen(info.s));
            info.i += 2;
        } else if (pattern[info.i] == '%' && pattern[info.i + 1] == 'd') {
            print_base10(va_arg(info.ap, int));
            info.i += 2;
        } else if (pattern[info.i] == '%' && pattern[info.i + 1] == 'c') {
            info.m = va_arg(info.ap, int);
            write(fd, &info.m, 1);
            info.i += 2;
        } else if (pattern[info.i] == '%' && pattern[info.i + 1] == 'p') {
            print_base16(va_arg(info.ap, int));
            info.i += 2;
        }
        info.n += write(fd, &pattern[info.i], 1);
        info.i += 1;
    }
    va_end(info.ap);
    return (info.n);
}


