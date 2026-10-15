#include<stdio.h>
int sub(int x, int y){
    int result=x%y;
    return result;
}
int main()
{
    int r=sub(11,5);
    printf("Modulus: %d\n",r);
}