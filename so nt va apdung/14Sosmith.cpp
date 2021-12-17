#include<bits/stdc++.h>
using namespace std;
bool check(long n)
{
	if(n<2) return  false;
	else{
		for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
		return true;
	}
}
int count(long n)
{
	int s=0;
	while(n!=0)
	{
		int a=n%10;
		s+=a;
		n/=10;
	}
	return s;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,s,N;
		cin>>n;
		N=n;
		s=count(n);
		long x=0;
		while(n%2==0)
		{
			x+=2;
			n/=2;
		}
		for(int i=3;i<=sqrt(n);i+=2)
		{
			while(n%i==0)
			{
				x+=count(i);
				n/=i;
			}
		}
		if(n>1) x+=count(n);
		if(x==s&&check(N)==false) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
