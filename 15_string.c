#include<stdio.h>
#include<string.h>
int main()
{
    /*String-Sequence of characters
    Ex: "Ball" -->'B'+'a'+'l'+'l'+'\0'
    -Enclosed inside double quotation
    -Size--> number of character size(size of Ball is 4)
    - "" --> Empty string(size 0)
    ' ' (space is a character)
    */
   
   //char st[]="Hello \"Its\" Buddy"; "Its"
   
   char st[]="Hello Buddy";
   char st2[]="!!";
   char st3[]="Hello Buddy";
   char st4[100];
   
   //printf("%c\n",st[1]);//'e'
   //printf("%c\n",st[11]);//'\0'
   //printf("%s\n",st);//Full line
   //for character wise print using loop
   /*
   for (int i = 0; i <11; i++)
   {
    printf("%c ",st[i]);
   }
    */
   //For manual size calculation:int len=sizeof(st)/sizeof([0]);
   //Modification
    //st[0]='T';
   //printf("%s\n",st);//replaces H with T
    //work with string function
    //printf("%zu\n", strlen(st));
   //printf("%zu\n", sizeof(st));//it is conswedering null character also'\0'
    //Concatenation
    //strcat(st, st2);
    //printf("%s\n",st);
    //strcpy
    //strcpy(st,st2);
    //printf("%s\n",st);
    //strcmp
    //printf("%d\n",strcmp(st,st3));//0-->they are equal
    ///Input
    scanf("%s",st4);
    printf("%s\n",st4); //it print without space
    //way to print
    //fgets(st, 100, stdin);
    //printf("%s\n",st);//include space
}