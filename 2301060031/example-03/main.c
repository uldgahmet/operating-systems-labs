#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
	int n,fd,fd1;
	char buf[50];
	//fd=open("test.txt", O_RDONLY);
	n=read(0,buf,20);
	fd1=open("target",O_WRONLY|O_APPEND);
	write(fd1,buf,n);
}
