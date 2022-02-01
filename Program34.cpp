#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Buffer[1024];

	cout<<"Enter file name\n";
	cin>>Fname;

	fd=open(Fname,O_RDONLY);

	if(fd==-1)
	{
		cout<<"Unable to open the file";
		return -1;
	}
	else
	{
		cout<<"File successfully opened with fd :"<<fd<<"\n";

	}
	cout<<"Data from file is : \n";
	while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,iRet);
	}
	close(fd);
	return 0;
}
