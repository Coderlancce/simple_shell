#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>

extern char **environ;

int wait_command(char *check_path);
char *fun_print(void);
char *search_path(void);
int command_path(char *check_path, char *command_buffer, char *command_buffer_save);
char *com_vs_path(char *buffer_folder, char *command_buffer);
int run_command(char *check_equals, char *command_buffer_save);
void sighandler(int signum);

#endif /*MAIN_H*/
