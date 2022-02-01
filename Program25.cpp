
#include<iostream>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

int main()
{
	int fd=0;
	fd=creat("Marvellous.txt",0777);

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