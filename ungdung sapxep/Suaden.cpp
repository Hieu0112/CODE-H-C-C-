#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k,b,x;
	cin>>n>>k>>b;
	int a[n+1]={0};
	for(int i=0;i<b;i++)
	{
		cin>>x;
		a[x]=1;
	}
	int tong=INT_MAX;
	for(int i=1;i<=n-k+1;i++)
	{
		int dem=0;
		for(int j=i;j<i+k;j++)
		dem+=a[j];
		tong=min(tong,dem);
		cout<<dem<<endl;
	}
	cout<<tong;
}
