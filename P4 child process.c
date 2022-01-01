#include <stdio.h>

#include <sys/types.h>

#include <unistd.h>

int main()

{

    /* fork a process */

    fork();

    /* the child and parent will execute every line of code after the fork */

    printf("creating a child..\n");

    printf("Program created by Akshay kokatey\n");

    return 0;

    }

