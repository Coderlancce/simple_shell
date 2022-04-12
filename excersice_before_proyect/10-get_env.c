#include <stdio.h>
#include <stdlib.h>

extern char **environ;

/**
*
*/

char *_getenv(const char *name)
{
	int i = 0, j = 0;
	char *buf_var_ev = NULL;

	buf_var_ev = malloc(sizeof(char) * 120);

	for(i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; environ[i][j] != 0; j++)
		{
			if (environ[i][j] == name[j] && environ[i][j + 1] == name[j + 1])
			{
				for (; environ[i][j] == name[j]; j++)
				{
					if (name[j])
					{
						printf("%s\n", environ[i]);
						i++;
					}
				}
			}
		}
	}
	return(buf_var_ev);
}

/**
*
*/

int main(void)
{
	char *buffer = NULL, *get_env = NULL;
	size_t size = 10;
	int check = 0;

	buffer = malloc(sizeof(char) * size);

	printf("$ ");
	check = getline(&buffer, &size, stdin);
	if (check == -1)
	{
		free(buffer);
		return (-1);
	}
	
	get_env = _getenv(buffer);
	if (get_env == NULL)
	{
		free(buffer);
		return(-1);
	}

	/* printf("path: \n%s\n", getenv("PATH"));*/
	free(buffer);
	free(get_env);
}
