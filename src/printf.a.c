#include "pop.h"
int stu_dprintf(int fd, const char *pattern, ...)
{
    va_list ap;
    char *s;
    int i;
    int y;
    int n;
    char m;

    n = 0;
    i = 0;
    va_start(ap, pattern);
    while (pattern[i] != '\0') {
        if (pattern[i] == '%' && pattern[i + 1] =='s') {
            s = va_arg(ap, char*);
            y = 0;
            write(fd, &s[y], stu_strlen(s));
            i += 2;
        }
        else if (pattern[i] == '%' && pattern[i + 1] == '%') {
            y = 0;
            write(fd, "%", stu_strlen(s));
            i += 2;
        }
        else if (pattern[i] == '%' && pattern[i + 1] == 'd') {
            print_base10(va_arg(ap, int));
            i += 2;
        }
        else if (pattern[i] == '%' && pattern[i + 1] == 'c') {
            m = va_arg(ap, int);
            write(fd, &m, 1);
            i += 2;
        }
        else if (pattern[i] == '%' && pattern[i + 1] == 'p') {
            print_base16(va_arg(ap, int));
            i += 2;
        }
        n += write(fd, &pattern[i], 1);
        i += 1;
    }
    va_end(ap);
    return (n);
}


