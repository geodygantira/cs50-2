#include <stdio.h>
#include <math.h>
//4003600000000014
//4001234567891234

int y =2;
int sumdigit;
long long  int cardnumber;
int divider;
int digit;
int count;
int times2;
int cardlength;
long long int n;


long long int get_input(void);
int checksum(void);
//long long int validation(void);

int main ()
{
    get_input();
    printf("load")
    //checksum();
    //validation();
}

long long int get_input()
{
    printf("insert your credit card number :");
    scanf("%lld", &cardnumber );
    printf("your credit card number is : %lld", cardnumber);
    printf("\n");
    return cardnumber;
}



int odd_digit ()
{
    do 
    {   
        divider = pow(10,y);
        odddigit = odddigit + (cardnumber % divider);
        odddigit = odddigit / (divider/10);

        oddtimes2 = oddtimes2 + (odddigit*2);
    }
}
/*
int checksum()
{
    printf("start checking sum..");
    printf("\n");
    
    do 
    {
        divider = pow(10,y);
        digit = digit + (cardnumber % 100);
        digit = digit / (divider/10);


        times2 = times2 + (digit * 2);
        sumdigit = sumdigit + times2;
        count++;
    }
    while (digit != 0);
    
    printf("sum digit is : %d", sumdigit);
    printf("\n");
    printf("cardlength : %d", count);
}

long long int validation ()
{
    n = n + cardnumber;
    do 
    {
        n = n/10;
        cardlength++;
    }
    while (n!=0);
    return cardlength;
    printf("\n");
    printf("cardlength : %d", cardlength);
}*\