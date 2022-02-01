/*2. Accept N numbers from user and return difference between frequency of 
even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
Program Layout :*/

#include<iostream>
using namespace std;
int CountDiff(int Arr[],int iLength)
{
	int i=0,iEvenSum=0,iOddSum=0,Diff=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iEvenSum=iEvenSum+Arr[i];
		}
		else
		{
			iOddSum=iOddSum+Arr[i];
		}
	}
	Diff=iEvenSum-iOddSum;
	return Diff;
}
		
int main()
{
	int iSize=0,i=0,iRet=0;
	int *p=NULL;
	
	cout<<"Enter Number of Elements";
	cin>>iSize;
	
	p=new int[iSize];
	
	cout<<"Enter Elements\n";
	for(i=0;i<iSize;i++)
	{
		cin>>p[i];
	}
	iRet=CountDiff(p,iSize);
	cout<<"Difference is :"<<iRet;
	//delete p[];
	return 0;
}

	