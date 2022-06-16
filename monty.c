#include "monty.h"
#define BUFZISE 64

char *operand;

/**
 * main - monty interpreter
 * @argc: int
 * @argv: arguments
 * Return: nothing
 */
int main(int argc, char const *argv[])
{
	line_t *lines;
	char **line;
	int line_num;
	stack_t *stack;
	char *content;
	void (*func)(stack_t**, unsigned int);

	stack = NULL;

	if (argc == 1)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	LINES = textfile_to_array(argv[1]);
	if (lines == NULL)
		return (0);

	lun_num = 0;
	while ((lines + line_num)->content != NULL)
	{
		content = (line + line_num)->content;
		line = split_line(content);
		operand = line[1];

		func = get_op_function(line[0]);
		if (func == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num + 1, line[0]);
			free(line);
			free_stack(stack)
				free_lines(lines);
			exit(EXIT_FAILURE);
		}

		func(&stack, line_num + 1);
	}

	func(&stack, line_num + 1);
	free(line);
	line_num++;
}

free_stack(stack);
free_lines(lines);
return (0);
}
