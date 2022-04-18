% _printf(1) _printf 1.0.0
% Ajibola Matthew, Toby Osinubi
% April 2022

# NAME
_print - formatted output conversion

# SYNOPSIS
**#include "main.h"**

**int _printf(const char *, ...)**

# DESCRIPTION
**_printf()** prints to the standard output (the monitor) a specified input string which would be converted to get desired output.
It makes uses of some format specifiers to get the job done.

## Return Value
On successful return, it returns the number of characters printed, which excludes the null byte which terminates the string.
On the instance of an error, a negative value is returned.

## Format of the format string
The format string is a character string, beginning and ending in
its initial shift state, if any.  The format string is composed
of zero or more directives: ordinary characters (not %), which
are copied unchanged to the output stream; and conversion
specifications, each of which results in fetching zero or more
subsequent arguments.  Each conversion specification is
introduced by the character %, and ends with a conversion
specifier.

## Conversion specifiers
	A character that specifies the type of conversion to be applied. 
The conversion specifiers and their meanings are: 

**d**, **i**  The int argument is converted to signed decimal notation. 

**c**  The int argument is converted to an unsigned char, then the resulting character is written.

**s**   The const char * argument is expected to be a pointer to an array of character type (pointer to a string_. Characters from the array are written up to a terminating null byte

**S**   Prints a string. Non printable characters are pointed as "\x" followed by their ASCII values in two digit hexadecimal

**x**, **X**  The unsigned int argument is converted to unsigned lowercase hexadecimal notation (x) or unsigned uppercase Hexadecimal notation (X)

**u**  The unsigned int argument is converted to unsigned decimal notation

**o**, **b**  The unsigned int argument is converted to unsigned octal notation(o) or binary notation(b)

**p**  Address is printed in hexadecimal

**r**  prints string in reverse

**R**  Prints a string converted to rot13

**%**  A '%' written but no argument is converted. The complete version specification is '%%'


# EXAMPLE

To print my name, age, school and dob, where name, school are pointers to string and age and dob are integers 

#include "main.h"

_printf("%s attends %s at age %d. He was born on %d", name, school, age, dob");


# BUGS
 Discovered none


