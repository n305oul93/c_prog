/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h> //remove when finished
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n < 0)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (values[i] == value)
            {
                return true;
            }
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int k = 0;
    printf("Unsorted: "); //remove when finished
    for (int a = 0; a < n; a++)  //remove when finished
    {
        printf("%d, ", values[a]);
    }
    printf("\n"); //remove when finished
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (values[j] > values[j +1])
            {
                k = values[j];
                values[j] = values[j + 1];
                values[j + 1] = k;
            }
        }
    }
    
    printf("Sorted: "); //remove when finished
    for (int a = 0; a < n; a++) //remove when finished
    {
        printf("%d, ", values[a]); //remove when finished
    } //remove when finished
    return;
}
