#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf("Child is Running \n");
        sleep (3);
        printf("Child is exiting \n");
    }

    else
    {
        printf("Waiting for child %d\n",pid);
        waitpid(pid,NULL,0);
        printf("Child Finished \n");
    }
}
