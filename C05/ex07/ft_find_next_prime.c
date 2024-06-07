#include <stdio.h>

// Función auxiliar para verificar si un número es primo
int ft_is_prime(int nb)
{
    if (nb < 2)
    {
        return 0;
    }
    
    for (int i = 2; i * i <= nb; i++)
    {
        if (nb % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

// Función para encontrar el siguiente número primo
int ft_find_next_prime(int nb)
{
    if (nb < 2)
    {
        return 2;
    }
    
    while (!ft_is_prime(nb))
    {
        nb++;
    }
    
    return nb;
}

// Función principal para probar ft_find_next_prime
int main()
{
    int num = 14;
    printf("El siguiente número primo mayor o igual a %d es %d\n", num, ft_find_next_prime(num));
    return 0;
}
