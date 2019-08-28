#include "shell.h"

/**
* sh_cd - functio that changes the current directory
* @args: argument to compare with cd
* Return: 1
*/

int sh_cd(char **args)
{
	if (args[1] == NULL)
		perror("expected argument to \"cd\"\n");
	else
	{
		if (chdir(args[1]) != 0)
			perror("Error to chdir");
	}
return (1);
}

/**
* sh_help - function that introduce the user
* @args: argument to compare with the word help
* Return: 1
*/

int sh_help(char **args)
{
	(void) args;
	write(STDOUT_FILENO, "Welcome to our own shell.\n", 26);
	write(STDOUT_FILENO, "Our current Built-ins are \n", 29);
	write(STDOUT_FILENO, "cd - change the current directory to a Folder\n", 47);
	write(STDOUT_FILENO, " exit - cause normal process termination\n", 41);
	write(STDOUT_FILENO, "  help - display useful information\n", 36);
	write(STDOUT_FILENO, "  Also support commands like\n", 29);
	write(STDOUT_FILENO, "  cp - copy files and directories\n", 35);
	write(STDOUT_FILENO, " clear - clear the terminal screen\n", 36);
	write(STDOUT_FILENO, " cat - print on the standard output\n", 37);
	write(STDOUT_FILENO, " echo - display a line of text\n", 31);
return (1);
}

/**
* sh_exit - exits from the shell
* @args: the argument written in the shell.
* Return: 1
*/
int sh_exit(char **args)
{
	(void) args;
	return (0);
}
