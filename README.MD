# SIMPLE SHELL
- - -

Shell developed in C language. A shell is a command line interface (CLI) program that takes commands entered by a user from a keyboard and gives them to the operating system to execute. The shell is like the medium through which a user communicates with the kernel to understand how a shell program works.


## Environment
Simple Shell was built and tested in the Ubuntu 14.04 LTS via Vagrant in VirtualBox and compiled with GCC version 4.8.4

## Respository Contents
Simple Shell files:

| **Function** | **Description** |
|----------|-----------------|
|main| principal function that call the other functions|
|check_match|checks if a character matches any in a string|
|_strtok|tokenize a string|
|is_builtin|checks if entered command is a builtin|
|new_cd|change current directory|
|new_exit|exit program|
|new_env|prints the current environment|
|_atoi|converts a string into an integer|
|read_env|allocate memory space to pass it to the main function|
|free_env|frees the memory previously allocated|
|print_error|prints error messages to standard error|
|_puts|writes a string to standard output|
|_puts2|prints a string to standard error|
|_uitoa|converts an unsigned int to a string|
|check_for_dir|checks if the command is a part of a path|
|find_path|finds the PATH variable|
|execute_cwd|executes the command in the current working directory|
|check_for_path|checks if the command is in the PATH|
|path_execute|executes a command in the finded path|
|split_line| split a string in another string to be tokenize by _strtok|
|_strcmpr|compare two strings|
|_strdup|duplicate a string|
|_strcat|concatenate two strings|
|_strlen| count the length of a string|


## How to Install
Download the repository [here](https://github.com/dacastanogo/simple_shell) or use this command to clone it:
```
git clone https://github.com/dacastanogo/simple_shell.git
```

## How to Compile
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Example Output
```
$ pwd
/home/jaime/Desktop/simple_shell

$ /bin/pwd
/home/jaime/Desktop/simple_shell

$ ls
a.out	    environment.c	    path_funcs.c    simple_shell.c	trustyshell
AUTHORS     error_management.c	print_string.c	split_line.c
built_in.c  holberton.h		    README.md	    string_funcs.c
_calloc.c   hsh			        _realloc.c	    _strtok.c

$ /bin/ls
a.out	    environment.c	    path_funcs.c	simple_shell.c	trustyshell
AUTHORS     error_management.c	print_string.c	split_line.c
built_in.c  holberton.h		    README.md	    string_funcs.c
_calloc.c   hsh			        _realloc.c	    _strtok.c

$ ls -la
total 132
drwxrwxr-x  4 jaime jaime  4096 Aug 27 06:39 .
drwxr-xr-x 18 jaime jaime  4096 Aug 26 14:32 ..
-rwxrwxr-x  1 jaime jaime 18936 Aug 27 06:28 a.out
-rw-rw-r--  1 jaime jaime   178 Aug 26 15:38 AUTHORS
-rw-rw-r--  1 jaime jaime  2441 Aug 27 06:40 built_in.c
-rw-rw-r--  1 jaime jaime   496 Aug 26 14:12 _calloc.c
-rw-rw-r--  1 jaime jaime   718 Aug 27 06:27 environment.c
-rw-rw-r--  1 jaime jaime  1242 Aug 27 06:27 error_management.c
drwxrwxr-x  8 jaime jaime  4096 Aug 27 07:09 .git
-rw-rw-r--  1 jaime jaime  1381 Aug 27 06:27 holberton.h
-rwxrwxr-x  1 jaime jaime 18936 Aug 27 06:39 hsh
-rw-rw-r--  1 jaime jaime  3590 Aug 27 06:27 path_funcs.c
-rw-rw-r--  1 jaime jaime   545 Aug 22 14:16 print_string.c
-rw-rw-r--  1 jaime jaime    10 Aug 27 06:27 README.md
-rw-rw-r--  1 jaime jaime   469 Aug 27 06:27 _realloc.c
-rw-rw-r--  1 jaime jaime  1532 Aug 27 06:43 simple_shell.c
-rw-rw-r--  1 jaime jaime   765 Aug 27 06:27 split_line.c
-rw-rw-r--  1 jaime jaime  1627 Aug 27 06:27 string_funcs.c
-rw-rw-r--  1 jaime jaime  1276 Aug 27 06:27 _strtok.c
-rwxrwxr-x  1 jaime jaime 18622 Aug 27 06:27 trustyshell
drwxrwxr-x  2 jaime jaime  4096 Aug 26 14:12 .vscode
```

## Authors
* [Daniel Castano](https://github.com/dacastanogo)
* [Jaime Andres Velez](https://github.com/jhudaz)

## Licence
MIT