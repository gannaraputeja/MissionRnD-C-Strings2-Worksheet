/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include <string.h>

char * get_last_word(char * str)
{
	int i = 0;
	char *word = (char*)malloc(strlen(str));
	while (*str)
	{
		word[i++] = *str;
		if (*str == ' ')
			i = 0;
		str++;
	}
	word[i] = '\0';
	return word;
}
