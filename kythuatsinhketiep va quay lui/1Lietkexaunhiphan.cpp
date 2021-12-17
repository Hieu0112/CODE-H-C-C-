#include<bits/stdc++.h>
using namespace std;
int art[100],n;
void nhap()
{
	cin>>n;
}
void xuat()
{
	for(int i=0;i<n;i++)
	cout<<art[i];
	cout<<" ";
}
void solve(int i)
{
	for(int j=0;j<=1;j++)
	{
	art[i]=j;
	if(i==n-1) xuat();
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
		solve(0);
		cout<<endl;
	}
}
