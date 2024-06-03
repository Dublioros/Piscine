#include <stdio.h>

int ft_atoi(char *str) {
    int sign = 1; // Por defecto, el signo es positivo
    int result = 0;
    int i = 0;

    // Saltar espacios en blanco al principio
    while (str[i] == ' ')
        i++;

    // Manejar el signo
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1; // Cambiar el signo
        i++;
    }

    // Leer los dígitos y calcular el resultado
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0'); // Convertir dígito a entero y agregar al resultado
        i++;
    }

    // Aplicar el signo
    return result * sign;
}

int main() {
    printf("%d\n", ft_atoi("---+--+1234ab567")); // Debería imprimir -1234
    return 0;
}
