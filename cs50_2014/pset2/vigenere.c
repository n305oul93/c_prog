#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Program to cipher plaintext using Vigenere cipher */

int main(int argc, string argv[])
{
    //check for correct number of arguments
    if(argc == 1 || argc > 2)
    {
        printf("Usage: ./vigenere <keyword>\n");
        return 1;
    }
    
    //check that supplied keyword is alphabetic
    string keyword = argv[1];
    for(int i = 0, n = strlen(keyword); i < n; i++)
    {
        if(!isalpha(keyword[i]))
        {
            printf("Keyword must contain only letters A-Z and a-z.\n");
            return 1;
        }
    }
    
    //prompt for plaintext and encipher
    string plain_text = GetString();
    int l = strlen(keyword);
    int counter = 0;
    
    for(int j = 0, k = strlen(plain_text); j < k; j++)
    {
        if(isalpha(plain_text[j]))
        {
            if(isupper(plain_text[j]))
            {
                // find key value
                int key = toupper(keyword[counter]) - 65;
                int cipher_letter = (((plain_text[j] - 65) + key) % 26) + 65;
                printf("%c", cipher_letter);
                counter += 1;
                if(counter == l)
                {
                    counter = 0;
                }
            }
            else if(islower(plain_text[j]))
            {
                // find key value
                int key = tolower(keyword[counter]) - 97;
                int cipher_letter = (((plain_text[j] - 97) + key) % 26) + 97;
                printf("%c", cipher_letter);
                counter += 1;
                if(counter == l)
                {
                    counter = 0;
                }
            }
        }
        else
        {
            printf("%c", plain_text[j]);
        }
    }
    
    printf("\n");
}
