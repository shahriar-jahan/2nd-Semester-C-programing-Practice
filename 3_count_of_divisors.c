#include<stdio.h>
int main()
{
    int n,i;
    int count=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for (i =1; i <=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    printf("Count of Divisor is: %d",count);
    return 0;
}