#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    printf("Main program PID = %d\n", getpid());
    fflush(stdout);

    pid_t pid = fork();

    if (pid < 0)
    {
        printf("fork failed\n");
        return 1;
    }
    else if (pid == 0)
    {
        printf("Child will execute tree\n");
        fflush(stdout);
        execl("/usr/bin/tree", "tree", (char *)NULL);
        printf("execl failed\n");
        return 1;
    }
    else
    {
        waitpid(pid, NULL, 0);

        printf("Tree finished, parent main code continues\n");
    }

    return 0;
}
