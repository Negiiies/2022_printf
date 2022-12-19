int get_digit(int nb, int index)
{
    while(index > 0){
        nb = nb / 10;
        index = index - 1;
    }
    nb = nb % 10;
    return (nb);
}

