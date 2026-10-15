#include<stdio.h>
int main()
{
    int array_2d[5][5];
    int i,j;
    //for scanf
    for ( i = 0; i <5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (i==j)
            {
                array_2d[i][j]=1;
            }
            else if (array_2d[i][4-i])
            {
                array_2d[i][j]=1;
            }
            
            else{
                array_2d[i][j]=0;
            }
        }
        
    }
    //for printf
    for ( i = 0; i <5; i++)
    {
        for ( j = 0; j<5; j++)
        {
            printf("%d ",array_2d[i][j]);
        }
        printf("\n");
    }
    

}