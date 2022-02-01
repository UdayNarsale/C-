#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fdsrc=0,fddest=0,iRet=0;
	char Fname1[30];
	char Fname2[30];

	char Buffer[1024];

	cout<<"Enter source file name\n";
	cin>>Fname1;

	fdsrc=open(Fname1,O_RDONLY);

	if(fdsrc==-1)
	{
		cout<<"Unable to open file\n";
		return -1;
	}
	else
	{
		cout<<"File successfully opened with FD :"<<fdsrc<<"\n";
	}
	cout<<"Enter destination file name";
	cin>>Fname2;

	fddest=creat(Fname2,0777);

	while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
	{
		write(fddest,Buffer,iRet);
	}
	close(fdsrc);
	close(fddest);

	return 0;
}