#include <unistd.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len] != '\0')
        len++;
    return (len);    
}

char *ft_rev_print(char *str)
{
    if (str == 0 || *str == '\0'){
        write(1, "\n", 1);
        return str;
    }

    int length;
    int i;

    length = ft_strlen(str);
    i = length - 1;
    while( i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (str);
}