#include <stdio.h>  
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int i;
int n;

int main(int argc, char *argv[] )  {  
  
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
    argv[1] = atoi(argv[1]);
    printf("new digit : %i \n", argv[1]);
    
   }

   /*{  
    if (argv[1] < 0)
    {
      printf("wrong input");  
    }
    //argv[1] = atoi(argv[1]);
    printf("First argument is: %i\n", argv[1]);  
   }  */
}  