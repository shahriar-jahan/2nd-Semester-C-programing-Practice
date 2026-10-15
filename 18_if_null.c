#include<stdio.h>
int main()
{
    //Short hand if(ternary operator)
    //int t=20;
    //(t<18) ? printf("yes") : printf("No");
    
    char st[]="Doll";
    if (st[4]=='\0')
    {
        printf("This is Null\n");
    }
    if (st[4]=='\0')
    {
        printf("This is Null1\n");
    }
    else if (st[4]=='\0')
    {
        printf("This is Null3\n");
    }
    else if (st[4]=='0')
    {
        printf("This is Null4\n");
    }
    else{
        printf("Something Else\n");
    }
    

}