#include "function_pointers.h"
#include <unistd.h>
/**
 * print_name - Prints each character of a name using a
 * given function pointer
 * @name: The string containing the name
 * @f: function pointer to a functin that takes char*
 * as an argument
*/
void print_name(char *name, void (*f)(char *))
{
	for (; *name; name++)
	{
		f(*name);
	}
	f('\n');
}
/**
 * print_char - Prints a character to standard output
 * @c: The character to be printed
 */
void print_char(char c)
{
	_putchar(c);
}
