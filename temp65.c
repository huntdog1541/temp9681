#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char ** argv)
{
	char * pathVar;
	char newpath[1000];
	
	pathVar = getenv("PATH");
	strcpy(newpath, pathVar);
	strcat(newpath, ":u/userid/bin");
	setenv("PATH", newpath, 0);
	
	//pathVar = getenv("PATH");
	
	printf("The path is %s\n", newpath);
	execlp(pathVar, "ls -l", NULL);
	printf("Executing failed\n");
	return 0;
}
