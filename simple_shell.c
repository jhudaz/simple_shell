#include "holberton.h"
/*espacio para la variable static*/

/*espacio para el signal handler*/

/**
 * main - function that receives configurations files to run the shell
 * @argc: int, count of arguments
 * @argv: double pointer to the argument values
 * @environment: environment variable 
 * Return: 0 by default
 */
int main(int argc __attribute__((unused)), char **argv,char **environment)
{
	unsigned int non_interactive = 0, i;
	size_t getline_buffer = 0;
	variables_t vbles = {NULL, NULL, NULL, 0, NULL, 0, NULL};
	
	vbles.argv = argv;
	vbles.env = read_env(environment);	
	/* Acá debe de ir el signal()*/
	if (!isatty(STDIN_FILENO))
		non_interactive = 1;
	if (non_interactive == 0)
		_puts("$ ");
	/*flag para el signal handler debe reiniciarse acá*/
	
	while(getline(&(vbles.buffer), &(getline_buffer), stdin))
	{
		/*flag para el sig handler debe cambiarse acá, porque acá empieza a ejecutarse la shell*/
		vbles.count++;
		vbles.commands = split_line(vbles.buffer, ";");
		for (i = 0; vbles.commands && vbles.commands[i] != NULL; i++)
		{
			vbles.arguments = split_line(vbles.commands[i], DELIM);
			if(vbles.arguments && vbles.arguments[0])
				if(is_builtin(&vbles) == NULL)
					check_for_path(&vbles);
			free(vbles.arguments);
		}	
		free(vbles.buffer);
		free(vbles.commands);
		/*en este punto ya la shell ejecutó su comando y el signal debe reiniciarse*/
		if (non_interactive == 0)
			_puts("$ ");
		vbles.buffer = NULL;
	}
	if (non_interactive == 0)
		_puts("\n");
	free_env(vbles.env);
	free(vbles.buffer);
	exit(vbles.status);
}
