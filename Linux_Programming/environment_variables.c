#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char *home = getenv ("HOME");
    char *user = getenv ("USER");
    char *path = getenv ("PATH");

    printf ("HOME = %s\n",home);
    printf ("USER = %s\n",user);
    printf ("PATH = %s\n",path);
}
