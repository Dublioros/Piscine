#include <unistd.h>
#include <stdio.h>

#define SIZE 10

// Función para imprimir una solución
void print_solution(int board[])
{
    char output[SIZE + 1];
    for (int i = 0; i < SIZE; i++)
    {
        output[i] = board[i] + '0';
    }
    output[SIZE] = '\n';
    write(1, output, SIZE + 1);
}

// Función para verificar si una posición es segura
int is_safe(int board[], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[i] == row || (board[i] - row) == (col - i) || (board[i] - row) == (i - col))
        {
            return 0;
        }
    }
    return 1;
}

// Función recursiva para resolver el problema
int solve(int board[], int col)
{
    if (col == SIZE)
    {
        print_solution(board);
        return 1;
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (is_safe(board, i, col))
        {
            board[col] = i;
            count += solve(board, col + 1);
        }
    }
    return count;
}

// Función principal que resuelve el problema de las diez reinas
int ft_ten_queens_puzzle(void)
{
    int board[SIZE];
    return solve(board, 0);
}

// Función principal para probar ft_ten_queens_puzzle
int main()
{
    int solutions = ft_ten_queens_puzzle();
    printf("Total soluciones: %d\n", solutions);
    return 0;
}
