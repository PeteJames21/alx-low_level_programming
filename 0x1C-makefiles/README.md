# 0x1C. C - Makefiles

## 0-Makefile
Create a makefile that uses a rule called `all` to build an executable called `school` using the C source files in the project directory. 

## 1-Makefile
Use the C source files are prerequisites for the `all` rule.

## 2-Makefile
Use variable substitution to derive object file names from source files.

## 3-Makefile
name of the executable: `school`
rules: `all`, `clean`, `oclean`, `fclean`, `re`
- `all`: builds your executable
- `clean`: deletes all Emacs and Vim temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
- re: forces recompilation of all source files
variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- `CC`: the compiler to be used
- `SRC`: the .c files
- `OBJ`: the .o files
- `NAME`: the name of the executable
- `RM`: the bash command for deleting files

The `all` rule recompiles only the updated source files
The `clean`, `oclean`, `fclean`, `re` rules never fail

## 4-Makefile
Augment `3-Makefile` to include the following GCC flags: `-Wall -Werror -Wextra -pedantic`
