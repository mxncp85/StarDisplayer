/*
** EPITECH PROJECT, 2022
** star
** File description:
** this code make a star !
*/

int    top_size1(int size)
{
    int    space_base = 3;
    int    i, place;

    for (i = 0; i < 1; i++) {
        for (place = 0; place != space_base; place++) {
            my_putchar(' ');
        }
        my_putchar('*');
    }
    my_putchar('\n');
}

int    arms_size1(int size)
{
    int    space_base = 3;
    int    i, place;

    for (place = 0; place < space_base; place++) {
        my_putchar('*');
    }
    my_putchar(' ');
    for (place = 0; place < space_base; place++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

int    middle_size1(int size)
{
    int    space_base = 3;
    int    i, place;

    my_putchar(' ');
    my_putchar('*');
    for (place = 0; place < space_base; place++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

int    bottom_size1(int size)
{
    top_size1(size);
}

void    star_size1(unsigned int size)
{
    top_size1(size);
    arms_size1(size);
    middle_size1(size);
    arms_size1(size);
    bottom_size1(size);
}
