//Assignment name  : ft_print_numbers
//Expected files   : ft_print_numbers.c
//Allowed functions: write
//--------------------------------------------------------------------------------
//Write a function that displays all digits in ascending order.
//Your function must be declared as follows:
//void	ft_print_numbers(void);

void ft_print_numbers(void
{
    char number;

    number = 0;
    while( number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
})