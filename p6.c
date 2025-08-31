#include <stdio.h>
#define TRUE 1
#define FALSE 0

void make_copy_of_string(const char str[], char str_copy[]);
void keep_letters(char[]);
void convert_upper_to_lower_case(char[]);
_Bool is_palindrome(const char[]);

int main (void)
{
	char phrase[101];

	printf("Enter a phrase: ");
	fgets(phrase, 101, stdin);
	
	if(is_palindrome(phrase))
		printf("\nThe phrase: %s\nIs a palindrome!\n", phrase);
	else
		printf("Your phrase: %s\nIs not a palindrome!\n", phrase);

	return 0;
}

void make_copy_of_string(const char str[], char str_copy[])
{
	int i=0;

	while(str[i] != '\n' && str[i] != '\0')
	{
		str_copy[i] = str[i];
		i++;
	}
	str_copy[i] = '\0';


}

void keep_letters(char str[])
{
	int i=0, j=0;

	while(str[i] != '\0')
	{
		if( ('A'<=str[i] && str[i] <= 'Z') || ('a'<=str[i] && str[i] <= 'z') )
		{
			str[j] = str[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	
	str[j] = '\0';


}

void convert_upper_to_lower_case(char str[])
{
	int i=0;
	
	while(str[i] != '\0')
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		
		i++;

	}
}

_Bool is_palindrome(const char str[])
{
	char str_copy[101];

	make_copy_of_string(str, str_copy);
	puts(str_copy);

	keep_letters(str_copy);
	puts(str_copy);

	convert_upper_to_lower_case(str_copy);
	puts(str_copy);

	int i = 0, j = 0;

	while(str_copy[j] != '\0')
	{
		j++;
	}

	j--;

	while(i < j)
	{
		if(str_copy[i] != str_copy[j])
		{
			return 0;
		}
		
		i++;
		j--;
	}

	return 1;

}
