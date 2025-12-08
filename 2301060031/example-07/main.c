#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{
	pid_t p,q;
	printf("before fork\n");
	p=fork();
	if(p==0)
	{
		printf("I am first child having Pid &d\n",getpid());
		printf("my parents Pid is %d\n",getppid());
	}
	else
	{
		q=fork();
		if(q==0)
		{
			printf("I am second chil having PID %d\n",getpid());
			printf("second childs parent PID is %d\n",getppid());
		}
		else
		{
			//wait(NULL);
			waitpid(p,NULL,0);
			printf("I am parent having id %d\n",getpid());
			printf("my first childs PID id %d\n",p);
			printf("my second childs PID is %d\n",q);
		}
	}
}
