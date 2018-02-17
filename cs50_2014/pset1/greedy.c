#include <cs50.h>
#include <math.h>
#include <stdio.h>

/** Program to determine the minimum number of coins
  * that can be used with change that is owed
 **/
  
int main(void)
{
    float change;
    int num_coins = 0;
    
    // get change owed and check for valid input
    do
    {
        printf("O hai!  How much change is owed? \n");
        change = GetFloat();
        
        if (change < 0)
        {
            printf("You entered negative value\n");
        }
    }
    while (change < 0);
    
    //convert dollars to cents
    int cents = (int) round(change * 100);
    
    // determine number of quarters
    if (cents / 25 != 0)
    {
        int quarters = cents / 25;
        cents = cents - (quarters * 25);
        num_coins = num_coins + quarters;
    }
    
     // determine number of dimes
    if (cents / 10 != 0)
    {
        int dimes = cents / 10;
        cents = cents - (dimes * 10);
        num_coins = num_coins + dimes;
    }
    
     // determine number of nickels
    if (cents / 5 != 0)
    {
        int nickels = cents / 5;
        cents = cents - (nickels * 5);
        num_coins = num_coins + nickels;
    }
    
     // determine number of pennies
    if (cents / 1 != 0)
    {
        int pennies = cents / 1;
        cents = cents - (pennies * 1);
        num_coins = num_coins + pennies;
    }
    
    printf("%d\n", num_coins);
}
