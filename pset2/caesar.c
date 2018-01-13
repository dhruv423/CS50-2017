#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Resubmit\n");
        return 1;
    }
    int k = atoi(argv[1]);
    
    printf("plaintext: ");
    string code = get_string();
    int result;
    printf("ciphertext: ");
    for(int i = 0, l = strlen(code); i < l; i++)
    {
       
       if (isupper(code[i]))
       {
           result = 'A' + (code[i] - 'A' + k) % 26;
       }
       if (islower(code[i]))
       {
           result = 'a' + (code[i] - 'a' + k) % 26;
       }
       if (isalpha(code[i]))
       {
          printf("%c", result);
       }
       else
       {
          printf("%c", code[i]);
       }
    }
    printf("\n");
    return 0;
}
