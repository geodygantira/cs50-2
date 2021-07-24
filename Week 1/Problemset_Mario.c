#include <stdio.h>

int height;
int i;
int j;
int k;
int l;
int dot;
int wallheight(void);
int wall(void);


int main ()
{   
    wallheight();
    wall();
}



//fungsi untuk menginput tinggi wall
int wallheight ()

{   do 
    {
    printf("Height: ");
    scanf("%d", &height);
    printf("your input is : %d", height);
    printf("\n");
    }
    while (height<1);    
    return height;
}

//fungsi untuk membangun wall 

int wall ()
{
    //loop untuk terus membuat row baru hingga mencapai height
    for (j=1; j<= height; j++)
    {
        //fungsi untuk membuat space di sisi kiri
        dot = height-j;
        for(k = 1; k<=dot; k++)
        {
            printf(" ");
        }
        //fungsi untuk membuat wall sisi kiri
        for (i = 1; i <= j; i++)
        {
            printf("#");
        }
        //fungsi untuk membuat jarak antara wall kiri dan kanan
        printf("  ");

        //fungsi untuk membuat wall sisi kanan
        for(l=1; l<=j; l++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}