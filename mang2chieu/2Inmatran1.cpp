#include<bits/stdc++.h>
using namespace std;
void xuat(int a[][50],int n)
{
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		for(int j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		else{
		for(int j=n-1;j>=0;j--)
		cout<<a[i][j]<<" ";
		}	
	}
}
void nhap(int a[][50],int &n)
{
		cin>>n;
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];	
	}
}
int main()
{
	int t;
	int n,a[50][50];
	cin>>t;
	while(t--)
	{
		nhap(a,n);
		xuat(a,n);
		cout<<endl;
	}
}

