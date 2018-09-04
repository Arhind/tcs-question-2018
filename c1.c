// Convert all vomels of string in $ symbol

#include<stdio.h>
#include<string.h>

char main()
{
	char a[50];
	int i;

	printf("Enter a string\n");
	scanf("%s", a);

	for( i=0; i<strlen(a); i++)
	{
		if( ((a[i]=='a' || a[i]=='e') || (a[i]=='i' || a[i]=='o')) || a[i]=='u')
		a[i] = '$';
	}
	printf("%s\n", a);
}