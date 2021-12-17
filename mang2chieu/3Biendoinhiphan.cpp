#include<bits/stdc++.h>
using namespace std;
void nhap(int a[][100],int &n,int &m)
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{for(int j=0;j<m;j++)
	cin>>a[i][j];
	}
}
void biendoihang(int a[][100],int m,int k)
{
	for(int j=0;j<m;j++)
	{
	if(a[k][j]==0)
	a[k][j]=2;	
	}
}
void biendoicot(int a[][100],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(a[i][k]==0)
		a[i][k]=2;	
	}
}
void thayso(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{for(int j=0;j<m;j++)
	{
		if(a[i][j]==1)
		{
		biendoihang(a,m,i);
		biendoicot(a,n,j);	
		}
	}
	}
}
void xuat(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{for(int j=0;j<m;j++)
	{if(a[i][j]==0) cout<<0<<" ";
	else cout<<1<<" ";}
	cout<<endl;}
}
int main()
{
	short t;
	int a[100][100],n,m;
	cin>>t;
	while(t--)
	{
		nhap(a,n,m);
		thayso(a,n,m);
		xuat(a,n,m);
	}
}

