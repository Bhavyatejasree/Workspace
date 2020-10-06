

#include <stdioh>


void common_words(char*, char*)

void main()
{
	char a[30];
	char b[30];
	char c;

	printf("enter string");

	printf("string 1:");
	gets(a);

	printf("string 2:");
	gets(b);

	c = common_words(a,b);

	printf("commonn words are: %s", c);
}

void common_words(char* s1, char* s2)
{
}




