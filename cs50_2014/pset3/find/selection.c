/**
 * selection.c
 *
 *
 * selection sort implementation
 */
 
 void selection_sort(int values[], int n)
 {
    // while the list is out of order
    for (int = 0; i < n; i++)
    {
        int smallest = values[i];
        int smallest_location = i;
        
        // go through the entire list
        for (int j = i + 1; j < n; j++)
        {
            // find the smallest numbers
            if (smallest > values[j])
            {
                smallest = values[j];
                smallest_location = j;
            }
        }
        
        // place it in the beginning of the list
        values[smallest_location] = values[i];
            
        // put the beginning of the list where the smallest number was
        values[i] = smallest;
    }
 }
