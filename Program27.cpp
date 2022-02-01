
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0;
	char Fname[30];

	cout<<"Enter file name\n";
	cin>>Fname;

	fd=open(Fname,O_RDWR);

	if(fd==-1)
	{
		cout<<"Unable to open file\n";
	}
	else
	{
		cout<<"File successfully opened with FD : \n"<<fd;
	}
	return 0;
}