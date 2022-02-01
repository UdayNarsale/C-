#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std
int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Buffer[10];

	cout<<"Enter file name\n";
	cin>>Fname;

	fd=open(Fname,O_RDONLY);

	if(fd==-1)
	{
		cout<<"Unable to open file\n";
		return -1;
	}
	else
	{
		cout<<"File successfully opened with FD : "<<fd<<"\n";

	}
	cout<<"Data from file is : \n";

	while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,iRet);
	}
	close(fd);
	return 0;
}