#include "main.h"

/**
 *
 *
 */

int run_command(char *command_ex, char *command_buffer)
{
  char **args;
  int i;
  char *auxline = NULL;

  auxline = malloc(sizeof(char) * 10);
  if(auxline == NULL)
    {
      free(command_ex);
      free(command_buffer);
      return(EOF);
    }

  args = (char **)malloc(sizeof(char *) * 10);
  if(args == NULL)
    {
      free(auxline);
      free(command_ex);
      free(command_buffer);
      return(EOF);
    }

  auxline = strtok(command_buffer, " ");
  for(i = 0; auxline; i++)
    {
      args[i] = (char *)malloc(sizeof(char) * 10);
      if(args[i] == NULL)
	{
	  free(auxline);
	  free(command_ex);
	  free(command_buffer);
	  free(args);
	  return(EOF);
	}
      args[i] = auxline;
      auxline = strtok(NULL, " ");
      printf("%s", args[i]);
    }

  pid = fork();
  if (pid > 0)
    wait(NULL);

  if (pid == 0)
    execve(args[0], args, NULL);
  return (0);
}
