#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		while(n%2==0)
		{
			cout<<2<<" ";
			n/=2;
		}
		for(int i=3;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n/=i;
			}
		}
		if(n!=1) cout<<n;
		cout<<endl;
	}
}
