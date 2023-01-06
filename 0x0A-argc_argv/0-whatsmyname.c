#include <stdio.h>

 /**
  * main - A program that prints its name, followed by a new line.
  * If you rename the progam, it'll print the new name, without
  * having to compile it again.
  * @argc: arguments count
  * @argv: arguments vector
  * Return: Always 0 on Success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
