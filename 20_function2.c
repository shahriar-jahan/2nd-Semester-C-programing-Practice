#include<stdio.h>
int sub(int x, int y){
    int result=x-y;
    return result;
}
int main()
{
    int r=sub(10,7);
    printf("Subtraction: %d\n",r);
}