#include<bits/stdc++.h>
using namespace std;
#define max 100
void nhap(int a[max][max],int &n,int &m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
}
void xuat(int a[max][max],int n,int m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cout<<a[i][j]<<" ";
}
void solution(int a[max][max],int n,int m)
{
	int hang=0,cot=0;
	int x,y;
	while(hang<n&&cot<m)
	{
		if(hang+1==n&&cot+1==m) break;
		x=a[hang+1][cot];
		for(int i=cot;i<m;i++)
		{
			y=a[hang][i];
			a[hang][i]=x;
			x=y;
		}
		hang++;
		for(int i=hang;i<n;i++)
		{
			y=a[i][m-1];
			a[i][m-1]=x;
			x=y;
		}
		m--;
		if(hang<n)
		{
			for(int i=m-1;i>=cot;i--)
			{
				y=a[n-1][i];
				a[n-1][i]=x;
				x=y;
			}
		}
		n--;
		if(cot<m)
		{
			for(int i=n-1;i>=hang;i--)
			{
				y=a[i][cot];
				a[i][cot]=x;
				x=y;
			}
		}
		cot++;
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		int a[max][max];
		cin>>n>>m;
		nhap(a,n,m);
		solution(a,n,m);
		xuat(a,n,m);
		cout<<endl;
	}
}
