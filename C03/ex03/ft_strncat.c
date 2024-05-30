#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    unsigned int i = 0;
    unsigned int j = 0;

    // Encontrar el final de la cadena dest
    while (dest[i] != '\0') {
        i++;
    }

    // Copiar hasta nb caracteres de src en dest desde el final de dest
    while (src[j] != '\0' && j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Agregar el carácter nulo al final
    dest[i] = '\0';

    return dest;
}

int main(void) {
    char dest[100] = "Hello";
    char src[] = " World";
    unsigned int nb = 3;

    printf("%s\n", ft_strncat(dest, src, nb)); // Debería imprimir "Hello Wo"
    return 0;
}
