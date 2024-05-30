//Assignment name  : ft_strlen
//Expected files   : ft_strlen.c
//Allowed functions: 
//--------------------------------------------------------------------------------
//Write a function that returns the length of a string.
//Your function must be declared as follows:
//int	ft_strlen(char *str);

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return s1;
}