/*Write a program which accept one number from user and check whether 
9th and 12th bit is on or off.
Input : 2432
Output : TRUE
BOOL ChkBit(UINT iNo)
{
// Logic
}
*/

#include<iostream>
#include<stdbool.h>
using namespace std;
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
	UINT iMask=0x00000900;
	if((iNo&iMask)==iMask)
		return true;
	else 
		return false;
}

int main()
{
	UINT iNo=0;
	bool bRet=false;
	cout<<"Enter the number: ";
	cin>>iNo;
	bRet=ChkBit(iNo);
	if((bRet)==1)
		cout<<"TRUE";
	else
		cout<<"False";
	return 0;
}
	
	