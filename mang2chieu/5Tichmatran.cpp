#include<bits/stdc++.h>
using namespace std;
void nhap(int a[][50],int &n,int &m)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
}
void tich(int a[][50],int b[][50],int n,int m,int p)
{
	int arr[50][50];
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<p;j++){
	arr[i][j]=0;
	for(int k=0;k<m;k++)
		{
		arr[i][j]+=a[i][k]*b[k][j];
		}
	}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++)
		{
		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
main()
{
	int n,m,p;
	cin>>n>>m>>p;
	int a[50][50],b[50][50];
	nhap(a,n,m);
	nhap(b,m,p);
	tich(a,b,n,m,p);
}
