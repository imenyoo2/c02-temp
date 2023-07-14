

/* 000000010a161f, len = 12 */

void    set_hex(unsigned long nbr, char *arr, int index)
{
	char buffer;

	if (nbr <= 9)
	{
		buffer = '0' + nbr;
		arr[index] = buffer;
		return ;
	}
	else if (nbr >= 10 && nbr <= 15)
	{
		buffer = 'a' + nbr - 10;
		arr[index] = buffer;
		return ;
	}
	print_hex(nbr % 10, arr, index - 1);
	print_hex(nbr / 10, arr, index - 1);
}

void	print_addr(void *addr)
{
	char buffer[13];
	int i;

	i = 0
	while (i < 12)
	{
		buffer[i] = '0';
		i++;
	}
	buffer[i] = ':';
	set_hex((unsigned long) addr, buffer, 12);
	write(1, buffer, 13);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int counter;
	char buffer[2]
	char *buffer2;
	int counter2;
	void *addr_holder;

	counter = 0;
	buffer2 = (char *) addr
	addr_holder = addr;
	while (counter < size)
	{
		counter2 = 0;
		print_addr(addr_holder);
		while (counter2 < 16)
		{
			buffer = {'0', '0'}
			if (counter % 2)
				write(1, " ", 1);
			set_hex(addr_holder, buffer, 2)
			write(1, buffer, 2);
			counter2++;
			addr_holder++;
		}
		counter++;
	}
}

