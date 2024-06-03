#include <unistd.h>

void ft_putnbr(int nb) {
    // Si el número es negativo, imprimimos el signo y hacemos el número positivo
    if (nb < 0) {
        if (nb == -2147483648) {
            // Manejo especial para el caso más negativo de un entero
            write(1, "-2147483648", 11);
            return;
        }
        write(1, "-", 1);
        nb = -nb;
    }

    // Si el número es mayor o igual a 10, llamamos recursivamente
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }

    // Convertimos el dígito a su representación de carácter
    char c = nb % 10 + '0';
    write(1, &c, 1);
}

int main() {
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-12345);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    return 0;
}
