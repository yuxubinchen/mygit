#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<errno.h>
#include<sys/select.h>
void my_err(char *err_string,int line)
{
    fprintf(stderr,"line %d  ",line);
    perror(err_string);
    exit(1);
}