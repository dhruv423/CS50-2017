#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float change = get_float();
    
    if (change < 0)
    {
        printf("How much change is owed?");
        change = get_float();
    }
    
    int cent = round(change*100);
    
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int coin = 0;
    int remain = 0;
    
    // Quarters
    coin = cent / quarter;
    remain = cent % quarter;
    
    // Dimes
    coin += remain / dime;
    remain = remain % dime;
    
    // Nickels
    coin += remain/ nickel;
    remain = remain % nickel;
    
    coin += remain;
    
    printf("%i\n",coin);
    
    
}