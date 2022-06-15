#include "monty.h"

/**
   * errorHandler - handle all errors and call freeEverything
   * * @errno: error number.
   * * @line_number: the line number of the opcode in the text file
   */

void errorHandler(unsigned int errno, unsigned int line_number)
{
	switch (errno)
	{
			case 1:
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				break;
			case 2:
				fprintf(stderr, "USAGE: monty file\n");
				break;
			case 3:
				fprintf(stderr, "Error: Can't open file %s\n", gv.filename);
				break;
			case 4:
				fprintf(stderr, "Error: malloc failed\n");
				break;
		}
		freeAll();
		exit(EXIT_FAILURE);
}
