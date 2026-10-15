/* Write a C program to create a square two-dimensional array (matrix),
   take its elements as input from the user, and print both the main
   diagonal and the secondary diagonal elements using while loops.
*/

#include <stdio.h>

int main()
{
    int i, j;
    int row, col;

    printf("Enter Array Dimension: ");
    scanf("%d %d", &row, &col);

    if (row != col)
    {
        printf("Error! Please enter a square matrix.\n");
        return 0;
    }

    int arry[row][col];

    // Input the matrix elements
    printf("Enter the elements of a %dx%d matrix:\n", row, col);

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < col)
        {
            scanf("%d", &arry[i][j]);
            j++;
        }
        i++;
    }

    // Print the main diagonal
    printf("Main Diagonal: ");
    i = 0;
    while (i < row)
    {
        printf("%d ", arry[i][i]);
        i++;
    }

    // Print the secondary diagonal
    printf("\nSecondary Diagonal: ");
    i = 0;
    while (i < row)
    {
        printf("%d ", arry[i][col - 1 - i]);
        i++;
    }

    return 0;
}