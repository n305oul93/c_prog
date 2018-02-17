#include <cs50.h>
#include <stdio.h>

/** Program to recreate the half-pyramid using hashes(#)
  * like the end of the Nintendo game Super Mario Brothers
 */
 
int main(void)
{
    int height;
    
    // checks for a valid height
    do
    {
        printf("Please enter height between 1 and 23: ");
        height = GetInt();
        
        if (height > 23)
        {
            printf("The value you entered is too high\n");
        }
        else if (height == 0)
        {
            printf("");
        }
        else if (height < 1)
        {
            printf("You entered an invalid negative number\n");
        }
     }
    while (height < 0 || height > 23);
    
    //loop to print pyramid height
    for (int i = 1; i <= height; i++)
    {
        // loop to print leading spaces
        for (int k = (height + 1) - (i + 1); k > 0; k--)
            {
                printf(" ");
            }
        
        // loop to print hash blocks
        for (int j = 0; j < i + 1; j++)
        { 
            printf("#");
        }
        
        printf("\n");
    }
}
