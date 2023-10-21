#include "monty.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
char **operation_code_tokens = NULL;
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char **argv)
{
FILE *my_scr = NULL;
int ecode = EXIT_SUCCESS;
if (argc != 2)
return (err());
my_scr = fopen(argv[1], "r");
if (my_scr == NULL)
return (ferr(argv[1]));
ecode = exec(my_scr);
fclose(my_scr);
return (ecode);

}
