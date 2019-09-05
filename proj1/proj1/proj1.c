// proj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "proj1.h"

int main(int argc, char *argv[])
{
	if (argc <= 1) {
		printf("You have not provided any names of binary files\n");
		exit(0);
	}

	CheckBinaryName(argv);

}

void CheckBinaryName(char ** argv)
{
	struct stat buffer;
	int status;
	status = lstat(argv[1], &buffer);
	printf("%d", status);
}
