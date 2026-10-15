///Pass by reference


#include<stdio.h>
void pass_by_ref(int* x, int y)
{
    // '*' means pointer
    // x =&a---->adress of a(adress of pointed variable)i.e 501
    // "*a= a--->value of a(value of pointed adress) i.e 10
*x=*x+2;//working with the value of a
printf("a in function= %d\n",*x);//this is called pass ny reference
printf("adress of a= %d\n",x);
}
int main()
{
int a,b;//Assuming the adress of a is 501
a=12;
b=7;
//pass_by_ref(a,b);//pass by value-passing only the value as argument
//pass_by_ref(&a,b);//& means adress passing
pass_by_ref(&a,b);//& means adress passing
printf("A in main=%d\n",a);
//printf("Add in main=%d\n",&a);
printf("value of b is: %d\n",b);



return 0;
}