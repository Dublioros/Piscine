#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    if (nb < 0 || nb > 12)
    {
        return 0;
    }

    if (nb == 0 || nb == 1)
    {
        return 1;
    }

    int result = 1;
    for (int i = 1; i <= nb; i++)
    {
        result *= i;
    }

    return result;
}

// Función principal para probar ft_iterative_factorial
int main()
{
    int num = 5;
    printf("Factorial de %d es %d\n", num, ft_iterative_factorial(num));
    return 0;
}
