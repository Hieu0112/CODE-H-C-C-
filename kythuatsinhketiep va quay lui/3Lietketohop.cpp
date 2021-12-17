#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void nhap()
{
	cin>>n>>k;
	a[0]=0;
}
void xuat()
{
	for(int i=1;i<=k;i++)
	cout<<a[i];
	cout<<" ";
}
void solve(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k) xuat();
		else solve(i+1);
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		solve(1);
		cout<<endl;
	}
}
