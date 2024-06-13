#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        // Omitir los espacios iniciales y tabulaciones
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        // Escribir los caracteres hasta el primer espacio o tabulación
        while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
