#include<bits/stdc++.h>
using namespace std;
long modulo=1e9+7;
long tich(long a,long b)
{
	long s=1;
	for(int i=0;i<b;i++)
	{
		s=s*a;
		s%=modulo;
	}
	return s;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long a[n];
		cin>>a[0];
		long s=a[0];
		long _tich=a[0];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			s=__gcd(a[i],s);
			_tich=(_tich*a[i])%modulo;
		}
		cout<<tich(_tich,s)<<endl;
	}
}
