#include <stdio.h>

int main() 
{
    int array[5][5];
    int i, j;

    printf("Enter Your Numbers:\n");
    
    // Work of scanf using while loop
    i = 0;
    while (i < 5) 
    {
        j = 0;
        while (j < 5) 
        {
            scanf("%d", &array[i][j]);
            j++;
        }
        i++;
    }

    // For Main Diagonal
    printf("Main Diagonal: ");
    i = 0;
    while (i < 5) 
    {
        printf("%d ", array[i][i]);
        i++;
    }

    // For Secondary Diagonal
    printf("\nSecondary Diagonal: ");
    i = 0;
    while (i < 5) 
    {
        printf("%d ", array[i][4 - i]);
        i++;
    }
    printf("\n");

    return 0;
}