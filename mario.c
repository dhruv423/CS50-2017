#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Height: ");
    int h = get_int();
    if(h < 0 || h > 23){
        printf("Error");
        printf("Height: ");
        h = get_int();
    }
    
    if (h == 0)
        return 0;
    
    for(int i = 0; i < h; i++) 
	{
		
        for(int x = 0; x < h-i-1; x++)
        {
            printf(" ");
        }
        
		for(int o = 0; o < i+2; o++)
		{
			printf("#");
		}
		printf("\n");
	}	
	
}