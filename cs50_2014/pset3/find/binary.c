#include <stdbool.h>


bool binary_search(int value, int values[], int n)
{
    int beginning = 0;
    int ending = n - 1;
    
    // while length of list > 0
    while (ending >= beginning)
    {
        // look at middle of list
        int middle = (beginning + ending) / 2;
        if (value[middle] == value)
        {
            // if number found, return true
            return true;
        }
        
        // else if middle higher, search left
        else if (values[middle] > value)
        {
            ending = middle - 1;
        }
        
        // else if middle lower, search right
        else
        {
            beginning = middle + 1;
        }
    }
    // return false
    return false;
}
