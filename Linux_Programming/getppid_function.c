#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("PID of Process is = %d\n",getpid());
    printf("PID of Parent Process is = %d\n",getppid());
}
