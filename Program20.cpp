/*`Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
// Logic
}
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask1=0x00000001;
	UINT iMask2=0x00000001;
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	if(((iNo&iMask1)==iMask1)||((iNo&iMask2)==iMask2))
		return true;
	else
		return false;
}
int main()
{
	UINT iNo=0;
	int iPos1=0,iPos2=0;
	cout<<"Enter the number: ";
	cin>>iNo;
	cout<<"Enter the first position: ";
	cin>>iPos1;
	cout<<"Enter the second position: ";
	cin>>iPos2;
	
	bool bRet=ChkBit(iNo,iPos1,iPos2);
	if(bRet==true)
		cout<<"TRUE";
	else
		cout<<"FALSE";
	
	return 0;
}