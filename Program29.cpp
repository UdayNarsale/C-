#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,Ret=0;
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
		cout<<"File open successfully with fd :"<<fd<<"\n";
	}

	Ret=write(fd,Data,10);
	cout<<Ret<<" bytes gets successfully written in the file";
	return 0;

}