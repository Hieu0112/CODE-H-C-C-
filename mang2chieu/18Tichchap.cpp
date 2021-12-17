#include<bits/stdc++.h>
using namespace std;
#define MAX 309
void nhap(int a[][MAX],int &n,int &m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
}
void solve(int a[][MAX],int b[][MAX],int n,int m)
{
	long x=0;
	for(int i=0;i<n-2;i++)
	{long y=0;
		for(int j=0;j<m-2;j++){
			for(int k=0;k<3;k++)
			for(int h=0;h<3;h++)
			y+=b[k][h]*a[i+k][j+h];
		}
		x+=y;
	}
	cout<<x<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c=3;
		int a[MAX][MAX];
		int kernel[MAX][MAX];
		cin>>n>>m;
		nhap(a,n,m);
		nhap(kernel,c,c);
		solve(a,kernel,n,m);
	}
}
