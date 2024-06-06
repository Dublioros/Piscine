#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    // Check if the number of arguments is not exactly 2 (program name and one argument)
    if (ac != 2)
    {
        write(1, "z\n", 2);
        return (0);
    }

    // Search for the first 'z' in the provided argument
    while (av[1][i] != '\0')
    {
        if (av[1][i] == 'z')
        {
            write(1, "z\n", 2);
            return (0);
        }
        i++;
    }

    // If no 'z' is found in the argument
    write(1, "z\n", 2);
    return (0);
}