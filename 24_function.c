#include<stdio.h>
void print_adress(char adress1[],char adress2[])
{
    printf("Adress: %s,%s\n",adress1,adress2);
}

int main()
{
    char area[100];
    char division[100];
    printf("Input Area and Division: ");
    scanf("%s %s",area,division);
    print_adress(area,division);
}