/*
** EPITECH PROJECT, 2023
** len.c
** File description:
** len
*/

extern int len(char *str)
{
    int i = 0;

    while(str[i++]);
    return i;
}
