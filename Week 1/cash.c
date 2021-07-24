#include <stdio.h>
#include <math.h>

int owed;
float input;
int totalcoins;
int get_change(void);
int calculate25();
int calculate10();
int calculate5();
int calculate1();



int main ()
{
    //mengambil input dari user 
    get_change();
    //mengkonversi float menjadi int
    owed = owed + (input * 100); 
    printf("owed: %d", owed);
    printf("\n");

    //Mengaktifkan fungsi untuk menghitung koin
    calculate25();
    calculate10();
    calculate5();
    calculate1();

    //memunculkan jumlah koin yang dikeluarkan dan sisa kembailan
    printf("total coins : %d", totalcoins);
    printf("\n");
    printf("sisa kembalian : %d", owed);
}

//fungsi untuk mendapatkan input dari user
int get_change()
{
    do
    {
        printf("change owed :");
        scanf("%f", &input);           
    }
    while (input <= 0 );
    return input;
}

//fungsi untuk mengurangi input dengan 25 dan menghitung jumlah koin
int calculate25 ()
{
    if(owed >= 25)
    {   
        do
        {
          owed = owed-25;
          totalcoins++;      
        }
        while (owed >= 25 );
        return totalcoins;
        return owed;
    }
    else 
    {
        return totalcoins;
        return owed;
    }
}


//fungsi untuk mengurangi input dengan 10 dan menghitung jumlah koin
int calculate10 ()
{
    if (owed < 25 && owed >=10 )
    {
        do
        {
          owed = owed-10;
          totalcoins++;      
        }
        while (owed >= 10 );
        return totalcoins;
        return owed;
    }
}



//fungsi untuk mengurangi input dengan 5 dan menghitung jumlah koin
int calculate5 ()
{
    if (owed < 10 && owed >=5 )
    {
        do
        {
          owed = owed-5;
          totalcoins++;      
        }
        while (owed >= 5 );
        return totalcoins;
        return owed;
    }
}


//fungsi untuk mengurangi input dengan 1 dan menghitung jumlah koin
int calculate1 ()
{
    if (owed < 5 && owed >=1 )
    {
        do
        {
          owed = owed-1;
          totalcoins++;      
        }
        while (owed >= 1 );
        return totalcoins;
        return owed;
    }
}
