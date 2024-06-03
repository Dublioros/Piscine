#include <unistd.h>

int ft_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int is_valid_base(char *base) {
    int i, j;

    if (ft_strlen(base) <= 1)
        return 0;

    i = 0;
    while (base[i] != '\0') {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        j = i + 1;
        while (base[j] != '\0') {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }

    return 1;
}

void ft_putnbr_base_rec(int nbr, char *base, int base_len) {
    if (nbr < 0) {
        write(1, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= base_len)
        ft_putnbr_base_rec(nbr / base_len, base, base_len);
    write(1, &base[nbr % base_len], 1);
}

void ft_putnbr_base(int nbr, char *base) {
    if (!is_valid_base(base))
        return;

    int base_len = ft_strlen(base);

    if (nbr == 0) {
        write(1, &base[0], 1);
        return;
    }

    ft_putnbr_base_rec(nbr, base, base_len);
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
