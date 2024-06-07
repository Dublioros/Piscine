#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0 || nb > 12)
    {
        return 0;
    }
    if (nb == 0 || nb == 1)
    {
        return 1;
    }
    return nb * ft_recursive_factorial(nb - 1);
}

// Función principal para probar ft_recursive_factorial
int main()
{
    int num = 5;
    printf("Factorial de %d es %d\n", num, ft_recursive_factorial(num));
    return 0;
}
