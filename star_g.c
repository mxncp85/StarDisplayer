/*
** EPITECH PROJECT, 2022
** star
** File description:
** this code make a star !
*/

int top(unsigned int size)
{
    int spaces = ((size - 1) * 2 + 3) + ( size -1);
    int inter_spaces = 1;

    for (int i = 0; i < size; i++) {
        spaces = spaces - 1;
        for (int y = 0; y < spaces; y++) {
            my_putchar(' ');
        }
        my_putchar('*');
        if (i > 0) {
            top_spaces(inter_spaces);
            my_putchar('*');
            inter_spaces = inter_spaces + 2;
        }
        my_putchar('\n');
    }
}

int bottom(unsigned int size)
{
    int spaces = ((size - 1) * 2 + 3) - 1;
    int inter_spaces = 2 * (size - 2) + 1;

    bottom_right(size, spaces, inter_spaces);
}

int arm(unsigned int size)
{
    int inter_spaces = ((size - 2) * 2) + 1;

    for (int i = 0; i < (size - 1) * 2 + 3; i++) {
        my_putchar('*');
    }
    for (int z = 0; z < inter_spaces; z++) {
        my_putchar(' ');
    }
    for (int i = 0; i < (size - 1) * 2 + 3; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void star_general(unsigned int size)
{
    top(size);
    arm(size);
    middle(size);
    arm(size);
    bottom(size);
}

void    star(unsigned int size)
{
    if (size <= 0) {
        return 0;
    }
    if (size == 1) {
        star_size1(size);
    }
    if (size > 1) {
        star_general(size);
    }
}
