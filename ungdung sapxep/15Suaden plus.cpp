#include<bits/stdc++.h>
using namespace std;
main()
{
	long long n,k,b,x;
	cin>>n>>k>>b;
	long long a[n+1];
	for(long long i=1;i<=n;i++) a[i]=0;
	
	for(long long h=0;h<b;h++)
	{
		cin>>x;
		a[x]=1;
	}
	long long tong=INT_MAX;
	for(long long i=1;i<=n-k+1;i++)
	{
		long long dem=0;
		for(long long j=i+1;j<i+k;j++)	dem+=a[j];
		tong=min(tong,dem);
	}
	cout<<tong;
}
