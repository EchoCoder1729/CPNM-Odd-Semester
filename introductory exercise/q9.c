#include <stdio.h>
int main()
{
	char x;
	printf("Enter a charecter:");
	scanf("%c",&x);
	if (x>='a' & x<='z')
	{
		printf("This is a small case letter\n");
	}
	else if (x>='A' & x<='Z')
	{
		printf("This is a capital letter\n");
	}
	else if (x>='0' & x<='9')
	{
		printf("This is a digit\n");
	}
	else
	{
		printf("This is a special symbol\n");
	}
	return 0;
}
