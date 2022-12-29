#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * void prototypes()
 * int prototypes()
 * char prototypes()
 */
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffec(char *b, int size);
int strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *);
char *_strncat(char *dest, char *scs, int n);
char *_strncpy(char *dest, char *scc, int n);
char *string_toupper(char *);
char cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char add_strings(char *n1, char *n2, char *r, int index);

#endif /*MAIN_H*/
