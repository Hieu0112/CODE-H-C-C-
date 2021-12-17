#include<bits/stdc++.h>
using namespace std;
long check(long *a,long n)
{
	long maxs=0;
	for(long i=0;i<n-1;i++)
	for(long j=i+1;j<n;j++)
	{
		if(a[i]<a[j]) {
			maxs=max(maxs,j-i);
			if(maxs>n-i+1) return maxs;
		}
	}
	return maxs;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		long a[n];
		for(long i=0;i<n;i++)
		cin>>a[i];
		cout<<check(a,n)<<endl;
	}
}
