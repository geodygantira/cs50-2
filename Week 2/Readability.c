#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

//Variable Declarations
int n;
int i;
int x;
int w = 1;
int z;
float L;
float S;
int grade;

//function declarations
int letters();
int words();
int sentence();
int compute_grade();


int main () {

  char text[10];   /* actual variable declaration */
  char  *ch;        /* pointer variable declaration */

  ch = (char*)malloc(1000*sizeof(char)); /* dynamic allocation of text array in ch pointer*/

  //get text from user
  printf("Text :");
  gets(ch);
  //compute n, length of array 
  n = strlen(ch);

  letters(ch);
  words(ch);
  sentence(ch);
  compute_grade(ch);
   
  return 0;
}

//function to compute the number of letters
int letters (char word[])
{
  for (i =0; i <=n; i++)
  {
    //function to check is word[i] an alphabet or not
    if (isalpha(word[i]))
    {
      x++;
    }
  }
  return x;
}

//function to compute the number of sentence
int words (char word[])
{
  for (i =0; i <=n; i++)
  {
    //function to check is word[i] a white space or not
    if (isspace(word[i]))
    {
      w++;
    }
    else 0;
  }
  return w;
}

//function to count the number of sentence
int sentence (char word[])
{
  for (i =0; i <=n; i++)
  {
    //function to check if word[i] is dot(.), exclamation point(!), or question mark(?)
    if (word[i] ==33 || word[i] == 46 || word[i] == 63)
    {
      z++;
    }
    else 0;
  }
  return z;
}

//function to compute grade
int compute_grade(char word[])
{
  //function to compute L & S, first cast the data type into float for more accurate division
  L = ((float) x/ (float) w)*100;
  S = ((float) z/ (float) w)*100;


  grade = (0.0588*L)-(0.296*S)-15.8;
  round(grade);
  if (grade < 1)
  {
    printf("Before grade 1");
  }
  else if (grade > 16)
  {
    printf("Grade 16+");
  }
  else 
  {
    printf("grade : %i ", grade);
  }
  return grade;
}
