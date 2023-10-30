/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_


    // I N C L U D E S


    #include <dirent.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <signal.h>
    #include <ncurses.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <sys/wait.h>
    #include <sys/time.h>
    #include <sys/resource.h>
    #include <string.h>


    // L I B R A R Y


        // printf


    int my_printf(char const *str, ...);
    void tableau_flags_fonctions(char const *str, int i, va_list list);
    int my_putchar(char);
    void flag_d(va_list list);
    void flag_i(va_list list);
    void flag_s(va_list list);
    void flag_c(va_list list);
    void flag_pourcent(va_list list);
    void flag_a(va_list list);
    void flag_A(va_list list);
    void flag_p(va_list list);
    void flag_n(va_list list);
    void flag_minus(va_list list);
    void flag_F(va_list list);
    void flag_g(va_list list);
    void flag_G(va_list list);
    void flag_u(va_list list);
    void flag_o(va_list list);
    void flag_x(va_list list);
    void flag_X(va_list list);
    void flag_f(va_list list);
    void flag_b(va_list list);
    void flag_x_maj(va_list list);
    double my_put_float(double f);
    void argx(int arg);
    int my_put_nbr(int);
    void my_putstr(char *);


        // important functions

    // returns 0 if the 2nd parameter exists in the first
    // returns -1 if not
    int is_existing(char *, char);
    // returns the length of parameter
    int my_strlen(char *);
    // returns the int value of the string given as parameter
    int my_getnbr(char *);
    // returns the first string, copy of the 2nd
    char *my_strcpy(char *, char const *);
    // returns the first string, copy of the 2nd (of size n)
    char *my_strncpy(char *, char *, int);
    // compares 2 strings
    // returns 0 if same
    int my_strcmp(char const *, char const *);
    // compares 2 strings based on size n,
    // returns 0 if same
    int my_strncmp(char const *, char const *, int);
    // returns a string glued with another
    char *my_strcat(char *, char const *);
    // returns a string glued with another (of size n)
    char *my_strncat(char *, char const *, int);
    // print an array with a \n in between strings
    void my_print_array(char **);
    // separates string into an array :
    char **my_str_to_word_array(char *);
    // allocates the good size based on nbr of ligns given
    char** malloc_work(char *);
    // nbr of ligns needed to allocate memory
    int nbr_of_ligns(char *);
    // array length calculator
    int my_arraylen(char **);
    // str to word array based on character that seperates the words
    char **split_string(char *, char);
    // str to word array boosted with LSD
    char **array_tok(char *, char *);


    //  P R O J E C T  F U N C T I O N S

#endif /* !MY_H_ */
