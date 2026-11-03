#include <stdio.h>
#include <unistd.h>

int main()

{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf ("This is child Process \n");
    }

    if (pid > 0 )
    {
        printf ("This is Parent Process \n"); 
    }
    
//    printf ("pid value returned by fork() = %d , actual PID of processs %d\n",pid ,getpid());
}
