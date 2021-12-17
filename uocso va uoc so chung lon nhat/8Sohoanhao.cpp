#include<bits/stdc++.h>
using namespace std;
long POW(long x)
{
	long s=1;
	for(int i=0;i<x;i++)
	s*=2;
	return s;
}
bool check(long n)
{
	if(n<2) return false;
	else{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		return false;
	}
	return true;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long i,n,s,x;
		bool CHECK=false;
		cin>>n;
		for(int i=1;i<100;i++)
		{
			x=POW(i);
			if(check(x-1))
			{
				s=x*(x-1)/2;
				if(s==n)
				{
					cout<<1;
					CHECK=true;
					break;
				}
				else if(s>n) break;
			}
		}
		if(!CHECK) cout<<0;
		cout<<endl;
	}
}
