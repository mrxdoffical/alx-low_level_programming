#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * _atoi - converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int  main(int argc, char *argv[])
{
	int result = 1;

		if (argc == 3)
		{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		}
		else
		printf("error\n");

	return (1);
}
