/*Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
void CommonBits(UINT iNo1, UINT iNo2)
{
// Logic
}*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
	int iCnt=1;
	UINT iResult=0x00000000;
	iResult=iNo1&iNo2;
	cout<<"Common bits on in both numbers are:\n";
	while(iResult!=0)
	{
		if((iResult&1)==1)
		{
			cout<<iCnt<<"\t";
		}
		iCnt++;
		iResult=iResult>>1;
	}
	
}

int main()
{
	UINT iNo1=0,iNo2=0;
	
	cout<<"Enter First Number\n";
	cin>>iNo1;
	
	cout<<"Enter Second Number\n";
	cin>>iNo2;
	
	CommonBits(iNo1,iNo2);
	return 0;
}