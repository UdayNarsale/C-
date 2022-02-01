/*Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
// Logic
}
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask=0x00000001;
	UINT iMask2=0x0000001;
	iMask=iMask<<iStart;
	iMask2=iMask2<<(iEnd-1);
	while(iMask!=iMask2)
	{
		iNo=iMask^iNo;
		iMask=iMask<<1;
	}
	return iNo;
}

int main()
{
	UINT iNo=0;
	int iStart=0,iEnd=0;
	cout<<"Enter the number: ";
	cin>>iNo;
	cout<<"Enter the Range\n";
	cout<<"From: ";
	cin>>iStart;
	cout<<"To: ";
	cin>>iEnd;
	
	cout<<"result is: "<<ToggleBitRange(iNo,iStart,iEnd);
	return 0;
}