#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x=0;
		cin>>n;
		while(n%2==0)
		{
			x=2;
			n/=2;
		}
		for(int i=3;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				x=i;
				n/=i;
			}
		}
		if(n!=1) x=n;
		cout<<x;
		cout<<endl;
	}
}
