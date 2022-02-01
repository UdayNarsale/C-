#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>

using namespace std;

int main()
{
	int fd=0;
	char Arr[]="Hello";

	fd=open("LB17.txt",O_RDWR|O_APPEND);
	if(fd==-1)
	{
		cout<<"Unable to open file\n";
	}

	write(fd,Arr,5);

	close(fd);
	return 0;
}