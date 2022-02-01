/*1. Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 3
Program Layout :*/

#include<iostream>
using namespace std;
int Even(int Arr[],int iNo)
{
	int iCnt=0,i=0;
	for(i=0;i<iNo;i++)
	{
		if((Arr[i]%2)==0)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int iValue=0,i=0,iRet=0;
	cout<<"Enter Number of Elements\n";
	cin>>iValue;
	
	int *p=NULL;
	p=new int[iValue];
	
	cout<<"Enter Elements\n";
	for(i=0;i<iValue;i++)
	{
		cin>>p[i];
	}
	iRet=Even(p,iValue);
	cout<<"Count of Even Numbers Are :"<<iRet;

	return 0;
}
	