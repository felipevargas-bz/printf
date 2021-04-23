<img src='https://github.com/felipevargas-bz/printf/blob/main/FLOWCHART.jpg' alt='Banner' width=100%>

# _printf :page_facing_up:

A formatted output conversion C program completed as part of the low-level
programming and algorithm track at Holberton School. The program is a pseudo-
recreation of the C standard library function, `printf`.

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 14.04 LTS machine with `gcc` version 4.8.4.

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 14.04 LTS machine with `gcc` version 4.8.4.

## Usage :running:

To use the `_printf` function, assuming the above dependencies have been installed,
compile all `.c` files in the repository and include the header `holberton.h` with
any main function.

Example `main.c`:
```
#include "holberton.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc *.c -o tester
```

Output:
```
$ ./tester
Hello, World!
$
```

## Description :speech_balloon:

The function `_printf` writes output to standard output. The function writes
under the control of a `format` string that specifies how subsequent arguments
(accessed via the variable-length argument facilities of `stdarg`) are
converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon successful return, `_printf` returns the number of characters printed
(excluding the terminating null byte used to end output to strings). If an
output error is encountered, the function returns `-1`.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero
or more directives: ordinary characters (not `%`) which are copied unchanged
to the output stream; and conversion specifications, each of which results in
fetching zero or more subsequent arguments. Conversion specification is
introduced by the character `%` and ends with a conversion specifier. In
between the `%` character and conversion specifier, there may be (in order)
zero or more _flags_, an optional minimum _field width_, an optional
_precision_ and an optional _length_ modifier. The arguments must correspond
with the conversion specifier, and are used in the order given.

#### c
The `int` argument is converted to an `unsigned char`.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```

#### s
The `const char *` argument is expected to be a pointer to a character array
(aka. pointer to a string). Characters from the array are written starting
from the first element of the array and ending at, but not including, the
terminating null byte (`\0`).

Example `main.c`:
```
int main(void)
{
    _printf("%s\n", "Hello, World!");
}
```
Output:
```
Hello, World!
```

#### %
A `%` is written. No argument is converted. The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```

## More Examples :thumbsup:

To print the address of Holberton School in the format "972 Mission St., San
Francisco, CA 94103" where *street*, *city* and *state* are pointers to strings:

Example `main.c`:
```
#include "holberton.h"

int main(void)
{
	char *street = "Mission St.", *city = "San Francisco", *state = "CA";

	_printf("%d %s, %s, %s %d\n", 972, street, city, state, 94103);
}
```
Output:
```
972 Mission St., San Francisco, CA 94103
```

To print the result of basic mathematical operations prepended by signs and
all numbers printed with a minimum precision of two digits:

Example `main.c`:
```
#include "holberton.h"

int main(void)
{
	_printf("%.2d + %.2d = %+.2d\n", 1, 2, 1 + 2);
	_printf("%d - %d = %+d\n", 10, 20, 10 - 20);
}
```
Output:
```
01 + 02 = +03
10 - 20 = -10
```





- Social media __Andres Vasquez__..


[<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/linkedin.svg' alt='linkedin' height='40'>](https://www.linkedin.com/in/andres-felipe-vasquez-chica-4b3b81183/)  [<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/facebook.svg' alt='facebook' height='40'>]()  [<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/twitter.svg' alt='twitter' height='40'>](https://twitter.com/vasketz)

- Social media __Felipe Vargas__.. 


[<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/linkedin.svg' alt='linkedin' height='40'>](https://www.linkedin.com/in/https://www.linkedin.com/in/angel-felipe-vargas-benitez-9a6592206//)  [<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/facebook.svg' alt='facebook' height='40'>](https://www.facebook.com/https://www.facebook.com/profile.php?id=100028222452093)  [<img src='https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/twitter.svg' alt='twitter' height='40'>](https://twitter.com/https://twitter.com/felipevargas_bz)  


## Authors :black_nib:

* __Felipe Vargas__

* __Andres Vazques__

## Software Academy 👨‍💻

<p align="center">
  <a href="https://www.holbertonschool.com" target="_blank">
			<img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School"  /></a>
</p>
