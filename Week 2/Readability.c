#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

   char words[] ={"Wag"};   /* actual variable declaration */
   char  *ch;        /* pointer variable declaration */

   ch = &words;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &words  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ch );

   /* access the value using the pointer */
   printf("Value of *ip variable: %s\n", *ch );

   return 0;
}
/*//variables declarations
char text [500];


//pointer declaration
char *ch;

//adressing pointer to variables
char ch = &text;

int main()
{
    printf("text : %s\n", *ch);
    return 0;
    //letters : count the number of uppercase and lowercase letters in a text
    //words : count the number of words in a sentence, a word is any sequence of characthers separated by space


}*/


