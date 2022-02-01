/*1.Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
int CountBits(UINT iNo)
{
// Logic
}
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
int CountBits(UINT iNo)
{
	int iCnt=0;
	while(iNo!=0)
	{
		if((iNo&1)==1)
			iCnt++;
		iNo=iNo>>1;
	}
	return iCnt;
}
int main()
{
	UINT iNo=0;
	cout<<"Enter Number\n";
	cin>>iNo;
	cout<<"Number of on Bits are: "<<CountBits(iNo);
	return 0;
}
	