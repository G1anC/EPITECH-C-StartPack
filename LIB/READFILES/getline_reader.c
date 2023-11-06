/*
** EPITECH PROJECT, 2023
** getline_reader.c
** File description:
** getline_reader
*/

#include "../../INCLUDE/my.h"

char **getline_reader(char *name)
{
    int i = 0;
    char **result = malloc(10000);
    size_t size = 0;
    FILE *file = fopen(name, "r");
    if (!fopen(name, "r")) return exitError("no file for u babe\n");
    while (getline(&result[i++], &size, file) != EOF);
    result[i] = NULL;
    fclose(file);
    return result;
}