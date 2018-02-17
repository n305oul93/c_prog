#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Program to cipher plaintext using Caeser cipher */

int main(int argc, string argv[])
{
    // check for correct number of arguments
    if(argc == 1 || argc > 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    
    //convert string to int
    int key = atoi(argv[1]);
    
    //check for negative key
    if(key < 0)
    {
        printf("Key must be a positive number.\n");
        return 1;
    }
    
    string plain_text = GetString();
    
    //encipher supplied plaintext
    for(int i = 0, n = strlen(plain_text); i < n; i++)
    {
        if(isalpha(plain_text[i]))
        {
            int c;
            if(isupper(plain_text[i]))
            {
                c = (((plain_text[i] - 65) + key) % 26) + 65;
                printf("%c", c);
            }
            else
            {
                c = (((plain_text[i] - 97) + key) % 26) + 97;
                printf("%c", c);
            }   
        }
        else
        {
            printf("%c", plain_text[i]);
        }
    }
    printf("\n");
}
