/*

Your program must accept a single command-line argument, a non-negative integer. 
	Let’s call it k 

If your program is executed without any command-line arguments or with more than one command-line argument
	your program should print an error message of your choice (with printf) 
	and return from main a value of 1 (which tends to signify an error) immediately.

You can assume that, if a user does provide a command-line argument, it will be a non-negative integer (e.g., 1). No need to check that it’s indeed numeric.

Do not assume that k will be less than or equal to 26.
	Your program should work for all non-negative integral values of k less than 231 - 26. I
	n other words, you don’t need to worry if your program eventually breaks if the user chooses a value for k that’s too big or almost too big to fit in an int. 
	(Recall that an int can overflow.) But, even if k is greater than 26, alphabetical characters in your program’s input should remain alphabetical characters in your program’s output
	. For instance, if k is 27, A should not become [ even though [ is 27 positions away from A in ASCII, per asciichart.com;
	A should become B, since B is 27 positions away from A, provided you wrap around from Z to A.

	
Your program must output plaintext: 
	then prompt the user for a string of plaintext 

Your program must output ciphertext:
	followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext "rotated" by k positions
	non-alphabetical characters should be outputted unchanged.

Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters.
	lowercase letters, though rotated, must remain lowercase letters.

After outputting ciphertext, you should print a newline.
 Your program should then exit by returning 0 from main.


*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STRING_LEN 80

int main(int argc, char  *argv[]) // argc # of arguments passed in. argv array of strings which contains a list of arguments passed.
{ //correct usage is argc must be 2. 
  // remember the number typed in will be a string. this is where atoi comes in.
  
  // check for 2 arguments:
  if( argc != 2)
  {
		printf("Invalid argument passing\n");
		return 1;
  }
  
  // Now we know the correct argv we can then put it into an int k.
  
  int k = atoi(argv[1]);
  
  //ensure  its not a negative number
  
  if (k < 0)
  {
		printf("K cannot be negative\n");
		return 1;
  }
  else
  {
  
		printf("Prompt user for the code to encrypt.\n");
		char string[MAX_STRING_LEN];
		fgets(string, MAX_STRING_LEN, stdin);

		// Loop through.Shift letters, and keep them either lower/upper case
		for(int i = 0, n = strlen(string); i < n; i++)
		{
	
			if islower(string[i])
				printf("%c", (((string[i]+ k) - 97) % 26) + 97);
			else if isupper(string[i])
				printf("%c", (((string[i] + k) - 65) % 26) + 65);
			// if neither then just print it.
			else
				printf("%c", string[i]);
		}
		printf("\n");
		return 0;
  
  
  }






}
