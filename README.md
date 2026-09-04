# Minishell

## Description
**Minishell** is an ecole42 project where we recreate a simplified bash in C! Taking an in depth approach to parsing, tokenization/lexing, 
use of execve and fork, and general data structures and their use cases in C.

## Instructions

### Compilation
The project uses a `Makefile` to compile the source code into the executable program. 

To build the `Minishell` executable and compile libft, run:
```bash
make
```

You can also use standard Makefile rules to clean up build artifacts:
* `make clean` - Removes object files.
* `make fclean` - Removes object files and the compiled executable, including everything libft.
* `make re` - Recompiles the entire project from scratch.

### Installation & Dependencies
The only dependencies for this project are:
* `cc` (C compiler with `-Wall -Wextra -Werror`)
* `readline`
* A Unix system (likely working on windows but untested.)

### Execution
Start the minishell instance by running the executable

```bash
./minishell
```

From there on out, you can use it like you would your normal terminal!

## Features
- **Prompt** with command input via `readline`
- **Command execution** with `$PATH` lookup
- **Pipes** (`|`) for chaining commands
- **Redirections**: `>` (output), `>>` (append), `<` (input)
- **Here documents** (`<<`) with delimiter-based input
- **Environment variables** (`$VAR`, `$?` for exit status)
- **Builtins**: `cd`, `echo`, `env`, `exit`, `pwd`, `export`, `unset`
- **Signal handling** (`Ctrl+C`, `Ctrl+D`, `Ctrl+\`)
- **Command history**

## Resources

### References
* https://www.gnu.org/savannah-checkouts/gnu/bash/manual/bash.html
* https://www.shellscript.sh/

### AI Usage

* Contextual questions regarding code for more in-depth learning.
* Specific questions about parsing approach, data structures, and general approach weighoffs
* UML flow to visualize the process more clearly during development.
