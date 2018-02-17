/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int beginning = 0;
    int ending = n - 1;
    
    while (ending >= beginning)
    {
        int middle = (beginning + ending) / 2;
        if (values[middle] == value)
        {
            return true;
        }
        
        else if (values[middle] > value)
        {
            ending = middle - 1;
        }
        
        else
        {
            beginning = middle + 1;
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
    
    return;
}
