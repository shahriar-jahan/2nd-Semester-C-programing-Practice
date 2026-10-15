#include <stdio.h>

int main()
{
    int a[5][5];
    int i, j;

    // Input the matrix elements
    printf("Enter the elements of a 5x5 matrix:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print the main diagonal
    printf("Main Diagonal: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i][i]);
    }

    // Print the secondary diagonal
    printf("\nSecondary Diagonal: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i][4 - i]);
    }

    return 0;
}