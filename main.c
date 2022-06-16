#include "monty.h"

/**
 * main - entry point of programme
 *
 * @argc: argument count
 * @argv: arguments
 * Return: return value
 */
int main(int argc, char const *argv[])
{
	void (*opcode[])(stack_t **, unsigned int) = {
		pop,
		pall,
		push,
		pint,
		swap};

	char **opcode_str = {
		"pop",
		"pall",
		"push",
		"pint",
		"swap",
	};

	/* Check arguments */
	/* Process arguments */
	/* Call correct function */
	return (0);
}
