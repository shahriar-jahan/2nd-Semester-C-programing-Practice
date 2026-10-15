#include<stdio.h>
int main()
{
    int row,col;
    int i,j;
    printf("Enter Row & Column(Square Matrix): ");
    scanf("%d %d",&row,&col);
    int array[row][col];
    printf("Enter Number:");
    for ( i = 0; i <row; i++)
    {
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < col; j++)
            {
                scanf("%d",&array[i][j]);
            }
            
        }
        
    }
    int sd=row-1;
    printf("Main Diagonal: ");
    for ( i = 0; i < row; i++)
    {
        printf("%d ",array[i][i]);
    }
    printf("\nSecondary Diagonal: ");
    for ( i = 0; i < row; i++)
    {
        printf("%d ",array[i][sd-i]);
    }
    
}