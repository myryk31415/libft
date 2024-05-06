## Libft - Your very first own library

This is a project for creating your own library in C, containing a collection of functions that replicate the behavior of standard library functions. The project is divided into mandatory and additional parts, each containing a set of functions to implement.

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

### Makefile

A `Makefile` is required to compile the source files to the required output with specific flags (`-Wall -Wextra -Werror`). It should include rules for `$(NAME), all, clean, fclean,` and `re`. Additionally, if bonuses are implemented, a `bonus` rule should be included.

### Submission

Submit the following files:
- `Makefile`
- `libft.h`
- All `ft_*.c` files

Ensure that your project follows the norms outlined in the project requirements to avoid penalties during evaluation.
