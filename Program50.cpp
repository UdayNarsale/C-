#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,iSum=0,iRet=0,i=0;
	char Fname[20];
	char Buffer[10];
	cout<<"Enter file name\n";
	cin>>Fname;

	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}

	while((iRet=read(fd,Buffer,10))!=0)
	{
		iSum=iSum+iRet;
	}
	cout<<"File size is :"<<iSum<<"\n";
	close(fd);
	return 0;
}