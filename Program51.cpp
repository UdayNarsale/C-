#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,iRet=0;
	char Fname[20];

	cout<<"Enter file name\n";
	cin>>Fname;

	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		cout<<"Unable to open the file\n";
		return -1;
	}
	iRet=lseek(fd,0,2);
	cout<<"File size is : "<<iRet<<"\n";
	close(fd);
	return 0;
}