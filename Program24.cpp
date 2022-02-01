/*3. Accept N numbers from user check whether that numbers contains 11 in 
it or not.
Input : N : 6
Elements :85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements :85 66 3 80 93 88
Output : 11 is absent
Program Layout : */

#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int Arr[],int iLength)
{
	int i=0;
	BOOL bFlag=FALSE;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			bFlag=TRUE;
			break;
		}
	}
	return bFlag;
}
int main()
{
	int iSize=0,i=0;
	BOOL bRet=FALSE;
	int *p=NULL;

	cout<<"Enter Number of Elements";
	cin>>iSize;
	p=new int[iSize];
	
	cout<<"Enter Elements\n";
	for(i=0;i<iSize;i++)
	{
		cin>>p[i];
	}
	bRet=Check(p,iSize);
	if(bRet==TRUE)
	{
		cout<<"11 is present";
	}
	else
	{
		cout<<"11 is not present";
	}
	//delete p[];
	return 0;
}

