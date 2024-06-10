#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-' || base[i] <= ' '
				|| base[i] > 126 || base[j] <= ' ' || base[j] > 126)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	nb = (long int)nbr;
	if (!is_valid_base(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int main() {
    ft_putnbr_base(42, "0123456789"); // Debería imprimir "42"
    write(1, "\n", 1);
    ft_putnbr_base(-42, "0123456789"); // Debería imprimir "-42"
    write(1, "\n", 1);
    ft_putnbr_base(42, "01"); // Debería imprimir "101010"
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789ABCDEF"); // Debería imprimir "2A"
    write(1, "\n", 1);
    ft_putnbr_base(42, "poniguay"); // Debería imprimir "52"
    write(1, "\n", 1);
    return 0;
}
