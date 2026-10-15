#include<stdio.h>
int mul(int x, int y){
    int result=x*y;
    return result;
}
int main()
{
    int r=mul(5,7);
    printf("Multiplication: %d\n",r);
}