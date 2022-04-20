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

char *find_username(void);
void sighandler(int signum);
char *search_path(void);
int wait_command(char *check_path);
char *extract_command(char *command_buffer);
int command_path(char * command_ex, char *command_buffer, char *check_path);
char *com_vs_path(char *buffer_folder, char *command_buffer);
int run_command(char *command_ex, char *command_buffer);
void sighandler(int signum);

#endif /*MAIN_H*/
