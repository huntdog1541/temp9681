#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
	int processID;
	//int processID2;
	//pid_t pid;
	char *pathVar;
	processID = fork();
	
	pathVar = getenv("PATH");
	if(processID)
	{
		printf("Printing Parent Statement\n");
		
	}
	else
	{
		printf("Child: pid  = %d\n", processID);
		printf("Printing Child Statement\n");
		execlp(pathVar, "ls -l", NULL);
		//execlp(pathVar, "gcc -g -Wall printargs.c -o -pa", NULL);
		printf("\nExecuting command failed");
		//processID2 = fork();
		/*if(processID2)
		{
			//execlp("./pa", "./pa", " Hello there", NULL);
		}
		else
		{
		//execlp("home/daivd/Documents/SNI/Project1/", "./pa Hello there", NULL);
		execlp("stdout", "gcc -g -Wall printargs.c -o -pa", NULL);
		
		}*/
	}
	
	return 0;
}
