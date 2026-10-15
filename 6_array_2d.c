#include<stdio.h>
int main()
{
    int array_2D[3][4];
    int row=3;
    int col=4;
    printf("Enter The Number: ");
    //scanf
    for (int i=0; i <row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            scanf("%d",&array_2D[i][j]);
        }
        
    }
    //printf
    for (int j=0; j <col; j++)
    {
        for (int i = 0; i <row; i++)
        {
            printf("%d ",array_2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}