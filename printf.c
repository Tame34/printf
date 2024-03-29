#include "main.h"

/**
 * _printf - selects the correct function to print based on the format.
 * @format: format specifier.
 * Return: the length of the printed string.
 */



ConversionSpecifier m[] = {
			   {"%s", printf_string}, {"%c", printf_char},
			   {"%i", printf_int}, {"%d", printf_dec}, {"%r", \
								    printf_strrev},
			   {"%R", printf_ROT13}, {"%b", printf_bin}, {"%u"\
								      , printf_unsigned},
			   {"%o", printf_oct}, {"%x", printf_hex}, {"%p", \
								    printf_pointer}
};





int _printf(const char *format, ...) {

  int len =0;
  int match_found = 0;
  int j = 0;
  int m_len;
  va_list pars;
  
  if (format == NULL || format[0] == '\0')
    return -1;
  
  
                 
    va_start(pars, format);

  
  while (*format) {
    if (*format == '%') {
      format++;
   

      m_len = sizeof(m) / sizeof(m[0]);
      for (j = 0; j < m_len; j++) {
         }



      {
	if (format[0] == m[j].id[0] && format[1] == m[j].id[1]) {
	  len += m[j].f(pars);
	  format += 2;
	  match_found = 1;
	  break;
	}
      }

      if (!match_found) {
	_putchar('%');
	len++;
      }
    } else {
      _putchar(*format);
      len++;
    }

    format++;
  }

  va_end(pars);
  return len;
}


/**
 * Add the conversion specifier structure
 
int handle_percent_r(va_list pars) {
  
   * Implement the behavior for %r (e.g., print it as is)
     
putchar('%');
  putchar('r');
  return 2;

 }
*/
