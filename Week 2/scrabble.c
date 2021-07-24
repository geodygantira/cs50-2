#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Points assigned to each letter of the alphabet
const int POINTS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//variable declarations
char words1[30];
char words2[30];
char word[30];
int score1;
int score2;
int numbered[30];
int i;
int n;
int x;
int sum1;
int sum2;
int sum;


//function declarations
int computescore(char word[30]);

int main(void)
{

    printf("player 1 : ");
    scanf("%s", words1);
    printf("your word %c \n", words1[0]);


    printf("player 2 : ");
    scanf("%s", words2);
    printf("your word %c \n", words2[0]);

    

    // Score both words
    computescore(words1);
    //sum1 = sum;
    //computescore(word2);
    //sum2 = sum;
    return 0;
}
/*
    // TODO: Print the winner
    if (sum1 < sum2)
    {
        printf("player 2 is the winner!");
    }
    else if (sum1 > sum2)
    {
        printf("player 1 is the winner!");
    }
    else printf("tie!");
    return 0;
} */



int computescore(char word[30])
{

    //change into lowercase and convert to ASCII numbers
    for (i=0, n = strlen(word); i<n; i++)
    {
        word[i] = tolower(word[i]);
        numbered[i] = (int) word[i];
        printf("lowered : %c \n",word[i]);
        printf("numbered : %i \n", numbered[i]);
    }
    
    //return numbered;
    //return word;


    //extract any special characters
    for (i= 0; i < n; i++)
    {
        if (numbered[i] <= 97 || numbered[i] >= 122)
        {
            printf("before numbered : %i \n", numbered[i]);
            numbered[i] = 0 ;
            printf("After numbered : %i \n", numbered[i]);
        }
        else printf("your number, %i, is safe! \n", numbered[i]);
        //return numbered[i];
    }

 
 
    //convert with constant
    for (i= 0; i < n; i++)
    {
        numbered[i] = numbered[i] - 97;
        printf("New number : %i \n", numbered[i]);
        printf("heallo world");
        //return numbered[i];
    }

    //compute points
    for (i= 0; i < n; i++)
    {   x = 0;
        if (numbered[i] >= 0 && numbered[i] <= 26)
        {
            if (numbered[i] == x)
            {
                numbered[i] = POINTS[x];
                printf("score : %i \n", numbered[i]);
            }
            else x++;
        }
        else numbered [i] = numbered[i] -1;
        //return numbered[i];
    }
}
/*
    //sum
    for (i= 0; i < n; i++)
    {
        sum = sum + numbered[i];
    }
    return sum;

}
*/