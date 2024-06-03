int ft_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int is_valid_base(char *base) {
    int i, j;

    if (ft_strlen(base) <= 1)
        return 0;

    i = 0;
    while (base[i] != '\0') {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
            return 0;
        j = i + 1;
        while (base[j] != '\0') {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }

    return 1;
}

int get_index(char c, char *base) {
    int i = 0;
    while (base[i] != '\0') {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1; // Carácter no encontrado en la base
}

int ft_atoi_base(char *str, char *base) {
    if (!is_valid_base(base))
        return 0;

    int base_len = ft_strlen(base);
    int result = 0;
    int sign = 1;
    int i = 0;

    // Saltar espacios en blanco al principio
    while (str[i] == ' ')
        i++;

    // Manejar el signo
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convertir caracteres a su equivalente entero según la base
    while (str[i] != '\0') {
        int index = get_index(str[i], base);
        if (index == -1)
            return 0; // Carácter no válido
        result = result * base_len + index;
        i++;
    }

    return result * sign;
}
