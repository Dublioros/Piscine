#include <stdio.h>

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

// Función principal para probar ft_is_prime
int main()
{
    int num = 29;
    if (ft_is_prime(num))
    {
        printf("%d es un número primo\n", num);
    }
    else
    {
        printf("%d no es un número primo\n", num);
    }
    return 0;
}
