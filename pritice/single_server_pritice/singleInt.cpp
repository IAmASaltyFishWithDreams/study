#include <iostream>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
void sig_int(int signo)
{
    /* printf("sig_int\n"); */
    std::cout << "Process pid :" << getpid() << std::endl;
    exit(-1);
}

int main(int argc, char *argv[])
{
    signal(SIGINT, sig_int);
    while (1) ;
    return 0;

}

