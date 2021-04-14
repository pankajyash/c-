#include <stdio.h>
int main()
{
	char value;
	printf("Please Enter A Value ");
	scanf("%c", &value);
	if(value>='A' && value<='Z' || value>='a' && value<='z')
	{
		if(value=='A' ||value=='E'||value=='I'||value=='O'||value=='U'||value=='a'||value=='e'||value=='i'||value=='o'||value=='u')
		{
			printf( " %c Is Vowel ",value );
		}
		else{
			printf( "%c is Not A Vowel ",value);
		}
	}
	else if(value>='0' && value<='9')
	{
		printf(" %c is Number Value ",value );
	}
	else{
		printf( "%c is Special Charracter",value);
	}
}
