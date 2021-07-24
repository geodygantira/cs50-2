#include <stdio.h>

int m;
int n;
int i;
int get_startsize(void);
int get_endsize(void);
int years(void);
int calculate(void);

int main()
{
    get_startsize();
    get_endsize();
    calculate();
    years();
}

//Code to get user input of start population size
int get_startsize (void)
{
    do 
    {
        printf("insert start population size :");
        scanf("%d", &n);
        printf("you entered %d", n);
        printf("\n");
    }
    while (n < 9);
    return n;
}

//code to get user input of end population size
int get_endsize (void)
{
    
    do
    {
        printf("insert end population size:");
        scanf("%d", &m);
        printf("you entered %d", m);
        printf("\n");
    }
    while (m<=n);
    return m;
} 

int calculate(void)
{
    printf("calculating...");
    printf("\n");
    do
    {
        i = i+1;
        n = n + (n/3)-(n/4);
    }
    while (n < m);
    return i;
}

int years(void)
{
    printf("number of years : %d", i);
    printf("\n");
    return 0;
}