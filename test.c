#include<stdio.h>
int main()
{
    char st1[10];
    char st2[]="Bye";
    scanf("%s",st1);
    for (int i = 0; i <3; i++)
    {
        printf("%c\n",st2[i]);
    }
    printf("%c\n",st2[2]);
    printf("%s\n",st1);
    printf("%s\n",st2);
}
