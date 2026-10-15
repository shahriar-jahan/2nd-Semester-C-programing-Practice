#include<stdio.h>
int add(int x, int y){
    int sum=x+y;
    return sum;
}
int main()
{
    int r=add(5,7);
    printf("Summation: %d\n",r);
}