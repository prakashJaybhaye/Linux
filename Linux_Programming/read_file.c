#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = open ("test.txt",O_RDONLY);

    if (fd< 0)
    {
        printf("Failed to open file \n");
        return 1;
    }

    char buff[100] = {0};

    int n = read(fd,buff,sizeof(buff));
    write (1,buff,n);

    close(fd);



    return 0;
}
