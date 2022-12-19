#ifndef POP_H_
#define POP_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
int stu_dprintf(int fd, const char *pattern, ...);
int stu_vputs(unsigned int nbr, ...);
unsigned int stu_strlen(const char *str);
int get_digit(int nb, int index);
int nb_len(int nb);
int print_base10(int nb);
int print_base16(int nb);
#endif /*POP_H_*/
