/*
Your program must accept a single command-line argument:
	a keyword, k, composed entirely of alphabetical characters.

If your program is executed without any command-line arguments
	with more than one command-line argument
	or with one command-line argument that contains any non-alphabetical character
		your program should print an error (of your choice) and exit immediately, with main returning 1 (thereby signifying an error).

		
Otherwise, your program must proceed to prompt the user for a string of plaintext
 which it must then encrypt according to Vigenère’s cipher 
 ultimately printing the result (prepended with ciphertext: and ending with a newline) and exiting, with main returning 0.


Your program must only apply Vigenère’s cipher to a character if that character is a letter.
 All other characters (numbers, symbols, spaces, punctuation marks, etc.) 

Your program must preserve the case of each letter.

*/



#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LEN 80

int main(int argc, char  *argv[]) 
{ 
	// check if correct # of arguments was given
	if(argc != 2)
	{
		puts("Invalid argument calling with executabile.");
		return 1;
	}
	else
	{
		for(int i = 0, n = strlen(argv[1]); i < n; i++)
		{
			if(!isalpha(argv[1][i])) //ensuring entered key is a valid character.
			{
				puts("Key must be a-z only.");
				return 1;
			}
		}
	}
	
	// Now we know key is valid so we can store it and get its length.
	char *k = argv[1];
//	string =argv[1];
	int stringLen = strlen(k);
	
	
	// Now we need to get the text to encrypt.
	printf("Prompt user for the code to encrypt.\n");
	char string[MAX_STRING_LEN];
	fgets(string, MAX_STRING_LEN, stdin);
	
	  // Loop through text
    for (int i = 0, j = 0, n = strlen(string); i < n; i++)
    {            
        // Get the key for this letter
        int letterKey = tolower(k[j % stringLen]) - 'a';
        
        // store the case of this letter
        if (isupper(string[i]))
        {
            // Get mod num and add to appropriate case
            printf("%c", 'A' + (string[i] - 'A' + letterKey) % 26);
            
            // Only increment j when used
            j++;
        }
        else if (islower(string[i]))
        {
            printf("%c", 'a' + (string[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            // return unchanged
            printf("%c", string[i]);
        }
    }
    
    printf("\n");
	
	return 0;
}
