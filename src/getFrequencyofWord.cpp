/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include <string.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int word_len = strlen(word), count = 0, i = 0;
	char *temp;
	while (*str)
	{
		temp = str;
		while (*temp && *temp == word[i])
		{
			i++;
			temp++;
		}
		if (i == word_len)
		{
			count++;
			i = 0;
		}
		str++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word)
{

	return 0;
}

