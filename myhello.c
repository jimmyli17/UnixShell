/* 
 * myint.c - Another handy routine for testing your tiny shell
 * 
 * usage: myint <n>
 * Sleeps for <n> seconds and sends SIGINT to itself.
 *
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char **argv) 
{
    int test;
    pid_t pid; 
    fprintf(stdout, "Hello, please input a number\n");
    scanf("%d", &test);
    fprintf(stdout, "test val = %d\n", test);
	
    pid = getpid(); 

    if (kill(pid, SIGINT) < 0)
       fprintf(stderr, "kill (int) error");

    exit(0);

}
