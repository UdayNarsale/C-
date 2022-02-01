
#include<iostream>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

int main()
{
	int fd=0;
	char Fname[30];

	cout<<"Enter file name\n";
	cin>>Fname;

	fd=creat(Fname,0777);

	if(fd==-1)
	{
		cout<<"Unable to create the file\n";	
	}
	else
	{
		cout<<"File succesfully created\n";
	}
	return 0;
}