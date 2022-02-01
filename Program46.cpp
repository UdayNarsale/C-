#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
	int fd=0,iRet=0,iCnt=0,i=0;
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
		for(i=0;i<iRet;i++)
		{
			if((Buffer[i]>='A')&&(Buffer[i]<='Z'))
			{
				iCnt++;
			}
		}
	}
	cout<<"Total number of capitals are : "<<iCnt<<"\n";
	close(fd);
	return 0;
}