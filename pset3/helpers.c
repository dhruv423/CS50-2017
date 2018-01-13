/**
 * helpers.c
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
    if (value < 0)
    {
        return false;
    }
    
    int min = 0, max = n - 1;
    
    while (n > 0)
    {
        int middle = (max - min) / 2 + min;
        
        if (values[middle] == value)
        {
            return true;
        }
        
        else if (values[middle] > value)
        {
            max = middle - 1;
        }
        
        else if (values[middle] < value)
        {
            min = middle + 1;
        }
        
        n = max - min + 1;
    }
    return false;
}
    
    


void sort(int values[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        
        int min = i;
               
        for (int j = i; j < n; j++) 
        {
            
            if (values[min] > values[j])
            {
                min = j;
            }
        }
               
        
        if (min != i)
        {
            
            int temp = values[min];
            values[min] = values[i];
            values[i] = temp;
        }
    }
    return;
}
