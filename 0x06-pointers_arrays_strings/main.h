#ifndef MAIN_H
#define MAIN_H

/**
 *void prototypes()
 *int prototypes()
 *char prototypes()
*/

int _putchar(char c);
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *a);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN_H*/
