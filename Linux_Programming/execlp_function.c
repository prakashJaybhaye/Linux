#include <stdio.h>
#include <unistd.h>

int main ()
{
    printf("Befor execl\n");

    fflush(stdout);

    execlp("ls","ls", "-l", (char*) NULL);
    
    perror ("execl failed");

    return 1;

}
