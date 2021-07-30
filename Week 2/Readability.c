#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//letters : count the number of uppercase and lowercase letters in a text
  //words : count the number of words in a sentence, a word is any sequence of characthers separated by space


int n;
int i;
int l;
int w;
int letters();
int words();
int main () {

  char text[10];   /* actual variable declaration */
  char  *ch;        /* pointer variable declaration */

  ch = (char*)calloc(n, sizeof(char));
  //ch = text;  /* store address of var in pointer variable*/

  printf("Text :");
  scanf("%s", ch);
  n = strlen(ch);
  printf("textnya adalah : %s \n", ch);
  printf("Value of *ip variable: %c\n", ch[0]);

  letters(ch);
  words(ch);
   
  return 0;
}

int letters (char word[])
{
  for (i =0, n = strlen(word); i <=n; i++)
  {
    if (isalpha(word[i]))
    {
      l++;
    }
    else if (word[i] == 20)
    {
      i++;
    }
  }
  printf("letters : %i \n", l);
  return l;
}

int words (char word[])
{
  for (i =0, n =strlen(word); i <=n; i++)
  {
    if (isspace(word[i]))
    {
      w++;
    }
    else 0;
  }
  printf("words : %i \n", w);
  return w;
}

