#include<stdio.h>
int main()
{
    int array[5][5];
    int i,j;
    printf("Enter Your Numbers:\n");
    //Work of scanf
    for (i = 0; i <5; i++)
    {
        for ( j = 0; j<5; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    //For Main Diagonal
    printf("Main Diagonal: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",array[i][i]);
    }
    //For secondary Diagonal
    printf("\nSecondary Diagonal: ");
    for ( i = 0; i < 5; i++)
    {
       printf("%d ",array[i][4-i]);
    }
    
}