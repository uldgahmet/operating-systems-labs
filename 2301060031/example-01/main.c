#include<stdio.h>
#include<unistd.h>
int main()
{
	int n;
	n=write(1,"hello",5);//determines how many characters will be written.
	printf("value of n is %d\n",n);
}
