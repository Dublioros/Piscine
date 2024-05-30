#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {
    int i;
    int j;

    // Si to_find es una cadena vacía, retornar str
    if (to_find[0] == '\0') {
        return str;
    }

    // Recorrer str
    for (i = 0; str[i] != '\0'; i++) {
        // Si se encuentra una coincidencia inicial
        if (str[i] == to_find[0]) {
            // Comprobar si el resto de to_find coincide
            for (j = 0; to_find[j] != '\0'; j++) {
                if (str[i + j] != to_find[j]) {
                    break;
                }
            }
            // Si se encontró toda la subcadena
            if (to_find[j] == '\0') {
                return &str[i];
            }
        }
    }

    // Si no se encontró la subcadena
    return NULL;
}

int main(void) {
    char str[] = "Hello, World!";
    char to_find[] = "World";

    char *result = ft_strstr(str, to_find);
    if (result != NULL) {
        printf("Subcadena encontrada: %s\n", result); // Debería imprimir "World!"
    } else {
        printf("Subcadena no encontrada\n");
    }

    return 0;
}
