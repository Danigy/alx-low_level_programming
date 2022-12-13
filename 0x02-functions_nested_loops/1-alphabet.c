#include "main.h"
/**
 * File: 1-alphabet.c
 * Auth: Danigy
 * print_alphabet - function that print the alphabet letters in lowercase from a - z, and ends with a new line
 * Return: no return
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
