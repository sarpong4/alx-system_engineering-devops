#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - create a never ending while loop
 * Return: 1
 */

int infinite_while(void)
{
	while(1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - creates 5 zombie processes
 * Return: 1
 */

int main(void)
{
	pid_t zombie;
	for (int i = 0; i < 5; i++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}
	infinite_while();
	return (0);
}
