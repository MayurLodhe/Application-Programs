#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter Year:";
	cin>>year;
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
		{
			cout<<"Leap year";
	}else
	{
		cout<<"Not leap year";
    }   
		
	}else
	{
		cout<<"Leap year";
	}else
    }
	{
		cout<<"not leap year";
		
	}
	return 0;
}