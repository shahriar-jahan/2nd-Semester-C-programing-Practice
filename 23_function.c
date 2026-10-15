#include<stdio.h>
    void print_name(char name1[],char name2[]){
        printf("Full Name: %s %s\n",name1,name2);
    }



   int main()
{
    char first_n[100];
    char last_n[100];
    printf("enter 1st and last name:");
    scanf("%s %s",first_n,last_n);
    print_name(first_n,last_n);
}