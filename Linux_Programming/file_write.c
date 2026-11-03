#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = open("output.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(fd < 0)
    {
        printf("Open failed\n");
        return 1;
    }

    char msg[] = "Hello Embedded Linux\n";

    write(fd, msg, sizeof(msg)-1);

    close(fd);

    return 0;
}
