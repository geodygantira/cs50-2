#include <stdio.h>  
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//Variable declaration
int i;
int n;
int k;
char text[100];

//pointer declaration and assignment
char *ch = text;

//function declaration
char get_text();
char cipher();

int main(int argc, char *argv[] ) 
{  
    //return 1 if argument is less or more than 2
   if(argc < 2 || argc >2)
   {  
      printf("error \n");
      return 1;  
   }
   //check if every character is digit, return 1 if not digit.
   else 
   {
    for (i=0, n=strlen(argv[1]); i<n; i++)
    {
       if (isdigit(argv[1][i]))
       {
           printf("digit : %i \n", argv[1][i]);
       }
       else 
       {
        printf("not digit\n");
        return 1;
       }
    }
    k = atoi(argv[1]);
    printf("new digit : %i \n", k);
   }
   get_text();
   cipher();
}  

//get text from user
char get_text()
{
    printf("plaintext :");
    gets(ch);
    printf("text is : %s \n", ch);
}

//function to convert text
char cipher()
{

    for (i =0, n=strlen(ch); i<=n; i++)
    {
        //check if ch[i] is an alphabet
        if(isalpha(ch[i]));
        {
            if(islower(ch[i]))
            {
                ch[i] = ch[i] - 97;
                //%26 to make the function is wrap around function, if Z can back to A
                ch[i] = (ch[i] + k) %26;
                ch[i] = ch[i] + 97;
            }
            else if (isupper(ch[i]))
            {
                ch[i] = ch[i] - 65;
                ch[i] = (ch[i] + k) %26;
                ch[i] = ch[i] + 65;
            }
            
        }
    }
    printf("cipher text : %s \n", ch);   
}