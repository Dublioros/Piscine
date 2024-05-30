#include <stdio.h>  // Incluir <stdio.h> para printf
#include <stdint.h> // Incluir <stdint.h> para tipos de datos enteros fijos

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    if (i < n) {
        // Si uno de los strings ha terminado, se comparan los caracteres actuales
        return (s1[i] - s2[i]);
    }

    // Si se ha llegado a `n` caracteres sin encontrar diferencias
    return 0;
}

int main(void) {
    char *s1 = "Hello";
    char *s2 = "World";
    printf("%d\n", ft_strncmp(s1, s2, 3)); // Corregir el nombre de la función llamada
    return 0;
}
