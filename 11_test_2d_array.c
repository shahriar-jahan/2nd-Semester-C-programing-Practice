#include<stdio.h>
int main()
{
    //Boundary Matrix Pattern
    int n;
    printf("Enter matrix size: ");
    scanf("%d",&n);
    int boundary;
    printf("Enter Boundary: ");
    scanf("%d",&boundary);
    int matrix[n][n];
    int row=n;
    int col=n;
    int i,j,value;
    for ( i = 0; i <row; i++)
    {
        for ( j = 0; j< col; j++)
        {
            if (i==0||i==n-1||j==0||j==n-1)
            {
                matrix[i][j]=boundary;
            }
            else{
                matrix[i][j]=0;
            }
        }
        printf("your Boundary Matrix is:\n");
        for ( i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
        
    }
    

}