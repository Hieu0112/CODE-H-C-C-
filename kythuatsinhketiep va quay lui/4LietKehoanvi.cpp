#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
bool check[100]={};
void nhap()
{
	cin>>n;
}
void xuat()
{
	for(int i=1;i<=n;i++)
	cout<<a[i];
	cout<<" ";
}
void solve(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(!check[j])
		{
			a[i]=j;
			check[j]=true;
			if(i==n) xuat();
			else solve(i+1);
			check[j]=false;
		}
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
