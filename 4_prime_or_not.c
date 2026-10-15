#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if (num<=1)
       {
            printf("%d is not a Prime Number\n",num);
       }
    for (i = 2; i <num; i++)
    {
       if (num%i==0)
       {
        printf("%d is not Prime Number\n",num);
        break;//if condition match then it will break
       }   
    }
    if (i==num)//those are equal that means loop fully ended
    {
        printf("%d is Prime Number\n",num);
    }
    
    
}