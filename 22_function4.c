#include<stdio.h>
int div(int x, int y){
    int result=x/y;
    return result;
}
int main()
{
    int r=div(35,7);
    printf("Division: %d\n",r);
    return 0;
}