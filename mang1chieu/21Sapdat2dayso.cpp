#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		int A[100009]={};
	for(int i=0;i<n;i++)
		{
		cin>>a[i];
		A[a[i]]++;
	}
	sort(a,a+n);
	for(int i=0;i<m;i++)
	cin>>b[i];
	for(int i=0;i<m;i++)
	{
		int k=A[b[i]];
		if(k>0)
		while(k--)
		{
			cout<<b[i]<<" ";
			A[b[i]]--;
		}
	}
	for(int i=0;i<n;i++)
	if(A[a[i]]!=0) cout<<a[i]<<" ";
	cout<<endl;
	}
}
