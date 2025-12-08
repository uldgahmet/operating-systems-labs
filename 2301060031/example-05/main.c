#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd,fd1;
	fd=open("dup",O_RDONLY);
	printf("old file descriptor %d\n",fd);
	fd1=dup2(fd,7);
	printf("new file descr. %d\n", fd1);
}
