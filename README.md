#_printf(); this project is a requirement of the Alx software engineering pair programming task. it is a collaboration between Micheal Adisa and Chukwuoma Chizoba.
The function _printf() imitates the standard library function (stdio.h) printf();
some of the basic function of the printf can be found in the MAN pages.
_printf() is a function which sends formatted string to the standard output.
it's prototype is;
> int  *_printf*(const char, * format, ...);

-printf is a variadic function that contains n arguments.
format represents the character strings i.e the text that is to be printed to the standard output

-The simplest case is a string passed as an argument to the int function as seen.
a loop (for, while) is used to iterate through elements of the string
and print each character to *_putchar*(a custom implementation of the standard library function putchar). this is created using the library function write. this is the preferred method of accessing standard output as certain standard library functions are not allowed to be used in this project

*Handling format specifiers**
the format specifier has the structure;
-%[flag][width option][precision][conversion modifier][conversion type]

- **Return value**
if the program runs successfully the return value is the number of characters printed excluding the null byte

##FILE FUNCTIONS

**_printf.c** - custom printf function that performs format conversion and prints data

**main.h** - file containing all necessary prototypes for the project

## **Credits**
Chukwuoma Chizoba
Micheal Adisa
