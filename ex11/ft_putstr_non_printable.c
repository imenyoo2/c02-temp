
#include <unistd.h>

/* TODO: ascii 32 is printable */
/* TODO: need tests */

void	print_hex(char nbr)
{
	char buffer;

	if (nbr <= 9)
	{
		buffer = '0' + nbr;
		write(1, &buffer, 1);
		return ;
	}
	else if (nbr >= 10 && nbr <= 15)
	{
		buffer = 'a' + nbr - 10;
		write(1, &buffer, 1);
		return ;
	}
	print_hex(nbr / 10);
	print_hex(nbr % 10);
}

void print_backslach(char chr)
{
	write(1, "\\", 1);
	if (chr <= 15)
		write(1, "0", 1);
	print_hex(chr);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			print_backslach(*str);
		else
			write(1, str, 1);
		str++;
	}
}
