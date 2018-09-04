/* Cobination of programs
	print uppercase string,
	print lowercase string,
	$ in place of vowels,
	# in place of consonant
*/

#include <stdio.h>
#include <string.h>
int i;

int lower_upper( char s[])
{
	for ( i = 0; i < strlen(s); ++i)
	{
		if( s[i]>='a' && s[i]<='z')
		s[i] = s[i]-32;
	}
		printf("%s\n", s);

	for (i = 0; i < strlen(s); ++i)
	{
		if( s[i]>='A' && s[i]<='Z')
		s[i] = s[i]+32;
	}
		printf("%s\n", s);
}

int vowel_consonant(char s[])
{
	for( i=0; i<strlen(s); i++)
	{
		if( ((s[i]=='a' || s[i]=='e') || (s[i]=='i' || s[i]=='o')) || s[i]=='u')
		s[i] = '$';
		else
		s[i] = '#';
	}
	printf("%s\n", s);
}

int main()
{
	char a[50], temp[50];

	printf("Enter a string\n");
	scanf("%s", a);

	lower_upper(a);
	vowel_consonant(a);
}