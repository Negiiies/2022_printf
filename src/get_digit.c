/*
 * E89 Pedagogical & Technical Lab
 * project:     get_digit
 * created on:  2022-12-19 - 16:47 +0100
 * 1st author:  dylan.le - dylan.le
 * description: printf
 */

int get_digit(int nb, int index)
{
    while(index > 0){
        nb = nb / 10;
        index = index - 1;
    }
    nb = nb % 10;
    return (nb);
}

