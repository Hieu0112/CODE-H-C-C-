#include<bits/stdc++.h>
using namespace std;
bool check(long n)
{
	if(n<2) return false;
	else{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	}
	return true;
}
bool checkso(long n)
{
	long m=n/10;
	int x=n%10,y=m%10;
	if(x>y)
	while(m!=0)
	{
	x=n%10;
	y=m%10;
	if(x<=y) return false;
	n/=10;
	m/=10;	
	}
	else if(x==y) return false;
	else{
		while(m!=0)
	{
	x=n%10;
	y=m%10;
	if(x>=y) return false;
	n/=10;
	m/=10;	
	}
		}		
	return true;
}
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int dem=0;
		cin>>n;
		for(int i=pow(10,n-1)+1;i<pow(10,n);i+=2)
		if(checkso(i))
		if(check(i)) dem++;
		cout<<dem<<endl;
	}
}
