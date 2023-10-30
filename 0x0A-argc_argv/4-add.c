#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int result = 0;
char *inp;
while(--argc)
{
	for(inp=argv[argc]; *inp; inp++)
	{
		if(*inp < '0' || *inp > '9')
		return(printf("Error\n"),1);
		result = atoi(argv[argc]);
	}
	printf("%d\n",result);
	return (0);
}
}