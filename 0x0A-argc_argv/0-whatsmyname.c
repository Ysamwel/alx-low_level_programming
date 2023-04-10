#include "main.h"
/**
 * main - prints its name with a new line
 * @argc: it is the argument count
 * @argv: the argument vector, a string
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
