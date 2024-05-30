#include <stdio.h>

char *ft_strcat(char *dest, char *src) {
    int i = 0;
    int j = 0;

    // Encontrar el final de la cadena dest
    while (dest[i] != '\0') {
        i++;
    }

    // Copiar src en dest desde el final de dest
    while (src[j] != '\0') {
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
    printf("%s\n", ft_strcat(dest, src)); // Debería imprimir "Hello World"
    return 0;
}
