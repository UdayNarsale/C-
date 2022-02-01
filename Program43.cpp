#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0;

	fd=open("LB17.txt",O_RDWR);

	if(fd==-1)
	{
		cout<<"Unable to open file\n";
		return -1;
	}
	lseek(fd,10,2);
	write(fd,"*",1);
	close(fd);
	return 0;
}