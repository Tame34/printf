#include "main.h"
/**
 * printf_ROT13: Prints string to ROT13 which is a substitution cipher
 * @pars: Variable parameter list
 * Return: Count of printed characters
 */
 
int printf_ROT13(va_list pars) {
char *b = va_arg(pars, char*);
int counter = 0;

 int i;
if (b == NULL)
b = "(null)";

 for (i = 0; b[i]; i++) {
   
char current_char = b[i];

if ((current_char >= 'a' && current_char <= 'z') || (current_char >= 'A' && current_char <= 'Z'))

  {
char base = (current_char >= 'a') ? 'a' : 'A';

_putchar((current_char - base + 13) % 26 + base);

} 
else {
_putchar(current_char);
}
counter++;
}

 return counter;
}
