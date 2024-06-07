#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return 0;
    }
    if (power == 0)
    {
        return 1;
    }
    return nb * ft_recursive_power(nb, power - 1);
}

// Función principal para probar ft_recursive_power
int main()
{
    int base = 2;
    int exp = 3;
    printf("%d a la potencia de %d es %d\n", base, exp, ft_recursive_power(base, exp));
    return 0;
}
