#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        printf("fork function failed \n");
        return 1;
    }

    else if (pid == 0)
    {
        printf ("Child will execute ls \n");
        execlp ("ls" , "ls" , "-l" , "-a" , "/tmp", (char*) NULL);
        printf("execl failed\n");
        return 1;
    }

    else
    {
        waitpid (pid , NULL, 0);
        printf("ls finished, parent progarm continue from here \n");
    }

}
