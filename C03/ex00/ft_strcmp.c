#include <stdio.h>  // Incluir <stdio.h> para usar printf

int ft_strcmp(char *s1, char *s2) {
    int i = 0;

    // Comparar caracteres mientras ambos strings no hayan terminado
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);  // Retornar la diferencia si los caracteres son diferentes
        }
        i++;
    }
    // Retornar la diferencia en los caracteres nulos si uno de los strings es más corto
    return (s1[i] - s2[i]);
}

int main(void) {
    char *s1 = "Hello";
    char *s2 = "World";
    printf("%d\n", ft_strcmp(s1, s2));  // Llamar a ft_strcmp y imprimir el resultado
    return 0;
}
