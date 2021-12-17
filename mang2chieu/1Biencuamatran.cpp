#include<iostream>
using namespace std;
void xuat(int a[][50],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1) cout<<a[i][j]<<" ";
			else cout<<"  ";
		}
		cout<<endl;
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
	}
}

