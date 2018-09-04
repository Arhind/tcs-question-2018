// Lowercase to Uppercase
// Uppercase to Lowercase

#include <stdio.h>
#include <string.h>

int lower( char s[])
{
	int i;

	for ( i = 0; i < strlen(s); ++i)
	{
		if( s[i]>='a' && s[i]<='z')
		{
			s[i] = s[i]-32;
		}
	}
}

int upper(char s[])
{
	int i;

	for (i = 0; i < strlen(s); ++i)
	{
		if( s[i]>='A' && s[i]<='Z')
		{
			s[i] = s[i]+32;
		}	
	}
}

int main()
{
	char a[50];

	printf("Enter a string in lowercase\n");
	scanf("%s", a);

	lower(a);
	printf("%s\n", a);

	upper(a);
	printf("%s\n", a);	
}
