#include "monty.h"

void monty_error(monty_t *monty)
{
	switch (monty->error)
	{
		case MONTY_ERROR_INVALID_OPCODE:
			printf("L%d: unkown instruction %s\n", monty->line, monty->token);
			break;
		case MONTY_ERROR_PUSH_MISSING_ARG:
			printf("L%d: usage push integer\n", monty->line);
			break;
		case MONTY_ERROR_POP_EMPTY:
			printf("L%d: can't %s, stack empty\n", monty->line, monty->token);
			break;
	default:
			printf("L%d: unkown error\n", monty->line);
	}
}
