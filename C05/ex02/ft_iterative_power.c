#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
    {
        return 0;
    }
    if (power == 0)
    {
        return 1;
    }

    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= nb;
    }

    return result;
}

// Función principal para probar ft_iterative_power
int main()
{
    int base = 2;
    int exp = 3;
    printf("%d a la potencia de %d es %d\n", base, exp, ft_iterative_power(base, exp));
    return 0;
}
