## Libft

This is a project for creating a library in C, containing a collection of functions that replicate the behavior of standard library functions. The project is divided into mandatory and additional parts, each containing a set of functions to implement.

### Technical Considerations

- Avoid using global variables.
- Helper functions should be defined as static to limit their scope to the appropriate file.
- All files should be placed at the root of your repository.
- Unused files should not be turned in.
- Compilation flags `-Wall -Wextra -Werror` must be used for all `.c` files.
- The library must be created using the `ar` command; `libtool` is not allowed.

### Part 1 - Libc Functions

In this part, you'll replicate the behavior of standard libc functions with names prefixed by `ft_`. Functions to implement include:

- `isalpha`
- `isdigit`
- `isalnum`
- `isascii`
- `isprint`
- `strlen`
- `memset`
- `bzero`
- `memcpy`
- `memmove`
- `strlcpy`
- `strlcat`
- `toupper`
- `tolower`
- `strchr`
- `strrchr`
- `strncmp`
- `memchr`
- `memcmp`
- `strnstr`
- `atoi`
- `calloc`
- `strdup`

### Part 2 - Additional Functions

This part involves creating additional functions that either complement the libc functions or provide new functionality. Functions to implement include:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

Each function has its prototype, description, and parameters documented.

### Bonus

The Bonus functions give some insight about linked lists:

- `ft_lstadd_back.c`
- `ft_lstadd_front.c`
- `ft_lstclear.c`
- `ft_lstdelone.c`
- `ft_lstiter.c`
- `ft_lstlast.c`
- `ft_lstmap.c`
- `ft_lstnew.c`
- `ft_lstsize.c`

### Ft_printf

My libft also inludes a custom implementation of the printf() function from the C standard library. The function ft_printf() will mimic the behavior of the original printf() and will handle various format specifiers.

Supported Conversions:
```
%c: Prints a single character.
%s: Prints a string (as defined by the common C convention).
%p: The void * pointer argument will be printed in hexadecimal format.
%d: Prints a decimal (base 10) number.
%i: Prints an integer in base 10.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase format.
%X: Prints a number in hexadecimal (base 16) uppercase format.
%%: Prints a percent sign.
```

### Get_next_line

Get_next_line is included in this libft as well which is a function that reads a line from a file descriptor and returns it. It implements a buffer which can be changed with the Compiler flag `-D BUFFER_SIZE=n`.

### Makefile

A `Makefile` is required to compile the source files to the required output with specific flags (`-Wall -Wextra -Werror`). It should include rules for `$(NAME), all, clean, fclean,` and `re`. Additionally, if bonuses are implemented, a `bonus` rule should be included.

### Submission

Submit the following files:
- `Makefile`
- `libft.h`
- All `ft_*.c` files

Ensure that your project follows the norms outlined in the project requirements to avoid penalties during evaluation.
