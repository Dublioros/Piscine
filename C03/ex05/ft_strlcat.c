#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int i = 0;

    // Calcular la longitud de dest
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    // Calcular la longitud de src
    while (src[src_len] != '\0') {
        src_len++;
    }

    // Si size es menor o igual a dest_len, no hay espacio para concatenar
    if (size <= dest_len) {
        return size + src_len;
    }

    // Concatenar src a dest
    while (src[i] != '\0' && dest_len + i < size - 1) {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Asegurar que dest está null-terminated
    dest[dest_len + i] = '\0';

    // Retornar el tamaño total que la cadena hubiera tenido sin limitación de tamaño
    return dest_len + src_len;
}

int main(void) {
    char dest[20] = "Hello";
    char src[] = " World";
    unsigned int size = 15;

    unsigned int result = ft_strlcat(dest, src, size);
    printf("Resultado: %s\n", dest); // Debería imprimir "Hello World"
    printf("Tamaño total: %u\n", result); // Debería imprimir 11 (tamaño total de la cadena concatenada)

    return 0;
}
