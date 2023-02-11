/*
** EPITECH PROJECT, 2022
** middleg
** File description:
** middle
*/

int middle_high(unsigned int size, int spaces, int inter_spaces)
{
        for (int y = 0; y < spaces; y++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int z = 0; z < inter_spaces; z++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
}

int middle_bott(unsigned int size, int spaces, int inter_spaces)
{
        for (int y = 0; y < spaces; y++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int z = 0; z < inter_spaces + 4; z++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
}

int middle(unsigned int size)
{
    int spaces = 1;
    int inter_spaces = 2 * ((size - 1) * 2 + 3) + ((size - 2) * 2) - 3;

    for (int i = 0; i < size; i++) {
        middle_high(size, spaces, inter_spaces);
        spaces = spaces + 1;
        inter_spaces = inter_spaces - 2;
    }
    spaces--;
    for (int i = 1; i < size; i++) {
        spaces = spaces - 1;
        middle_bott(size, spaces, inter_spaces);
        inter_spaces = inter_spaces + 2;
    }
}
