#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0;
	char Arr[10];

	fd=open("LB17.txt",O_RDWR);
	if(fd==-1)
	{
		cout<<"Unable to open the file";
		return -1;
	}
	lseek(fd,-5,2);
	read(fd,Arr,5);
	write(1,Arr,5);
	cout<<"\n";
	close(fd);
	return 0;

}