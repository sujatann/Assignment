#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"stdint.h"

union name_str
{
char ch;
uint8_t integer;
};


int main() 
{  union name_str t;

   int i=0,sum_asciivalue =0;
   char Strname[100];
   
   printf("Enter the  name: \n");
   scanf("%s",Strname);
   while(Strname[i]!='\0')
   
   {  t.integer=Strname[i];
   //to extract the data members
      printf("\nHexValue of %c=%x\n", Strname[i], Strname[i]);
      
      sum_asciivalue= sum_asciivalue + Strname[i];
      i++;
   }
   printf("sum of hexadecimal values of a name is %x\n",sum_asciivalue);
   return 0;
}
