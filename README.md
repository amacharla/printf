# Printf
A version of `printf` named `_printf ` created by Wendy Segura and Anoop Macharla.

`_printf`takes a pointer to a constant character as the first parameter, and a number of subsequent parameters. The first parameter contains conversion specifiers for the subsequent arguments.

Function prints the specified arguments in a formatted style and returns the number of characters printed.

## Example of _printf function:
`_printf("Hello %s%c", "World", '!')`

* Output: prints to stdout: `Hello World!`

## Project Notes

### Style
All files are in the `Betty` style. Notes on this style can be found at https://github.com/holbertonschool/Betty/wiki

### Compilation
All files will be compiled with the following: `$ gcc -Wall -Werror -Wextra -pedantic *.c`

### Conversion Specifiers
The following conversion specifiers are handled with `_printf`:
* `%c`: single character
* `%s`: string of characters
* `%d`: signed integer
* `%i`: signed integer
* `%b`: binary

### Extra Conversions
* `R`: convert strings into rot13
### To Fix


## Files
* `README.md` : Current file, contains information about this project
* `holberton.h` : Header file, contains all prototypes for funcitons used, as well as libriaries.
* `printf.c` : Contains the code for `_printf`
* `util_characters.c`: File for functions that have anything associated with characters that are not numbers.
* `util_numbers.c`: File containing the specific functions for numbers.
* `man_3_printf`: man page for our `_printf`


