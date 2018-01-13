#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int min = get_int();
    min = (192 * min)/16;
    printf("Bottles: %i\n",min);
    
}