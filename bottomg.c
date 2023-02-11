/*
** EPITECH PROJECT, 2022
** bottom
** File description:
** bottom right of the star
*/

void bottom_right2(int inter_spaces)
{
    for (int z = 0; z < inter_spaces; z++) {
        my_putchar(' ');
    }
    if (inter_spaces > 0) {
        my_putchar('*');
    }
}

int bottom_right(unsigned int size, int spaces, int inter_spaces)
{
    for (int i = 0; i < size; i++) {
        for (int y = 0; y < spaces; y++) {
            my_putchar(' ');
        }
        my_putchar('*');
        if (i < size) {
            bottom_right2(inter_spaces);
            inter_spaces = inter_spaces - 2;
        }
        spaces = spaces + 1;
        my_putchar('\n');
    }
}
