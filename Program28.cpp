
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[]="Marvellous Infosystems";

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
		cout<<"File successfully opened with FD :"<<fd<<"\n";
	}
	iRet=write(fd,Data,22);
	cout<<iRet<<" bytes gets successfully written in the file\n";

	return 0;
}
