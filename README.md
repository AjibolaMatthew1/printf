# _printf

_printf is an implementation of the already made printf function which is in the C programming Language. This project is to test the knowledge garnered from the ALX program so far. 

**Prototype** : `int _printf(const char *format, ...);`

# Example Usage

**String**
- Input: `_printf("I am a %s\n", 'Software Engineer');`
- Output: `I am a Software Engineer`

**Character**
- Input: `_printf("%c\n", 'I');`
- Output: `I`

**Integer**
- Input: `_printf("I have %i baskets of oranges", '12');`
- Output: `I have 12 baskets of oranges`

# Project Requirements
- All files will be compiled on Ubuntu 20.04 LTS
- It will be compiled using `gcc` with the following flags `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must be [Betty](https://github.com/holbertonschool/Betty/wiki) compliant.
- Authorized functions and macros:
  - `write` (man 2 write)
  - `malloc` (man 3 malloc)
  - `free` (man 3 free)
  - `va_start` (man 3 va_start)
  - `va_end` (man 3 va_end)
  - `va_copy` (man 3 va_copy)
  - `va_arg` (man 3 va_arg)

# File Descriptions
- [_printf.c](./_printf.c) -  contains the fucntion `_printf`, which uses the prototype `int _printf(const char *format, ...);`. The format string is composed of zero or more directives. See `man 3 printf` for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
- [_putchar.c](./_putchar.c) - contains the implementation of the `_putchar` function which writes a character to the standard output 
- [main.h](./main.h) - contains function prototypes for the function `_printf` and also a list of structs containg the format specifiers
- [man_3_printf](./man_3_printf) - contains the manual page for the `printf` function 
- [print_chars.c](./print_chars.c) - contains the function for `print_c`, `print_s`. This function assists in printing characters and strings to the standard output.
- [print_numbers.c](./print_numbers.c) - contains the function for `print_d`, `print_i`, which are for the %d and %i format specifiers respectively. This assists in printing numbers and integers to the standard output

# Authors
- **Ajibola Matthew** | [@jibsyyyyy](https://twitter.com/jibsyyyyy) |  [LinkedIn](https://linkedin.com/in/jibbycodes)
- **Toby Osinubi** | 
