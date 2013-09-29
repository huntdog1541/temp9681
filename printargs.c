#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
	int i = 0;
	printf("Argc =  %d\n", argc);
	do
	{
	printf("argv[%d] = |%s|\n", i, argv[i]);
	i++;
    }while(i < argc);
	
	
	return EXIT_SUCCESS;
}
