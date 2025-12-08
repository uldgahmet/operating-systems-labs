#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int n,f,f1;
	char buff[10];
	f=open("seeking",O_RDWR);
	read(f,buff,10);
	write(1,buff,10);
	read(f,buff,10);
	write(1,buff,10);
}
