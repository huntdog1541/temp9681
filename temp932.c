#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char ** argv)
{
	
	pid_t pid;
	int status;
	
	const unsigned int MAX_LEN = 35;
	char *cmd[MAX_LEN];
	//char newpath[1000];
	
	cmd[0] = "ls";
	cmd[1] = "-l";
	
	
	pid = fork();
	if(pid)
	{
			printf(" Parenting running\n");
	}
	else
	{
		execvp(*cmd, cmd);
		printf("Executing failed\n");
	}
	
	while(wait(&status) != pid)
	{
}
	
	printf("Parent found process %d is done\n", pid);
	
	return 0;
}
