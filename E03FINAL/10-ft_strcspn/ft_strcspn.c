#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *rejected) 
{
    size_t i;
    size_t j;

    i = 0;
    while (s[i])
        i++;
    while(s[i])
    {
        j = 0;
        while (rejected[j])
        {
            if(s[i] == rejected[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}