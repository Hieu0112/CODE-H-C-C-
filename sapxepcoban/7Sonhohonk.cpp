#include<bits/stdc++.h>
using namespace std;
long solve(long *a,long n,long k)
{
	long x=0,y=0;
	for(long i=0;i<n;i++)
	if(a[i]<=k) x++;
	
	for(long i=0;i<x;i++)
	if(a[i]>k) y++;
	
	long mins=y;
	
	for(long i=0,j=x;j<n;i++,j++)
	{
		if(a[i]>k) y--;
		if(a[j]>k) y++;
		mins=min(mins,y);
	}
	return mins;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,k;
		cin>>n>>k;
		long *a;
		a=new long[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<solve(a,n,k);
		cout<<endl;
	}
}
