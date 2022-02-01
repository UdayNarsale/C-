#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[6];

	cout<<"Enter file name\n";
	cin>>Fname;

	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	else
	{
		cout<<"File successfully opened with fd :"<<fd<<"\n";
	}
	iRet=read(fd,Data,6);
	write(1,Data,iRet);
	close(fd);
	return 0;
}