#include <stdio.h>  
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int i;
int n;
int k;
char text[100];
char *ch = text;

char get_text();
char cipher();
int main(int argc, char *argv[] ) 
{  
   printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 2 || argc >2)
   {  
      printf("error \n");
      return 1;  
   }
   //check apakah argv[1] digit atau ga
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

char get_text()
{
    printf("plaintext :");
    gets(ch);
    printf("text is : %s \n", ch);
}

char cipher()
{
    for (i =0, n=strlen(ch); i<=n; i++)
    {
        if(isalpha(ch[i]));
        {
            if(islower(ch[i]))
            {
                ch[i] = ch[i] - 97;
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
        /*if  (isalpha(ch[i]) == 0)
        {
            ch[i] = ch[i];
        }*/
    }
    printf("cipher text : %s \n", ch);   
}