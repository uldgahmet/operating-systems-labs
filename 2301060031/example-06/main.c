#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	pid_t q;
	printf("before fork\n");
	q=fork();
	if(q==0)
	{
		printf("I am child having id %d\n",getpid());
		printf("My parents id is %d\n",getppid()); 
	}
	else
	{
		printf("my childs id is %d\n",q);
		printf("I am parent having id %d\n", getpid());
	}
	printf("Common\n");
}
