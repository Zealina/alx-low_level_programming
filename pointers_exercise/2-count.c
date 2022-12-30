#include "main.h"
#include <stdio.h>

/**
 * _count - Count all vowels and consonants in a string
 * @str: Pointer to the string
 * Return: Nothing
 */
void count(char *str)
{
	int index;
	char vowel[] = "aeiouAEIOU";
	int vow = 0, cons = 0, others = 0, ind;

	for (index = 0; str[index]; index++)
	{
		for (ind = 0; vowel[ind]; ind++)
		{
			if (str[index] == vowel[ind])
			{
				vow++;
			}
		}
	}
	printf("Number of vowels in the string is: %d\n", vow);
	printf("Number of consonants in the string is: %d\n", cons);
	printf("Number of other characters in the string is: %d\n", others);
}
