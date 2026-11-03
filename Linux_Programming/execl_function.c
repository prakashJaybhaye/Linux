#include <stdio.h>
#include <unistd.h>

int main ()
{
    printf("Befor execl\n");

    fflush(stdout);

    execl("/bin/ls","ls", "-l", (char*) NULL);
    
    perror ("execl failed");

    return 1;

}
