int max(int *tab, unsigned int len)
{
    int max;

    if (len == 0)
        return 0;  // Devolver 0 si la longitud es 0
    max = tab[0]; // Inicializar max con el primer elemento del array
    while (--len) // Decrementar len antes de usarlo en el bucle
    {
        if (tab[len] > max)
            max = tab[len];
    }
    return max;
}
