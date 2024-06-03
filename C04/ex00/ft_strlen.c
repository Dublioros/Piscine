#include <stdio.h>

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return (length);
}

int main() {
    char myString[] = "Hola, mundo!";
    int length = ft_strlen(myString);
    printf("La longitud de la cadena es: %d\n", length);
    return 0;
}