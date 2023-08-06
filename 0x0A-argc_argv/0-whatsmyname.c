#include<stdlib.h>
#include<stdio.h>

/**
 * whatsmyname - a program that prints its name, followed by a new line.
 * @argv: is the argument values
 * @argc: is the argument counter
 * Return: always 0
 */

int main(int argc, char **argv)
{
	if(argc >= 0)
	printf("%s", *argv);


	return 0;

}
