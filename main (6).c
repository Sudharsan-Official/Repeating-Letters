#include<stdio.h>    //This is the header file for using scanf and printf functions in the program
#include<string.h>   //This is the header file for using string function in the program
int main()
{
   char string[100],word[20];  //Declaring Characters
   int i,j,strleng,wrdleng,temp,count=0,check,Flag=0; //Declaring integers
   gets(string);   //Gets string as input
   gets(word);     //gets word as input
   strleng=strlen(string);  //string length
   wrdleng=strlen(word);    //word length
   for(i=0; i<strleng; i++) //for loop
   {
      temp=i;
      for(j=0;j<wrdleng;j++)
      {
         if(string[i]==word[j])
            i++;
      }
      check=i-temp;
      if(check==wrdleng)   //if condition
         count++;          //count post increment
   }
   for(i=0;string[i]!='\0'; i++)  //for loop with condition
{
if(string[i]==word[0])
{
Flag=1;                           //variable
for(j=0;word[j]!='\0';j++)        //for loop
{
if(string[i+j]!=word[j])          //if condition
{
Flag=0;
break;
}
}
}
if(Flag==1)                       //if condition
{
break;
}
}
if(Flag==0)                       //if condition if the input letter is not present
  {
  printf("\n Word not Found '%s' ", word);  
}
else                              //else condition if the letter si present
{
printf("\n We found '%s' at position %d ", word, i + 1);
}
printf("\nOccurrence = %d",count); //prints the number of times the letter occurs
   return 0;
}

