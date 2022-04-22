# simple_shell

## Description 
A simple shell is a program that interprets human commands and makes **system calls** to execute all desired actions. In general, connects the user with Kernel or System, it is the direct relation with the same.

## Flowchart 

[![Diagrama-en-blanco.png](https://i.postimg.cc/Prp5whDN/Diagrama-en-blanco.png)](https://postimg.cc/0bvsTTcq)

## Pre-requisites
All proyect was made in `Ubuntu 20.03.4 LTS`

## Usage
compiler:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
It will compile all .c files and output hsh executable file.

After complie to execute it use `./hsh` code. 
## Example
#### ls command

**interactive mode** 
```sh
$| ./hsh
$ ls
0-main.c         100-calloc.c      3-extract_command.c  6-run_command.c           main.h
01-sighandler.c  101-strlen.c      4-command_path.c     README.md                 man_simple_shell
1-search_path.c  2-wait_command.c  5-com_vs_path.c      excersice_before_proyect  scripts
$ /usr/bin/ls
$
0-main.c         100-calloc.c      3-extract_command.c  6-run_command.c           main.h
01-sighandler.c  101-strlen.c      4-command_path.c     README.md                 man_simple_shell
1-search_path.c  2-wait_command.c  5-com_vs_path.c      excersice_before_proyect  scripts
$
$ ^D
```
**non-interactive mode**
```sh
$| echo "ls" | ./hsh
0-main.c         100-calloc.c      3-extract_command.c  6-run_command.c           main.h
01-sighandler.c  101-strlen.c      4-command_path.c     README.md                 man_simple_shell
1-search_path.c  2-wait_command.c  5-com_vs_path.c      excersice_before_proyect  scripts
$| echo "/usr/bin/ls" | ./hsh
0-main.c         100-calloc.c      3-extract_command.c  6-run_command.c           main.h
01-sighandler.c  101-strlen.c      4-command_path.c     README.md                 man_simple_shell
1-search_path.c  2-wait_command.c  5-com_vs_path.c      excersice_before_proyect  scripts
$|  
```

