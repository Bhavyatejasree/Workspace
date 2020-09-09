#include<stdio.h>
void main()

{
	char ch;
	
	printf("enter an alphabet:\n");
	scanf("%c", &ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
	
	   printf("entered alphabet is a vowel\n");
	
	else
	
	   printf("entered alphabet is a consonant\n");
	
}
