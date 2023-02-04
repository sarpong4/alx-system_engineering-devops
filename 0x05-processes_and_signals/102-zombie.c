#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
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
 * Return: always 1
 */
int main(void)
{
	int i;
	pid_t zombie;
	for (i = 0; i < 5; i++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
		exit(0);
	}
	infinite_while();
	return (0);
}
